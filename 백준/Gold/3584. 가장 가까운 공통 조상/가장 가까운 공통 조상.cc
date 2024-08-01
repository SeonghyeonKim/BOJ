#include <iostream>
#include <vector>
using namespace std;

vector<int> edge[10001];
vector<int> P, Q;

void dfs(int cur, int opt) {
	if(edge[cur].size()==0) {
		return ;
	}
	
	if(opt==0) P.push_back(edge[cur][0]);
	else Q.push_back(edge[cur][0]);
		
	dfs(edge[cur][0], opt);
}

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int T;
	cin >> T;
	
	while(T--) {
		int N, A, B;
		cin >> N;
		
		for(int i=1; i<=N; i++) edge[i] = {};
		
		for(int i=0; i<N-1; i++) {
			int a, b;
			cin >> a >> b;
			edge[b].push_back(a);
		}
		
		cin >> A >> B;
	
		P = vector<int> (1, A);
		Q = vector<int> (1, B);
	
		dfs(A, 0);
		dfs(B, 1);
		
		int ans = 0;
		int id1 = P.size()-1, id2 = Q.size()-1; 
		
		while(1) {
			if(P[id1] != Q[id2]) break;
			ans = P[id1];
			
			id1--;
			id2--;
		}
		
		cout << ans << "\n";
	}
	
	return 0;
}
