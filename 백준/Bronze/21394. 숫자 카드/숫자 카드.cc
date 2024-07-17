#include <iostream>
#include <vector>
#include <deque>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;

	while (T--) {
		int cnt = 0, ct=0, sum=0;
		
		deque<int> dq;
		vector<int> v(10, 0);
		for (int i = 1; i <= 9; i++) {
			cin >> v[i];
			sum += v[i];
		}
		
		for (int i = 1; i <= 9; i++) {
			if (i == 6) cnt = v[i];
			else if (i == 9) {
				for (int k = 0; k < v[i]+cnt; k++) {
					if ((ct+sum)%2==0) dq.push_back(9);
					else dq.push_front(9);
					ct++;
				}
			}
			else {
				for (int k = 0; k < v[i]; k++) {
					if ((ct+sum)% 2==0) dq.push_back(i);
					else dq.push_front(i);
					ct++;
				}
			}
		}
		
		while (!dq.empty()) {
			cout << dq.front() << " ";
			dq.pop_front();
		}
		cout << "\n";
	}


	return 0;
}
