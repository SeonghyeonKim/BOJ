#include <iostream>
#include <string>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	long long N, ans=0;
	string s;
	
	cin >> N >> s;
	
	long long cnt = 0;
	for(int i=0; i<N; i++) {
		if(s[i]=='2') cnt++;
		else {
			ans += cnt*(cnt+1)*(cnt+1)/2 - cnt*(cnt+1)*(2*cnt+1)/6;
			cnt = 0;
		}
	}
	ans += cnt*(cnt+1)*(cnt+1)/2 - cnt*(cnt+1)*(2*cnt+1)/6;		
	
	cout << ans;
	
	return 0;
}
