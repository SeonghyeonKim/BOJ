#include <iostream>
#include <string>
#include <cmath>
#include <stack>
#include <vector>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;
	
	vector<int> v(N);
	for(int i=0; i<N; i++) cin >> v[i];
	int ans = 0;
	for(int i=0; i<N; i++) {
		int a;
		cin >> a;
		ans += abs(a-v[i]);
	}
	cout << ans/2;
 
	return 0;
}
