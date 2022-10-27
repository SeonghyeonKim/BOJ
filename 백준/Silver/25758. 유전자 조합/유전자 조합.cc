#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
using namespace std;

int board[26][26];
vector<string> v;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N;
	cin >> N;
	
	for(int i=0; i<N; i++) {
		string s;
		cin >> s;
		
		if(board[s[0]-'A'][s[1]-'A']<2) {
			board[s[0]-'A'][s[1]-'A']++;
			v.push_back(s);
		}
	}
	
	int si = v.size();
	vector<char> ans;
	for(int i=0; i<si; i++) {
		for(int j=0; j<si; j++) {
			if(i==j) continue;
			
			if(v[i][0]>v[j][1]) ans.push_back(v[i][0]);
			else ans.push_back(v[j][1]);
		}
	}
	
	sort(ans.begin(), ans.end());
	ans.erase(unique(ans.begin(),ans.end()),ans.end());
	
	cout << ans.size() << "\n";
	for(int i=0; i<ans.size(); i++) cout << ans[i] << " ";
	
	return 0;
}