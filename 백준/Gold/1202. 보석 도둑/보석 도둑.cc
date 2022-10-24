#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#define pii pair<int, int>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N, K;
    cin >> N >> K;

	vector<pii> a(N);
	for(int i=0; i<N; i++) cin >> a[i].first >> a[i].second;

	vector<int> b(K);
	for(int i=0; i<K; i++) cin >> b[i];
	
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	
	long long ans = 0;
	long long idx = 0;
	
	priority_queue<long long> pq;
	for(int i=0; i<K; i++) {
		while(idx<N && a[idx].first<=b[i]) {
			pq.push(a[idx].second);
			idx++;
		}
		
		if(!pq.empty()) {
	 		ans += pq.top();
			pq.pop();	
		}
	}
	
	cout << ans;

	return 0;
}