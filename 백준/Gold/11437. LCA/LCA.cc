#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define pi pair<int, int>
using namespace std;

vector<int> edge[50001]; 
int parent[50001][18];		// parent[i][j]: i번 노드의 2^j번째 조상
int level[50001];
int max_level = int(floor(log2(50001)));

// node: 현재 노드
// parent_node: 현재 노드의 부모 노드
// lev: 현재 노드의 레벨 
void make_tree(int node, int parent_node, int lev) {
	level[node] = lev;
	parent[node][0] = parent_node;
	
	// 현재 노드의 조상 노드들은 조상 노드의 조상 노드로 구함 
	for(int i=1; i<=max_level; i++) {
		parent[node][i] = parent[parent[node][i-1]][i-1];
	}
	
	// 현재 노드와 연결된 노드를 트리로 생성 
	for(int i=0; i<edge[node].size(); i++) {
		int child_node = edge[node][i];
		
		// 이전 노드는 자식 노드가 될 수 없음 
		if(child_node == parent_node) continue;
		
		make_tree(child_node, node, lev+1);
	}
}

int LCA(const int a, const int b) {
	// a, b의 LCA를 찾은 경우 
	if(a==1 || b==1) return 1;
	
	// a, b의 level를 통일한다
	int target=a, compare=b;
	if(level[a] < level[b]) swap(target, compare); 
	
	if(level[target] != level[compare]) {
		for(int i=max_level; i>=0; i--) {
			if(level[parent[target][i]] >= level[compare])
				target = parent[target][i];
		}
	}
	
	// 같은 level에서 LCA를 찾는다
	int ret = target;
	if(target != compare) {
		for(int i=max_level; i>=0; i--) {
			if(parent[target][i] != parent[compare][i]) {
				target = parent[target][i];
				compare = parent[compare][i];
			}
			ret = parent[target][i];
		}
	} 
	return ret;
} 

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;
	
	for(int i=0; i<N-1; i++) {
		int a, b;
		cin >> a >> b;
		
		edge[a].push_back(b);
		edge[b].push_back(a);
	}
	
	make_tree(1, 0, 1);
	
	int M;
	cin >> M;
	
	for(int i=0; i<M; i++) {
		int a, b;
		cin >> a >> b;
		
		cout << LCA(a, b) << "\n";
	}

	return 0;
}
