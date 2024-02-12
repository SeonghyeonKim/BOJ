#include <iostream>
#include <string>
using namespace std;

void test(string s) {
	for(int i=1; i<s.size(); i++) {
		switch(s[i-1]) {
			case '1':
				if(s[i]!='4' && s[i]!='5') {
					cout << "NOT\n";
					return ;
				}
				break;
			case '2':
				cout << "NOT\n";
				return ;
			case '3':
				if(s[i]!='4' && s[i]!='5') {
					cout << "NOT\n";
					return ;
				}
				break;
			case '4':
				if(s[i]!='2' && s[i]!='3') {
					cout << "NOT\n";
					return ;
				}
				break;
			case '5':
				if(s[i]!='8') {
					cout << "NOT\n";
					return ;
				}
				break;
			case '6':
				if(s[i]!='2' && s[i]!='3') {
					cout << "NOT\n";
					return ;
				}
				break;
			case '7':
				if(s[i]!='8') {
					cout << "NOT\n";
					return ;
				}
				break;
			case '8':
				if(s[i]!='6' && s[i]!='7') {
					cout << "NOT\n";
					return ;
				}
				break;
		}
	}
	cout << "VALID\n";
}

int main(void) {
	cin.tie(NULL);
    ios_base::sync_with_stdio(false);

	for(int T=1; ; T++) {
		string s;
		cin >> s;
		
		if(s=="0") break;
		
		cout << T << ". ";
		
		if(s[0]=='1' && s[s.size()-1]=='2') {
			test(s);
		} 
		else cout << "NOT\n";
	}
	
    return 0;
}