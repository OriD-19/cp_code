#include <iostream>
#include <utility>

using namespace std;

int main() {

  string a, a1, a2, b, b1, b2;

  // Grab both rows of the grids
  cin >> a1 >> a2 >> b1 >> b2;

  // Put them in clockwise order
  swap(a2[1], a2[0]);
  swap(b2[1], b2[0]);

  a = a1 + a2;
  b = b1 + b2;

  // Erase the 'X' from each string
  a.erase(a.find('X'), 1);
  b.erase(b.find('X'), 1);

  // Magic trick:
  // Look if 'a' is a substring of 'b'
  // In which case, they are in the same orientation

  if((b + b).find(a) != string::npos)
    cout << "YES";
  else
    cout << "NO";

  return 0;
}
