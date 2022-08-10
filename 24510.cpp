#include<iostream>
#include<string>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N;
	cin >> N;
	
	int ans = 0;
	for(int i=0; i<N; i++) {
		int cnt=0;
		string s;
		cin >> s;
		
		for(int i=0; i<s.size(); i++) {
			if(s.substr(i,3)=="for") cnt++;
			if(s.substr(i,5)=="while") cnt++;
		}
		
		ans = max(ans, cnt);
	}
	
	cout << ans;
	
	return 0;
}
