#include <iostream>
#include <vector>
#include <queue>
#define pii pair<int, int>
using namespace std;

vector<pii> edge[1001];

bool visited[1001];

struct node{
	int n, cost;
	vector<int> road;
};

struct comp{
	bool operator() (node a, node b) {
		return a.cost > b.cost;
	}
};

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N, M, s, e;
	cin >> N >> M;
	 
	for(int i=0; i<M; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		
		edge[a].push_back({b,c});
	}
	cin >> s >> e;
	
	priority_queue<node, vector<node>, comp> pq;
	pq.push({s, 0, vector<int> (1,s)});
	
	while(!pq.empty()) {
		node c = pq.top();
		pq.pop();
		
		visited[c.n] = true;
		
		if(c.n==e) {
			cout << c.cost << "\n" << c.road.size() << "\n";
			for(int i=0; i<c.road.size(); i++) cout << c.road[i] << " ";
			
			return 0;
		}
		
		for(int i=0; i<edge[c.n].size(); i++) {
			int n = edge[c.n][i].first;
			int ncost = c.cost+edge[c.n][i].second;
			vector<int> nroad = c.road;
			
			if(visited[n]) continue;
			
			nroad.push_back(n);
			pq.push({n, ncost, nroad});
		}
	}
	
	return 0;
}