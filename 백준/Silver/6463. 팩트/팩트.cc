#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

int dp[10000];

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
	
	long long tmp = 1;
	for(int i=1; i<=9999; i++) {
		tmp = (tmp*i)%100000000;
		while(tmp%10==0) tmp/=10;
		dp[i] = tmp%10;
	}
	
	long long a;
	while(cin >> a) {
		if(a<10) cout << "    ";
		else if(a<100) cout << "   ";
		else if(a<1000) cout << "  ";
		else cout << " ";
		
		cout << a << " -> " << dp[a] << "\n";
	}
		
    return 0;
}
