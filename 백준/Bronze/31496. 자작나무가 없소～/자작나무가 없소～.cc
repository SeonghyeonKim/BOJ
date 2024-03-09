#include <iostream>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	string S;
	
	cin >> N >> S;
	
	int ans = 0;
	for(int t=0; t<N; t++) {
		string s;
		int cnt, flag=0;
		cin >> s >> cnt;
		
		s = "_" + s + "_";
		
		for(int i=0; i<s.size(); i++) {
			if(s[i]=='_') {
				if(s.substr(i+1, S.size()) == S && s[i+S.size()+1] == '_') flag=1;
			}
		}
		
		if(flag) ans += cnt;
	}
	
	cout << ans;
	
	return 0;
}
