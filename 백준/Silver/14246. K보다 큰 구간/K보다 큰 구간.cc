#include <iostream>
#include <vector>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, M;
	cin >> N;
	vector<int> v(N);
	for (int i = 0; i < N; i++) cin >> v[i];
	cin >> M;

	long long left = 0, right = 0, ans = 0, sum = v[0];
	
	while (right < N) {
		if (sum > M) {
			ans += N-right;
			sum -= v[left];
			left++;
		}
		else {
			right++;
			if (right >= N) break;
			sum += v[right];
		}
	}

	cout << ans;

	return 0;
}