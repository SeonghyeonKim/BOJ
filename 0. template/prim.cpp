// MST by Prim
// O(E log V)
#define pii pair<int, int>

vector<pii> edge[NODE];		// group of edges
bool visited[NODE];			// check visited
int answer;					// return MST cost

int prim(void) {
	priority_queue<pii, vector<pii>, greater<pii>() > pq;
	pq.push({0,0});
	
	while(!pq.empty()) {
		int curNode = pq.top().second;
		int curDis = pq.top().first;
		pq.pop();
		
		if(visited[curNode]) continue;
		answer += curDis;
		
		for(int i=0; i<edge[curNode].size(); i++) {
			int nextNode = edge[curNode][i].second;
			int nextDis = edge[curNode][i].first;
			
			if(visited[nextNode]) continue;
			pq.push({nextDis, nextNode});
		}
	}
	
	return answer;
}
