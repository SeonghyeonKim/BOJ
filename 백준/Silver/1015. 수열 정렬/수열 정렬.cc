#include <iostream>
#include <vector>
#include <algorithm>
#define pii pair<int, int>
using namespace std;

bool comp(pii a, pii b) {
	if(a.first == b.first) return a.second < b.second;
	return a.first < b.first;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N;
	cin >> N;
	
	vector<pii> v(N);
	for(int i=0; i<N; i++) {
		cin >> v[i].first;
		v[i].second = i;
	}
	
	sort(v.begin(), v.end(), comp);
	
	vector<pii> ans(N);
	for(int i=0; i<N; i++) {
		ans[i].first = v[i].second;
		ans[i].second = i;
	}
	
	sort(ans.begin(), ans.end(), comp);
	
	for(int i=0; i<N; i++) {
		cout << ans[i].second << " ";
	}
	
	return 0;
}
