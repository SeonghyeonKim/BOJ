#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#define pii pair<int, int>
using namespace std;

// 종료지점 기준 오름차순 
bool comp1(pii a, pii b) {
	if(a.second == b.second) 
		return a.first < b.first;
	return a.second < b.second;
}

// 시작지점 기준 오름차순 
struct comp2 {
	bool operator() (pii a, pii b) {
		return a.first > b.first;
	}
};

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int n, d;
	cin >> n;
	
	vector<pii> v(n);
	for(int i=0; i<n; i++) {
		int a, b;
		cin >> a >> b;
		
		v[i].first = min(a, b);
		v[i].second = max(a, b);
	}
	cin >> d;
	
	sort(v.begin(), v.end(), comp1);
	
	int ans = 0, end_x = 0;
	priority_queue<pii, vector<pii>, comp2> pq;
	for(int i=0; i<n; i++) {
		end_x = v[i].second;	// 철로의 끝 지점 
		pq.push(v[i]);
		
		// 철로에 포함되지 않는다면, pop 
		while(!pq.empty() && pq.top().first < end_x - d) {
			pq.pop();
		} 
		
		ans = max(ans, int(pq.size()));
	}
	
	cout << ans;
	
	return 0;
}
