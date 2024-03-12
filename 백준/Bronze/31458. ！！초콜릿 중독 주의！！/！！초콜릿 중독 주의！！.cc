#include <iostream>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N;
	cin >> N;
	
	while(N--) {
		string s;
		cin >> s;
		
		int n = 0;
		for(int i=0; i<s.size(); i++) {
			if(s[i]=='0' || s[i]=='1') {
				n = i+1;
				break;
			}
		}
		
		int a = n-1, b = s.size()-n;
		
		int ans = s[n-1]-'0';
		
		if(b>0) ans = 1;
		if(a%2) ans = !ans;
		
		cout << ans << "\n";
	}

	return 0;
}
