#include <iostream>
#include <cmath>
#include <string>

using namespace std;

/*
int string_to_int(string int_rep, int n) {

  int parsed_int = 0;
  int digits = n - 1;

  while(!int_rep.empty()) {
    parsed_int += (int_rep[0] - '0') * pow(10 * 1.0, digits--);
    int_rep = int_rep.substr(1, string::npos);
  }

  return parsed_int;

}
*/

int string_to_int(string int_rep, int n) {

  if(int_rep.size() == 1) {
    return int_rep[0] - '0';
  }

  return (int_rep[0] - '0') * (pow(10 * 1.0, n - 1)) + string_to_int(int_rep.substr(1, string::npos), n - 1);

}

int main() {

  cout << string_to_int("1345", 4) << endl;
  cout << string_to_int("1", 1) << endl;
  cout << string_to_int("3", 1) << endl;

  string large_number = "123123123";
  cout << string_to_int(large_number, large_number.size()) << endl;


  return 0;
}
