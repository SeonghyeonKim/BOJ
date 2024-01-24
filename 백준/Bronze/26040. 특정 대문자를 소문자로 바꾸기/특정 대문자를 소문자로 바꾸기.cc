#include <iostream>
#include <string>
#include <cmath>
#include <stack>
#include <vector>
using namespace std;

int alpha[26];

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	string s;
	cin >> s;
	
	char c;
	while(cin >> c) {
		alpha[c-'A']=1;
	}
	
	for(int i=0; i<s.size(); i++) {
		if(s[i]>='A' && s[i]<='Z' && alpha[s[i]-'A']) cout << char(s[i]-'A'+'a');
		else cout << s[i];
	}

	return 0;
}
