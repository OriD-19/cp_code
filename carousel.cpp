#include <iostream>

using namespace std;

int main() {
    int n, m;

    while(cin >> n >> m) {
        if(n == 0 && m == 0) {break;}
        int best_a, best_b;
        float best_deal = 1000000000.0;

        for(int i = 0; i < n; i++) {
            int a, b; cin >> a >> b;

            if(a > m) {continue;}

            float new_deal = b / (a * 1.0);

            if(new_deal <= best_deal) {
                if(new_deal == best_deal && a < best_a) {continue;}
                best_deal = new_deal;
                best_a = a;
                best_b = b;
            }
        }

        if(best_deal == 1000000000.0) {
            cout << "No suitable tickets offered" << "\n";
        } else {
            cout << "Buy " << best_a << " tickets for $" << best_b << "\n";
        }

    }

    return 0;
}