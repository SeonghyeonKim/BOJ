#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;
	string tmp;
	getline(cin, tmp);
	
	for(int t=1; t<=T; t++) {
		vector<int> a1(26), a2(26);
		int ans = 0;
		string a, b;
		
		getline(cin, a);
		getline(cin, b);
	
		for(int i=0; i<a.size(); i++) {
			if(a[i]>='a' && a[i]<='z') a1[a[i]-'a']++;
		}	
		
		for(int i=0; i<b.size(); i++) {
			if(b[i]>='a' && b[i]<='z') a2[b[i]-'a']++;
		}
		
		for(int i=0; i<26; i++) {
			ans += abs(a1[i] - a2[i]);	
		}
		
		cout << "Case #" << t << ": " << ans << "\n";
	}

	return 0;
}