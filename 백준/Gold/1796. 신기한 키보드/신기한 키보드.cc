#include <iostream>
#include <string> 
#include <vector>
#define pii pair<int, int>
using namespace std;

int dp[27][50];

int main() {
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);
	
	string s;
	cin >> s;
	
	vector<pii> v;
	vector<pii> tmp(26, {987654321, -1});
	for(int i=0; i<s.size(); i++) {
		tmp[s[i]-'a'].first = min(tmp[s[i]-'a'].first, i);
		tmp[s[i]-'a'].second = max(tmp[s[i]-'a'].second, i);
	}
	
	for(int i=0; i<26; i++) {
		if(tmp[i].first != 987654321) {
			v.push_back(tmp[i]);
		}
	}
	
	for(int i=1; i<=v.size(); i++) {
		for(int j=0; j<s.size(); j++) {
			dp[i][j] = 987654321; 
		}
	}
	
	for(int i=0; i<s.size(); i++) {
		dp[0][i] = i;
	}
	
	for(int i=1; i<=v.size(); i++) {
		for(int j=0; j<s.size(); j++) {
			for(int k=0; k<s.size(); k++) {
				dp[i][j] = min(dp[i][j], dp[i-1][k] + abs(k - v[i-1].first) + abs(v[i-1].first - v[i-1].second) + abs(v[i-1].second - j));
				dp[i][j] = min(dp[i][j], dp[i-1][k] + abs(k - v[i-1].second) + abs(v[i-1].first - v[i-1].second) + abs(v[i-1].first - j));
			}
		}
	}
	
	int ans = 987654321;
	for(int i=0; i<s.size(); i++) {
		ans = min(ans, dp[v.size()][i]);
	}
	
	cout << ans + s.size();
	
	return 0;
}