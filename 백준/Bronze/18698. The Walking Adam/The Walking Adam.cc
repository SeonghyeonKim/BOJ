#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	
	while(n--) {
		string s;
		cin >> s;
		int ans=0;
		
		for(int i=0; i<s.size(); i++) {
			if(s[i]=='U') ans++;
			else break;
		}
		
		cout << ans << "\n";
	}
	
 	return 0;
}
