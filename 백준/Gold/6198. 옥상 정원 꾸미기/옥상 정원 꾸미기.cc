#include <iostream>
#include <stack>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	long long N;
	cin >> N;

	long long cnt = 0;
	stack<long long> st;
	while (N--) {
		long long a;
		cin >> a;

		if (st.empty() || st.top() > a) {
			st.push(a);
		}
		else {
			while (!st.empty() && st.top() <= a) {
				st.pop();
			}
			st.push(a);
		}
		cnt += st.size() - 1;
	}
	cout << cnt;

	return 0;
}