#include <iostream>
#include <stack>
#include <string>
using namespace std;

int alpha[26];

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

	cout.precision(2);
	cout << fixed;
	
	int N;
	string s;
	cin >> N >> s;
	
	for(int i=0; i<N; i++) cin >> alpha[i];
	
	stack<double> st;
	for(int i=0; i<s.size(); i++) {
		if(s[i] == '*') {
			double b = st.top(); st.pop();
			double a = st.top(); st.pop();
			
			st.push(a*b);
		}
		else if(s[i] == '+') {
			double b = st.top(); st.pop();
			double a = st.top(); st.pop();
			
			st.push(a+b);
		}
		else if(s[i]== '-') {
			double b = st.top(); st.pop();
			double a = st.top(); st.pop();
			
			st.push(a-b);
		}
		else if(s[i]=='/') {
			double b = st.top(); st.pop();
			double a = st.top(); st.pop();
			
			st.push(a*1.0/b);
		}
		else {
			st.push(alpha[s[i]-'A']);
		}
	}
	
	cout << st.top();
	
    return 0;
}