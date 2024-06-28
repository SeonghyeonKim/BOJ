#include <iostream>
#include <stack>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	string s;
	cin >> s;
	
	stack<int> st;
	for(int i=0; i<s.size(); i++) {
		if(s[i]>='0' && s[i]<='9') {
			st.push(s[i]-'0');
		}
		else if(s[i]=='+') {
			int a = st.top();
			st.pop();
			int b = st.top();
			st.pop();
			
			st.push(a+b);
		}
		else if(s[i]=='-') {
			int a = st.top();
			st.pop();
			int b = st.top();
			st.pop();
			
			st.push(b-a);
		}
		else if(s[i]=='*') {
			int a = st.top();
			st.pop();
			int b = st.top();
			st.pop();
			
			st.push(a*b);
		}
		else if(s[i]=='/') {
			int a = st.top();
			st.pop();
			int b = st.top();
			st.pop();
			
			st.push(b/a);
		}
	}
	
	cout << st.top();
	
	return 0;
}
