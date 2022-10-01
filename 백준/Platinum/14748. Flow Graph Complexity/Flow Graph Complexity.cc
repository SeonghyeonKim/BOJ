#include <iostream>
#include <stack>
#include <string>
#include <regex>
using namespace std;

int ans[3];

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int W;
	cin >> W;
	cin.ignore();
	string s;
	getline(cin, s);
	s = regex_replace(s, regex("[ ]+"), "");
	
	if(s.empty()) {
		cout << -1;
		return 0;
	}
	
	stack<char> c;
	for(int i=0; i<s.size(); i++) {
		if(s[i]=='S') {
			if(i+1<s.size() && s[i+1]!=',' && s[i+1]!=')' && s[i+1]!=']') {
				cout << -1;
				return 0;
			}
			ans[0]++;
		}
		else if(s[i]=='L' || s[i]=='B') {
			if(i==s.size()-1 || (s[i+1]!='(' && s[i+1]!='[')) {
				cout << -1;
				return 0;
			}
			
			if(s[i]=='L') ans[1]++;
			else ans[2]++;
		}
		else if(s[i]==',') {
			if(i==0 || i==s.size()-1 || (s[i+1]!='S' && s[i+1]!='L' && s[i+1]!='B')) {
				cout << -1;
				return 0;
			}
		}
		else if(s[i]=='(' || s[i]=='[') {
			if(i==0 || i==s.size()-1 || (s[i+1]!='S' && s[i+1]!='L' && s[i+1]!='B')) {
				cout << -1;
				return 0;
			}
			
			c.push(s[i]);
		}
		else if(s[i]==')' || s[i]==']') {
			if(i==0 || (i+1<s.size() && s[i+1]!=',' && s[i+1]!=')' && s[i+1]!=']') || c.empty()) {
				cout << -1;
				return 0;
			}
			else if ((c.top()=='(' && s[i]!=')') || (c.top()=='[' && s[i]!=']')) {
				cout << -1;
				return 0;
			}
			c.pop();
		}
		else {
			cout << -1;
			return 0;
		}
	}
	
	if(!c.empty()) {
		cout << -1;
		return 0;
	}
	
	int eb = ans[1];
	int v = ans[0] + (ans[1]+ans[2])*2;
	int ef = v + ans[2] - 1;
	
	cout << ef + W*eb - v + 2;
	
	return 0;
}