#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int cnt[11];

bool comp(pair<int, string> a, pair<int, string> b) {
	if(a.first%2 == b.first%2) {
		if(a.first == b.first) {
			if(a.second.size() == b.second.size()) {
				return a.second < b.second;
			}
			return a.second.size() < b.second.size();
		}
		return a.first < b.first;
	}
	return a.first%2 > b.first%2;
}

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N, M;
	cin >> N >> M;
	
	vector<pair<int, string> > v;
	
	while(1) {
		int c;
		string s;
		
		cin >> c >> s;
		
		if(c==0) break;
		
		if(cnt[c] < M)	v.push_back({c, s});
		cnt[c]++;
	}
	
	sort(v.begin(), v.end(), comp);
	
	for(int i=0; i<v.size(); i++) {
		cout << v[i].first << " " << v[i].second << "\n";	
	}
	
	return 0;
}
