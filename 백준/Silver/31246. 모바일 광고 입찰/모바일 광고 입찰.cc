#include <iostream>
#include <algorithm>
#include <vector>
#define pii pair<int, int>
using namespace std;

bool comp(pii a, pii b) {
	return (a.second - a.first) < (b.second - b.first);
}

int main(void) {
	cin.tie(NULL);
    ios_base::sync_with_stdio(false);

	int N, K, ans=0;
	cin >> N >> K;
	
	vector<pii> v;
	for(int i=0; i<N; i++) {
		int a, b;
		cin >> a >> b;
		
		if(a >= b) K--;
		else {
			v.push_back({a, b});
		}
	}
	
	sort(v.begin(), v.end(), comp);
	
	for(int i=0; i<v.size(); i++) {
		if(K<=0) break;
		
		ans = v[i].second - v[i].first;
		K--;
	}
	
	cout << ans;
	
    return 0;
}