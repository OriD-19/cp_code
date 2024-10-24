// Problem: Eight Queens
// Contest: Kattis
// URL: https://open.kattis.com/problems/8queens
// Memory Limit: 1024 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <vector>

using namespace std;


bool validQueen(vector<string> board, int i, int j) {
	
	// check vertical
	for(int a = i + 1; a % 8 != i; a++) {
		if(board[a % 8][j] == '*') {
			return false;
		}
	}
	
	// check horizontal
	for(int b = j + 1; b % 8 != j; b++) {
		if(board[i][b % 8] == '*') {
			return false;
		}
	}

	
	// check diagonal 1
	int a1 = i + 1, b1 = j + 1, a2 = i - 1, b2 = j - 1;
	
	while(a1 < 8 && b1 < 8) {
		if(board[a1][b1] == '*') {
			return false;
		}
		a1++;
		b1++;
	}
	
	while(a2 > 0 && b2 > 0) {
		if(board[a2][b2] == '*') {
			return false;
		}
		a2--;
		b2--;
	}
	
	
	// check diagonal 2
	a1 = i + 1;
	b1 = j - 1;
	a2 = i - 1;
	b2 = j + 1;
	
	while(a1 < 8 && b1 > 0) {
		if(board[a1][b1] == '*') {
			return false;
		}
		a1++;
		b1--;
	}
	
	while(a2 > 0 && b2 < 8) {
		if(board[a2][b2] == '*') {
			return false;
		}
		
		a2--;
		b2++;
	}
	
	return true;
	
}

int main() {
	
	vector<string> board(8);
	int count = 0;
	
	for(string &s : board) {
		getline(cin, s);
	}
	
	for(int i = 0; i < 8; i++) {
		for(int j = 0; j < 8; j++) {
			if(board[i][j] == '*') {
				count++;
				// check if it's a valid queen
				if(!validQueen(board, i, j)) {
					cout << "invalid" << endl;
					return 0;
				}
			}
		}
	}
	
	if(count == 8) {
		cout << "valid" << endl;
	} else {
		cout << "invalid" << endl;
	}

	
	return 0;
}