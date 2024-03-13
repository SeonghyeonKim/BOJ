#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#define pii pair<int, int>
using namespace std;

bool comp (pii a, pii b) {
	if(a.first == b.first) {
		return a.second < b.second;
	}
	return a.first > b.first;
}

deque<pii> dq[100001];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, M, flag=0;
	cin >> N >> M;
	
	vector<pii> v;
	for(int i=1; i<=N; i++) {
		int a;
		cin >> a;
		
		v.push_back({a, i});	
	}
	
	sort(v.begin(), v.end(), comp);
	
	int idx=0, tmp=v[0].first;
	for(int i=0; i<N; i++) {
		if(tmp != v[i].first) {
			tmp = v[i].first;
			idx++;	
		}
			
		dq[idx].push_back(v[i]);
	}
	
	idx = 0;
	while(M--) {
		if(dq[idx].empty()) idx++;
		
		if(flag) {
			pii cur = dq[idx].back();
			dq[idx].pop_back();
			
			cout << cur.second << "\n";
			
			if(cur.first%7==0) flag = !flag;
		}
		else {
			pii cur = dq[idx].front();
			dq[idx].pop_front();
			
			cout << cur.second << "\n";
			
			if(cur.first%7==0) flag = !flag;
		}
	} 

	return 0;
}
