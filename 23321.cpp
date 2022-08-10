#include <iostream>
#include <string>
using namespace std;

string s[3] = {".omln", "owln.", "..oLn"};

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	string st[5];
	for(int i=0; i<5; i++) cin >> st[i];
	
	for(int i=0; i<st[0].size(); i++) {
		if(st[1][i] == 'o') {
			for(int j=0; j<5; j++) {
				st[j][i] = s[1][j];
			}
		}
		else if(st[1][i] == 'w') {
			for(int j=0; j<5; j++) {
				st[j][i] = s[0][j];
			}
		}
	}
	
	for(int i=0; i<5; i++) {
		for(int j=0; j<st[0].size(); j++) {
			cout << st[i][j];
		} 
		cout << "\n";
	}
	
	
	return 0;
}
