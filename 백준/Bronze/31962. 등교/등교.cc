#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N, X, ans=-1;
	cin >> N >> X;
	
	while(N--) {
		int S, T;
		cin >> S >> T;
		
		if(S+T <= X) {
			ans = max(ans, S);
		}
	}
	

	cout << ans;
	
	return 0;
}
