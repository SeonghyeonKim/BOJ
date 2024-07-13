#include <iostream>
#include <vector>
#define ll long long
using namespace std;

ll min(ll a, ll b) {
	return a < b ? a : b;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	ll N;
	cin >> N;

	vector<ll> v(N);
	for (int i = 0; i < N; i++) cin >> v[i];
	
	ll sum1 = 0, sum2 = 0, sum3 = 0;

	for (int i = 0; i < N; i++) {
		if (i < N - 2) {
			if (v[i+1] <= v[i + 2]) {
				ll tmp = min(min(v[i], v[i + 1]), v[i + 2]);

				v[i] -= tmp;
				v[i + 1] -= tmp;
				v[i + 2] -= tmp;
				sum1 += tmp;
			}
			else {
				ll tmp = min(v[i], v[i+1]- v[i+2]);
				v[i] -= tmp;
				v[i + 1] -= tmp;
				sum2 += tmp;

				tmp = min(min(v[i], v[i + 1]), v[i + 2]);
				v[i] -= tmp;
				v[i + 1] -= tmp;
				v[i + 2] -= tmp;
				sum1 += tmp;
			}
		}
		if (i < N - 1) {
			ll tmp = min(v[i], v[i + 1]);

			v[i] -= tmp;
			v[i + 1] -= tmp;
			sum2 += tmp;
		}
		sum3 += v[i];
	}

	cout << sum1 * 7 + sum2 * 5 + sum3 * 3;

	return 0;
}