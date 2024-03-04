#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#define MAX 10001
using namespace std;
 
vector<int> edge[MAX];
stack<int> st;		
int visited[MAX];	// 노드에 방문한 순서 
vector<bool> is_scc(MAX, false);	// 현재 노드의 SCC 포함 여부 
vector<vector<int>> sccs;
int order = 0;	// 현재 노드에 방문하는 순서 

bool comp(vector<int> a, vector<int> b) {
	return a[0] < b[0];
}

int DFS(int cur) {
	order++;
	visited[cur] = order;
	int min_order = order;
	st.push(cur);
	
	for(int i=0; i<edge[cur].size(); i++) {
		int next = edge[cur][i];
		
		// 방문 전 
		if(visited[next] == 0) {
			min_order = min(min_order, DFS(next));
		}
		// 방문 후 
		else if(!is_scc[next]) {
			min_order = min(min_order, visited[next]);
		}
	}
	
	// DFS 종료 이후 사이클 확인 
	// 현재 노드에 도착하는 경우 SCC 형성 
	if(min_order == visited[cur]) {
		vector<int> new_scc;
		
		while(1) {
			int tmp = st.top();
			st.pop();
			is_scc[tmp] = true;
			new_scc.push_back(tmp);
			
			if(tmp == cur) break;
		}
		
		sccs.push_back(new_scc);
	}
	
	return min_order;
}
 
int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
	
	int V, E;
	cin >> V >> E;
	
	for(int i=0; i<E; i++) {
		int A, B;
		cin >> A >> B;
		
		edge[A].push_back(B);
	}
	
	for(int i=1; i<=V; i++) {
		if(visited[i] == 0)
			DFS(i);
	}
	
	for(int i=0; i<sccs.size(); i++) 
		sort(sccs[i].begin(), sccs[i].end());
		
	sort(sccs.begin(), sccs.end(), comp);
	
	cout << sccs.size() << "\n";
	for(int i=0; i<sccs.size(); i++) {
		for(int j=0; j<sccs[i].size(); j++) {
			cout << sccs[i][j] << " ";
		}
		cout << "-1\n";
	}
    
    return 0;
}