#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);	
	
	int N;
	cin >> N;
	
	long long ans = 0;
	for(int i=0; i<N; i++) {
		long long a;
		cin >> a;
		
		ans += pow(a/10, a%10);
	}
	cout << ans;
	
	return 0;
}