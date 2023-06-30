#include <iostream>
using namespace std;

long long lleft[100001];
long long rright[100001];

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

	long long X, K;
	cin >> X >> K;
	
	for(int i=0; i<X; i++) {
		int a;
		cin >> a;
	
		lleft[a]++;	
	}
	for(int i=0; i<X; i++) {
		int a;
		cin >> a;
	
		rright[a]++;	
	}
	
	long long ans = X*X;
	for(int i=1; i<=K; i++) {
		ans -= lleft[i]*rright[i];
	}
	
	cout << ans;

	return 0;
}

