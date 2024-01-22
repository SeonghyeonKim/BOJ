#include <iostream>
#include <string>
#include <cmath>
#include <stack>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, K, ans=0, cnt=0;
	cin >> N >> K;
	for(int i=0; i<N; i++) {
		int tmp = 0;
		char flag = '0';
		string s;
		cin >> s;
		for(int i=0; i<K; i++) {
			if(flag!=s[i]) {
				flag = s[i];
				if(s[i]=='1') tmp++; 
			}
		}
		
		if(tmp == ans) cnt++;
		else if(tmp > ans) {
			ans = tmp;
			cnt = 1;
		}
	}
	cout << ans << " " << cnt;
	
	return 0;
}
