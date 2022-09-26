#include <iostream>
#include <string>
using namespace std;

char c1, c2;
int N, a, b, flag;
string s, t;
	
void dfs(int idx, int cnt) {
	if(idx==N && cnt==2) {
		cout << "YES";
		exit(0);
	}
	
	if(cnt==0) {
		if(t[idx]==s[idx]  && idx <= N-2) dfs(idx+1,0);
		if(t[idx]==c1) dfs(idx+1,1);
	}
	else if(cnt==1) {
		if(t[idx]==s[idx-1]  && idx <= N-1) dfs(idx+1, 1);
		if(t[idx]==c2) dfs(idx+1, 2);
	}
	else {
		if(t[idx]==s[idx-2]) dfs(idx+1, 2);
	}
}


int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	cin >> N >> s >> t >> a >> b;
	
	c1 = s[a];
	c2 = s[b];
	
	s.erase(a,1);
	s.erase(b-1,1);
	
	dfs(0,0);
	
	cout << "NO";
	
	return 0;
}