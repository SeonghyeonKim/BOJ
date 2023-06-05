#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> v(3);
	cin >> v[0] >> v[1] >> v[2];
	
	sort(v.begin(), v.end());
	
	if(v[2]==v[0]+v[1]) cout << 1;
	else if(v[2]==v[0]*v[1]) cout << 2;
	else cout << 3;
	
	return 0;
}
