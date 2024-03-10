#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#define pii pair<long long, long long>
using namespace std;

vector<pii> v[100001];

struct lo {
	int idx;
	vector<int> route;
};

bool cmp1(pii a, pii b) {
	if(v[a.first].size() == v[b.first].size()) return a > b;
	return v[a.first].size() > v[b.first].size();
}

struct cmp2 {
	bool operator() (pii a, pii b) {
		if(a.second==b.second) return a.first > b.first;
		return a.second > b.second;
	}
};

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

	int N, M, A, B, C;
	cin >> N >> M >> A >> B >> C;
	
	for(int i=0; i<M; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		
		v[a].push_back({b, c});
		v[b].push_back({a, c});
	}
	
	// 나무가 많은 순으로 정렬
	for(int i=1; i<=N; i++) {
		sort(v[i].begin(), v[i].end(), cmp1);
	} 
	
	vector<int> tree(N+1, 0);
	
	// BFS
	vector<int> visited(N+1, 0);
	queue<lo> q;
	q.push({B, vector<int> (1, B)});
	visited[B] = 1;
	
	while(!q.empty()) {
		int cur = q.front().idx;
		vector<int> path = q.front().route;
		q.pop();
		
		if(cur == C) {
			tree = path;
			break;	
		}
		
		for(int i=0; i<v[cur].size(); i++) {
			int next = v[cur][i].first;
			
			if(visited[next] == 0) {
				visited[next] = 1;
				path.push_back(next);
				q.push({next, path});
				path.pop_back();
			}
		}
	}
	
	vector<int> goal(N+1, 0);
	for(int i=0; i<tree.size(); i++) {
		goal[tree[i]] = 1;
	}
	
	// 최단 시간
	priority_queue<pii, vector<pii>, cmp2> pq;
	visited.assign(N+1, 0);
	pq.push({A, 0});
	
	while(!pq.empty()) {
		pii cur = pq.top();
		pq.pop();
		
		if(visited[cur.first] == 1) continue;
		visited[cur.first] = 1;
			
		if(goal[cur.first] == 1) {
			cout << cur.first;	
			return 0;
		}
		
		for(int i=0; i<v[cur.first].size(); i++) {
			pii next = v[cur.first][i];
			
			if(visited[next.first]==0) {
				pq.push({next.first, cur.second + next.second});
			}
		}
	}
	
    return 0;
}
