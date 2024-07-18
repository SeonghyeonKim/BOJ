#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	vector<int> v(10);
	for(int i=0; i<10; i++) cin >> v[i];
	
	int ans = 0;
	for(int i=0; i<10; i++) {
		for(int j=i+1; j<10; j++) {
			ans ^= (v[i] | v[j]);
		}
	}
	
	for(int i=0; i<10; i++) {
		for(int j=i+1; j<10; j++) {
			for(int k=j+1; k<10; k++) {
				ans ^= (v[i] | v[j] | v[k]);
			}
		}
	}
	
	cout << (ans^0);
	
	return 0;
}