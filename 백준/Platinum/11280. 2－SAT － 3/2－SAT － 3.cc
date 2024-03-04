#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#define MAX 20001
using namespace std;
 
int N, M;
vector<int> edge[MAX], redge[MAX];
stack<int> st;		
int visited[MAX];	// 노드에 방문한 순서 
vector<vector<int>> sccs;

int notX(int x) {
	if(x>N) return x-N;
	return x+N;
}

void dfs(int cur) {
	visited[cur] = 1;
	
	for(int i=0; i<edge[cur].size(); i++) {
		int next = edge[cur][i];
		
		if(visited[next] == 0) {
			dfs(next);
		}
	}
	st.push(cur);
}

void rdfs(int cur, vector<int> &v) {
	visited[cur] = 1;
	
	for(int i=0; i<redge[cur].size(); i++) {
		int next = redge[cur][i];
		
		if(visited[next] == 0) {
			rdfs(next, v);
		}
	}
	v.push_back(cur);
}

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
	
	cin >> N >> M;
	
	for(int i=0; i<M; i++) {
		int a, b;
		cin >> a >> b;
		
		if(a<0) a = abs(a) + N;
		if(b<0) b = abs(b) + N;
		
		edge[notX(a)].push_back(b);
		redge[b].push_back(notX(a));
		
		edge[notX(b)].push_back(a);
		redge[a].push_back(notX(b));
	}
	
	for(int i=1; i<=N; i++) {
		if(visited[i] == 0)
			dfs(i);
		
		if(visited[i+N] == 0)
			dfs(i+N);
	}
	
	for(int i=1; i<=2*N; i++) {
		visited[i] = 0;
	}
	
	while(!st.empty()) {
		int cur = st.top();
		st.pop();
		
		if(visited[cur] == 0) {
			vector<int> v;
			rdfs(cur, v);
			sccs.push_back(v);
		}
	}
	
	for(int i=1; i<=2*N; i++) {
		visited[i] = 0;
	}
	 
	for(int i=0; i<sccs.size(); i++) {
		// X와 not X 값은 역
		// 같은 SCC에 X와 not X가 있는 경우, 성립 X 
		for(int j=0; j<sccs[i].size(); j++) {
			int x = sccs[i][j];
			
			if(x>N) {
				if(visited[x] || visited[x-N]) {
					cout << 0;
					return 0;
				}	
			}
			else {
				if(visited[x] || visited[x+N]) {
					cout << 0;
					return 0;
				}
			}
			
			visited[x] = 1;
		}
		
		for(int j=0; j<sccs[i].size(); j++) {
			visited[sccs[i][j]] = 0;
		}
	}
	
	cout << 1;
    
    return 0;
}