#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	int N;
	cin >> N;
	
	cout << "Gnomes:\n";
	for(int i=0; i<N; i++) {
		vector<int> v(3);
		cin >> v[0] >> v[1] >> v[2];
		
		vector<int> c;
		c = v;
		
		sort(c.begin(), c.end());
		if(v==c) {
			cout << "Ordered\n";
			continue;
		}
		
		sort(c.begin(), c.end(), greater<int> ());
		if(v==c) cout << "Ordered\n";
		else cout << "Unordered\n";
	}
	
	return 0;
}