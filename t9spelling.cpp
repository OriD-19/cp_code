// Problem: T9 Spelling
// Contest: Kattis
// URL: https://open.kattis.com/problems/t9spelling
// Memory Limit: 1024 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

string get_sequence(vector<vector<char>> phone, char letter) {
	
	string sequence = "";
	
	for(int i = 0; i < phone.size(); i++) {
		vector<char> digit = phone[i];
		
		int index = (int)(find(digit.begin(), digit.end(), letter) - digit.begin());
		
		// Means that the letter is inside this digit
		if(index < (int)digit.size()) {

			char number = i + 48;
			for(int j = 0; j < index + 1; j++) {
				sequence += number;
			}
			break;
		}
	}
	
	return sequence;
}

int main() {
	
	// The number 1 is empty
	vector<vector<char>> phone{
		     {' '},       {},   {'a', 'b', 'c'},     {'d', 'e', 'f'},
		{'g', 'h', 'i'},        {'j', 'k', 'l'},     {'m', 'n', 'o'},
	  {'p', 'q', 'r', 's'},     {'t', 'u', 'v'},   {'w', 'x', 'y', 'z'}
	};
	
	int t; cin >> t;
	int test_case = 1;
	string s;
	
	// garbage collection
	getline(cin, s);
	
	while(test_case <= t) {
		getline(cin, s);
		
		string ans;
		
		for(char letter : s) {
			string new_letter = get_sequence(phone, letter);
			
			// We already typed a letter before
			if(!ans.empty()) {
				if(ans[ans.size() - 1] == new_letter[0]) {
					ans += " ";
				}
			}
			ans += new_letter;
		}
		
		cout << "Case #" << test_case << ": " << ans << endl;
		test_case++;
	}
	
	return 0;
}