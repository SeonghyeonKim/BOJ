#include <iostream>
#include <regex>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	string s;
	string ans = "";
	while(cin >> s) {
		if(s=="E-N-D") break;
		
		if(!s.empty() && !((s[0]>='a' && s[0]<='z') || (s[0]>='A' && s[0]<='Z'))) {
			s = s.substr(1);
		}
		
		if(!s.empty() && !((s[s.size()-1]>='a' && s[s.size()-1]<='z') || (s[s.size()-1]>='A' && s[s.size()-1]<='Z'))) {
			s = s.substr(0,s.size()-2);
		}
		

		if(ans.size()<s.size()) ans = s;
	}
	
	for(int i=0; i<ans.size(); i++) cout << (char)(tolower(ans[i]));
		
	return 0;
}