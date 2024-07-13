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

	ll N, B, C;
	cin >> N >> B >> C;

	vector<ll> v(N);
	for (int i = 0; i < N; i++) cin >> v[i];
	
	if (B < C) {
		ll sum = 0;
		
		for (int i = 0; i < N; i++) {
			sum += v[i];
		}

		cout << B * sum;
	}
	else {
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

		cout << sum1 * (B + C + C) + sum2 * (B + C) + sum3 * B;
	}

	return 0;
}