#include <iostream>
#include <vector>
#define ll long long
#define MOD 987654321
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N;
	cin >> N;
	
	N /= 2;
	vector<ll> v(N+1, 0);
	v[0] = 1;
	for(int i=1; i<=N; i++) {
		for(int j=0; j<i; j++) {
			v[i] = (v[i] + ((v[j]%MOD) * (v[i-j-1]%MOD))%MOD)%MOD;
		}
	}
	
	cout<< v[N];

	return 0;
}

