//Fill out this comment with your names and which bullet points you did
//Partners: Kerney and Mencarelli
//Bullet Points: 
//Extra Credit: 
//URL to cover art and music: 

#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

void print_map(const vector<vector<char>>& vec) {
	return; // stub me out
}

void set_map(const vector<vector<char>>& vec) {
	return; // Stubbed
}

int main() {
	const int ROWS = 5, COLS = 5;
	vector<vector<char>> map(ROWS,vector<char>(COLS)); // Holds map
	for (auto &row : map) {
		for (char &col : row) {
			col = '*';
		}
	}
	for (auto &row : map) {
		for (char &col : row) {
			cout << col << '\t';
		}
		cout << endl;
	}

}
