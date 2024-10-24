// Problem: Toilet Seat
// Contest: Kattis
// URL: https://open.kattis.com/problems/toilet
// Memory Limit: 1024 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>

using namespace std;

int first_config(string seats, char curr_state) {
	
	int moves = 0;
	
	for(int i = 0; i < seats.size(); i++) {
		char seat = seats[i];
		// Before using it
		if(seat == 'D' && curr_state == 'U') {
			curr_state = 'D';
			moves++;
		}
		
		// Before leaving
		// Do not adjust it if it's the last move
		if(curr_state == 'D') {
			curr_state = 'U';
			moves++;
		}
	}
	
	return moves;
}

int second_config(string seats, char curr_state) {
	int moves = 0;
	
	for(int i = 0; i < seats.size(); i++) {
		char seat = seats[i];
		
		if(seat == 'U' && curr_state == 'D') {
			curr_state = 'U';
			moves++;
		}
		
		if(curr_state == 'U') {
			curr_state = 'D';
			moves++;
		}
	}
	
	return moves;
}

int third_config(string seats, char curr_state) {
	int moves = 0;
	
	for(int i = 0; i < seats.size(); i++) {
		char seat = seats[i];
		if(seat == 'U' && curr_state == 'D') {
			moves++;
			curr_state = 'U';
		} else if(seat == 'D' && curr_state == 'U') {
			moves++;
			curr_state = 'D';
		}
	}
	
	return moves;
}


int main() {
	
	string seats; cin >> seats;
	char init = seats[0];
	
	cout << first_config(seats.substr(1, string::npos), init) << endl;
	cout << second_config(seats.substr(1, string::npos), init) << endl;
	cout << third_config(seats.substr(1, string::npos), init) << endl;
	
	return 0;
}