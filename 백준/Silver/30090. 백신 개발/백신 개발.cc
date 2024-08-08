#include <iostream>
#include <string>
#include <vector>
using namespace std;

int N;
vector<string> v;
int visited[10];
string ans(91, '-');

void dfs(int cnt, string s) {
	if(cnt == N) {
		if(ans.size() > s.size()) ans = s;
		return ;
	} 
	
	for(int i=0; i<N; i++) {
		if(visited[i]==0) {
			visited[i] = 1;
			int tmp = 0;
			
			for(int j=min(s.size(), v[i].size()); j>=0; j--) {
				if(s.substr(s.size()-j, j) == v[i].substr(0, j)) {
					tmp = j;
					break;
				}	
			}
			dfs(cnt+1, s + v[i].substr(tmp));
			visited[i] = 0;
		}
	}
}

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	cin >> N;
	for(int i=0; i<N; i++) {
		string a;
		cin >> a;
		v.push_back(a);
	}
	
	dfs(0, "");
	cout << ans.size();
	
	return 0;
}