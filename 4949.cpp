#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(void)
{
	stack<char>st;
	string s;
	getline(cin, s);
	int judge;
	
	while(s.compare(".")) {
		judge = 1;
		while(!st.empty()) st.pop();
		
		for(int i=0; i<s.length(); i++) {
			if(s[i]=='(') st.push('('); 
			else if(s[i]=='[') st.push('[');
			else if(s[i]==')') {
				if(st.empty()) {
					judge = 0;
					break;
				}
				else if(st.top()=='(') st.pop();
				else {
					judge = 0;
					break;
				}
			}
			else if(s[i]==']') {
				if(st.empty()) {
					judge = 0;
					break;
				}
				else if(st.top()=='[') st.pop();
				else {
					judge = 0;
					break;
				}
			}
		}
		
		if(judge && st.empty()) cout << "yes\n";
		else cout << "no\n";
		
		getline(cin, s);
	}
	
	return 0; 
}
