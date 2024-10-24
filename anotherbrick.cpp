#include <iostream>

using namespace std;

int main() {

    int h, w, n; cin >> h >> w >> n;
    bool doable = true;

    for(int i = 0; i < h; i++) {
        int layer = w;
        while(layer) {
            int brick; cin >> brick;
            if(layer - brick < 0) {
                doable = false;
                break;
            }
            layer -= brick;
        }
        if(!doable) {break;}
    }
    if(!doable) {
        cout << "NO";
    } else {
        cout << "YES";
    }

    return 0;
}