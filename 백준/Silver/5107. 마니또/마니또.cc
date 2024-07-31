#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

int ans=0;
int cnt=0;
int visited[20];
vector<int> v[20];

void dfs(int x) {
	visited[x] = cnt;		
	
	for(int i=0; i<v[x].size(); i++) {
		int nx = v[x][i];
		
		if(visited[nx]==0) {
			dfs(nx);
		}
		else {
			if(visited[nx]==cnt) ans++;
			return ;
		}	
	}
}

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

	int t = 1;
	while(1) {
		int N;
		cin >> N;
		
		if(N==0) break;
		
		int idx=0;
		map<string, int> m;
		
		for(int i=0; i<N; i++) {
			v[i].clear();
		}
		
		for(int i=0; i<N; i++) {
			string a, b;
			cin >> a >> b;
			
			if(m.find(a)==m.end()) {
				m.insert({a, idx++});
			}
			if(m.find(b)==m.end()) {
				m.insert({b, idx++});
			}
 			
 			v[m[a]].push_back(m[b]);
		}
		
		ans = 0;
		cnt = 0;		
		for(int i=0; i<N; i++) {
			visited[i] = 0;
		}
		
		for(int i=0; i<N; i++) {
			if(visited[i]==0) {
				cnt++;
				dfs(i);
			}
		}
		
		cout << t++ << " " << ans << "\n";
	}
		
    return 0;
}
