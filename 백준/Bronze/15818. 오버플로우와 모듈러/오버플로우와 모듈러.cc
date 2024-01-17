#include <iostream>
#include <string>
#include <cmath>
#include <stack>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	long long N, M;
	cin >> N >> M;
	
	long long ans = 1;
	for(long long i=0; i<N; i++) {
		long long a;
		cin >> a;
		
		ans = (ans * (a%M))%M;
	}
	
	cout << ans;
			
	return 0;
}
