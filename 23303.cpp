#include <iostream>
#include <string>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	string s;
	getline(cin, s);
	
	for(int i=0; i<s.size()-1; i++) {
		if(s[i]=='D' || s[i]=='d') {
			if(s[i+1]=='2') {
				cout << "D2";
				exit(0);
			}
		}
	}
	cout << "unrated";
	
	return 0;
}
