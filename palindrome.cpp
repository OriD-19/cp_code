#include <iostream>

using namespace std;

bool is_palindrome(string word) {

  if(word.size() == 1) {
    return true;
  }

  if(word.size() == 2) {
    return word[0] == word[1];
  }

  return word[0] == word[word.size() - 1] && is_palindrome(word.substr(1, word.size() - 2));

}

int main() {

  cout << is_palindrome("racecar") << endl;
  cout << is_palindrome("fernando") << endl;
  cout << is_palindrome("Fluff") << endl;
  cout << is_palindrome("gohangasalamiimalasagnahog") << endl;

  return 0;
}
