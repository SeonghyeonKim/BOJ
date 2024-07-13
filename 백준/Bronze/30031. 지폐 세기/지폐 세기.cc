#include <iostream>
#include <vector>
#define ll long long
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, ans = 0;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int a, b;
		cin >> a >> b;

		if (a == 136) ans += 1000;
		if (a == 142) ans += 5000;
		if (a == 148) ans += 10000;
		if (a == 154) ans += 50000;
	}
	cout << ans;

	return 0;
}