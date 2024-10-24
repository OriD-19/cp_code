// Problem: Rock-Paper-Scissors Tournament
// Contest: Kattis
// URL: https://open.kattis.com/problems/rockpaperscissors
// Memory Limit: 1024 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <unordered_map>
#include <utility>
#include <vector>
#include <iomanip>

using namespace std;

// First number winner, second number loser
pair<int, int> decide_winner(unordered_map<string, unordered_map<string, int>> results_game, 
	int p1, 
	int p2,
	string m1,
	string m2) 
{
	
	// Player 1 Over Player 2
	int result_1 = results_game[m1][m2];
	
	if(result_1) {
		return {p1, p2};
	}
	
	return {p2, p1};
}

int main() {
	
	int n, k;
	
	while(cin >> n) {
		if(n == 0) break;
		
		cin >> k;
		cout.setf(ios::fixed,ios::floatfield);
		cout << setprecision(3);
		
		unordered_map<string, unordered_map<string, int>> results_game{
			{"rock", { {"paper", 0}, {"scissors", 1} }},
			{"paper", { {"rock", 1}, {"scissors", 0} }},
			{"scissors", { {"rock", 0}, {"paper", 1} }}
		};
		
		// Where the first number represents victories
		// And the second number represents victories + defeats
		vector<pair<int, int>> players(n);
		
		int games = (k * n * (n - 1)) / 2;
		
		while(games--) {
			int player_1, player_2;
			string move_1, move_2;
			
			cin >> player_1 >> move_1 >> player_2 >> move_2;
			
			if(move_1 != move_2) {
				pair<int, int> result = decide_winner(results_game, player_1, player_2, move_1, move_2);
				
				players[result.first - 1].first++;
				players[result.first - 1].second++;
				
				players[result.second - 1].second++;
			}
		}
		
		for(pair<int, int> player : players) {
			
			if(player.second == 0) {
				cout << "-" << endl;
				continue;
			}
			
			cout << (player.first / (player.second * 1.0)) << endl;
		}
		
		cout << endl;
	}
	
	return 0;
}