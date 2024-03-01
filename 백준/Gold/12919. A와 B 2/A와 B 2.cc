#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string a, b;

void dfs(string s) {
	if(s == a) {
		cout << 1;
		exit(0);
	}
	else if(s.size() <= a.size()) return ;
	
	if(s[s.size()-1] == 'A') {
		dfs(s.substr(0, s.size()-1));
	}
	
	if(s[0] == 'B') {
		string rs = s.substr(1);
		reverse(rs.begin(), rs.end());
		dfs(rs);
	}
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	cin >> a >> b;
	
	dfs(b);
	cout << 0;
	
	return 0;
}

