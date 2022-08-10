#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	vector<int> v(4);
	for(int i=0; i<4; i++) cin >> v[i];
	
	sort(v.begin(), v.end());
	
	cout << v[0]*v[2];
	
	return 0;
}
