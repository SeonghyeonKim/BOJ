#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(pair<string, int> a, pair<string, int> b) {
	if(a.second == b.second) {
		if(a.first.size() == b.first.size()) {
			return a.first < b.first;
		}
		return a.first.size() > b.first.size();
	}
	return a.second > b.second;
}

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N, M;
	cin >> N >> M;
	
	map<string, int> m;
	
	for(int i=0; i<N; i++) {
		string a;
		cin >> a;
		
		if(a.size()<M) continue;;
		
		if(m.find(a)==m.end()) m.insert({a, 0});
		else m[a]++;
	}
	
	vector<pair<string, int> > v;
	for(auto &i : m) v.push_back(i);
	
	sort(v.begin(), v.end(), compare);
	
	for(auto &i : v) cout << i.first << "\n";	
	
	return 0;
}
