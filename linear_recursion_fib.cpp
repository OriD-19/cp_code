#include <iostream>
#include <utility>

using namespace std;

pair<int, int> linearFib(int k) {

  if(k <= 1)
    return {k, 0};

  pair<int, int> res = linearFib(k - 1);
  return {res.first + res.second, res.first};

}

int main() {

  int num;
  cin >> num;
  pair<int, int> ans = linearFib(5);

  cout << ans.first + ans.second;

  return 0;
}
