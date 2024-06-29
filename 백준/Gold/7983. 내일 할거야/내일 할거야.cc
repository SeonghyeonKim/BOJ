#include <iostream>
#include <vector>
#include <algorithm>
#define pii pair<int, int>
using namespace std;

bool comp(pii a, pii b) {
	if(a.second == b.second) return a.first < b.first;
	return a.second > b.second;
}

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N;
	cin >> N;
	
	vector<pii> v(N);
	for(int i=0; i<N; i++) cin >> v[i].first >> v[i].second;
	
	sort(v.begin(), v.end(), comp);
	
	int ans = v[0].second;
	
	for(int i=0; i<N; i++) {
		ans = min(ans, v[i].second) - v[i].first;
	}
	
	cout << ans;
	
	return 0;
}