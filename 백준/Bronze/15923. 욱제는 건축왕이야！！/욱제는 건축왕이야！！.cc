#include <iostream>
#include <cmath>
#include <vector>
#define pii pair<int, int>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);	

	int N;
	cin >> N;
	
	vector<pii> v(N);
	for(int i=0; i<N; i++) {
		cin >> v[i].first >> v[i].second;
	}
	
	int ans = 0;
	for(int i=1; i<N; i++) {
		ans += abs(v[i].first + v[i].second - v[i-1].first - v[i-1].second);
	}
	ans += abs(v[0].first + v[0].second - v[N-1].first - v[N-1].second);
	
	cout << ans;
	
	return 0;
}
