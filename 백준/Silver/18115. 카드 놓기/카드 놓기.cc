#include <iostream>
#include <vector>
#include <deque>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	vector<int> v(N);
	for (int i = N-1; i >= 0; i--) cin >> v[i];

	deque<int> dq;
	for (int i = 0; i < N; i++) {
		if (v[i] == 1) {
			dq.push_front(i+1);
		}
		else if (v[i] == 2) {
			int tmp = dq.front();
			dq.pop_front();
			dq.push_front(i + 1);
			dq.push_front(tmp);
		}
		else {
			dq.push_back(i + 1);
		}
	}
	
	for (int i = 0; i < N; i++) {
		cout << dq.front() << " ";
		dq.pop_front();
	}

	return 0;
}
