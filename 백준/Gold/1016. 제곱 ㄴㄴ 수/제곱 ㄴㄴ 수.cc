#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	long long a,b;
	cin >> a >> b;
	
	long long ans  = b-a+1;
	vector<bool> dp(ans, 0);
	
	for(long long i=2; i*i<=b; i++) {
		long long num = a/(i*i);
		if(a%(i*i)!=0) num++;
		
		while(num*(i*i)<=b) {
			if(dp[num*(i*i)-a]==0) {
				dp[num*(i*i)-a]=1;
				ans--;
			}
			num++;
		}
	}
	
	cout << ans;

	return 0;
}