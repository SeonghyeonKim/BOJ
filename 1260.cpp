#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
#include<queue>
using namespace std;

vector<int> v[1001];
int dfs_array[1001];
int bfs_array[1001];

void dfs(int);
void bfs(int);

int main(void)
{
	int N, M, V, A, B;
	
	cin >> N >> M >> V;
	
	for(int i=0; i<M; i++) {
		cin >> A >> B;
		v[A].push_back(B);
		v[B].push_back(A);
	}
	for(int i=0; i<N; i++) {
		sort(v[i].begin(),v[i].end());
	}
	dfs(V);
	bfs(V);
	
	return 0;
}

void dfs(int start_vertex)
{
	stack<int> s;
	int check;
	s.push(start_vertex);
	
	while(!s.empty()) {
		int current_vertex = s.top();
		if(!dfs_array[current_vertex]) cout << current_vertex << " ";
		dfs_array[current_vertex]=1;
		for(int i=0; i<v[current_vertex].size(); i++) {
			int next_vertex=v[current_vertex][i];
			check = 0;
			if(!dfs_array[next_vertex]) {
				s.push(next_vertex);
				check=1;
				break;
			}
		}
		if(!check) s.pop();
	}
	cout << "\n";
	
	return ;
}

void bfs(int start_vertex)
{
	queue<int> q;
	q.push(start_vertex);
	bfs_array[start_vertex]=1;
	
	while(!q.empty()) {
		int current_vertex = q.front();
		q.pop();
		cout << current_vertex << " ";
		for(int i=0; i<v[current_vertex].size(); i++) {
			int next_vertex = v[current_vertex][i];
			if(!bfs_array[next_vertex]) {
				q.push(next_vertex);
				bfs_array[next_vertex]=1;
			}
		}
	}
	cout << "\n";
	
	return ;
}
