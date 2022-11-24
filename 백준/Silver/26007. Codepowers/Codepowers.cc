#include <iostream>
#include <cmath>
using namespace std;

int sum[100001];

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, M, K, X;
	cin >> N >> M >> K >> X;

	for(int i=1; i<=N; i++) {
		int a;
		cin >> a;
		
		X+=a;
		if(X<K) sum[i] = sum[i-1]+1;
		else sum[i] = sum[i-1];
	}
	for(int i=0; i<M; i++) {
		int a, b;
		cin >> a >> b;
		
		cout << sum[b-1]-sum[a-1] << "\n";
	}
	
	return 0;
}
