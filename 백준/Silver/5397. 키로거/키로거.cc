#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int T;
	cin >> T;
	
	while(T--) {
		string s;
		cin >> s;
		
		stack<char> left, right;
		
		for(int i=0; i<s.size(); i++) {
			if(s[i]=='<') {
				if(left.empty()) continue;
				
				right.push(left.top());
				left.pop();
			}
			else if(s[i]=='>') {
				if(right.empty()) continue;
				
				left.push(right.top());	
				right.pop();
			}
			else if(s[i]=='-') {
				if(left.empty()) continue;
				
				left.pop();
			}
			else {
				left.push(s[i]);
			}
		}
	
		stack<char> tmp;
		while(!left.empty()) {
			tmp.push(left.top());
			left.pop();
		}
	
		while(!tmp.empty()) {
			cout << tmp.top();
			tmp.pop();
		}
		
		while(!right.empty()) {
			cout << right.top();
			right.pop();
		}
		cout << "\n";
	}
	
	return 0;
}
