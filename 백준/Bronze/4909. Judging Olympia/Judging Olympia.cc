#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

	while(1) {
		vector<int> v(6);
		for(int i=0; i<6; i++) cin >> v[i];
		
		if(!v[0] && !v[1] && !v[2] && !v[3] && !v[4] && !v[5]) break;
		
		sort(v.begin(), v.end());
		cout << (v[1]+v[2]+v[3]+v[4]) / 4.0 << "\n";
	}
	
    return 0;
}