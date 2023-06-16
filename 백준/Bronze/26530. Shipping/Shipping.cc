#include <iostream>
#include <vector>
#include <cmath>
#define pii pair<int, int>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int T;
	cin >> T;
	
	cout.precision(2);
	cout << fixed;
	
	while(T--) {
		int N;
		double ans=0;
		cin >> N;
		
		for(int i=0; i<N; i++) {
			string s;
			double cnt, cost;
			
			cin >> s >> cnt >> cost;
			
			ans += cnt*cost;
		}
		cout << "$" << ans << "\n";
	}
	
	return 0;
}
