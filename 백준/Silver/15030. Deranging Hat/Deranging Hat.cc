#include <iostream>
#include <vector>
#include <string>
#define pii pair<int, int>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	string s;
	cin >> s;
	
	vector<pii> ans;
	for(int i=0; i<s.size(); i++) {
		int tmp = i;
		
		for(int j=i+1; j<s.size(); j++) {
			if(s[tmp] > s[j]) {
				tmp = j;
			}
		}
		
		if(tmp != i) {
			swap(s[tmp], s[i]);
			ans.push_back({tmp+1, i+1});
		}
	}
	
	for(int i=ans.size()-1; i>=0; i--) {
		cout << ans[i].first << " " << ans[i].second << "\n";
	}
	
	return 0;
}
