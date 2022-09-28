#include <iostream>
#include <vector>
#include <algorithm>
#define pii pair<unsigned long long, unsigned long long>
using namespace std;

bool comp(pii a, pii b) {
	if(a.second==b.second) return a.first > b.first;
	return a.second > b.second;
}

int main(void) {
	int L, N, rf, rb;
	cin >> L >> N >> rf >> rb;
	
	rf-=rb;
	vector<pii> v(N);
	for(int i=0; i<N; i++) cin >> v[i].first >> v[i].second;

	sort(v.begin(), v.end(), comp);
	
	unsigned long long ans=0, time=0;
	
	for(int i=0; i<N; i++) {
		if(time < v[i].first) {
			ans = ans + rf*(v[i].first-time)*v[i].second;
			time = v[i].first;
		}
	}
	
	cout << ans;
	
	return 0;
}