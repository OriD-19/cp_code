// Program for trying out some c++ features (aliases with functions)

#include <iostream>

using namespace std;

void addOne(int& i) {
  i++;
}

int main() {

  int a = 10;
  addOne(a);
  cout << a;

  return 0;
}
