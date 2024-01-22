#include <iostream>
#include <string>
#include <cmath>
#include <stack>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, K, ans=0;
	cin >> N >> K;
	
	for(int i=0; i<=K; i++) {
		ans += N;
		N *= 10;
	}
	
	cout << ans;
	
	return 0;
}
