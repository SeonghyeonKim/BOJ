#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int ans = 987654321;
	int N;
	cin >> N;
	vector<int> v(N);
	for(int i=0; i<N; i++) {
		cin >> v[i];
		ans = min(ans, v[i]);
	}
	
	for(int i=0; i<N; i++) {
		if(ans == v[i]) {
			cout << i;
			return 0;
		}
	}
	 
	return 0;
}