#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void) {
	int N;
	string s;
	cin >> N >> s;
	
	string rs = s;
	reverse(rs.begin(), rs.end());
	
	int ans = 0;
	for(int i=0; i<s.size()/2; i++) {
		if(s[i]!=rs[i]) ans++;
	}
	cout << ans;
	
	return 0;
}