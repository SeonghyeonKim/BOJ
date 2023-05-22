#include <iostream>
#include <string>
using namespace std;


int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N, ans=0;
	cin >> N;
	
	for(int i=0; i<N; i++) {
		int a;
		cin >> a;
		
		ans = max(ans, i-N+a);
	}
	
	cout << ans;
	
	return 0;
}
