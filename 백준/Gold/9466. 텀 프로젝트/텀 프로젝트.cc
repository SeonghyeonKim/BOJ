#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int n, cnt;
int v[100001];
int visited[100001];
stack<int> s;

void dfs(int c) {
	s.push(c);
	int n = v[c];
	
	if(visited[n]==1) {
		int flag=0, tmp=1;
		while(!s.empty() && s.top()!=n) {
			tmp++;
			s.pop();
		}
		
		if(!s.empty()) {
			if(s.top()==n) {
				flag=1;
				while(!s.empty()) s.pop();	
			}	
		}
		
		if(flag) cnt+=tmp; 
		return ;
	}
	else {
		visited[n]=1;
		dfs(n);	
	}
	return ;
}

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int T;
	cin >> T;
	
	while(T--) {
		cin >> n;
		cnt = 0;
		for(int i=1; i<=n; i++) {
			v[i] = 0;
			visited[i] = 0;	
		}
		
		for(int i=1; i<=n; i++) cin >> v[i];
		
		for(int i=1; i<=n; i++) {
			if(visited[i]==0) {
				visited[i] = 1;;
				dfs(i);	
			}
		}
		cout << n-cnt << "\n";
	}
	
	return 0;
}