#include <iostream>
#include <vector>
using namespace std;

long long gcd(long long a, long long b) {
	if (a%b == 0) return b;
	return gcd(b, a%b);
}

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	long long N, S;
	cin >> N >> S;

	long long ans = 0;
	for (int i = 0; i < N; i++) {
		long long a;
		cin >> a;

		if(ans == 0) ans = abs(S - a);
		else ans = gcd(ans, abs(S - a));
	}
	cout << ans;

	return 0;
}