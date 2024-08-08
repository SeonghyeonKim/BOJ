#include <iostream>
#include <vector>
#define pii pair<long long, long long>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int Q;
	cin >> Q;
	
	long long ans=1, mul = 1, add = 0;
	while(Q--) {
		long long a, b;
		cin >> a;
		
		if(a==0) {
			cin >> b;
			add += b;
		}
		else if(a==1) {
			cin >> b;
			mul *= b;
			add *= b;
		}
		else if(a==2) {
			cin >> b;
			ans += b;
		}
		else {
			cout << ans * mul + add << "\n";
		}
	}
	
	return 0;
}