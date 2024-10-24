#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>

using namespace std;

int one() {
    return 7;
}

string two(vector<long long> &A) {
    if(A[0] > A[1])
        return "Bigger";
    else if(A[0] == A[1])
        return "Equal";

    return "Smaller";
}

long long three(vector<long long> &A) {
    vector<long long> info {A[0], A[1], A[2]};
    sort(info.begin(), info.end());
    return info[1];
}

long long four(vector<long long> &A) {
    long long sum = 0;
    for(auto &i : A) {
        sum+=i;
    }
    return sum;
}

long long five(vector<long long> &A) {
    long long sum = 0;
    for(auto &i : A) {
        if(i%2 == 0) {
            sum+=i;
        }
    }
    return sum;
}

string six(vector<long long> &A) {
    string word = ""; 

    for(auto &i : A) {
        char letter = abs((i%26))+97;
        word+=letter;
    }
    return word;
}

string seven(vector<long long> &A) {

    vector<bool> visited(200001);
    int i = 0;

    while(true) {
        if(i >= A.size() || i < 0) {
            return "Out";
        }
        if(i == A.size() - 1) {
            break;
        }
        if(visited[i]) {
            return "Cyclic";
        }
        visited[i] = true;
        i = A[i];
    }

    return "Done";
}

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, t; cin >> n >> t;

    vector<long long> A(n);

    for(auto &i : A) {
        cin >> i;
    }

    switch(t) {
        case 1:
            cout << one();
            break;
        case 2:
            cout << two(A);
            break;
        case 3:
            cout << three(A);
            break;
        case 4:
            cout << four(A);
            break;
        case 5:
            cout << five(A);
            break;
        case 6:
            cout << six(A);
            break;
        case 7:
            cout << seven(A);
            break;
        default:
            cout << "What is this";
    }

    return 0;
}