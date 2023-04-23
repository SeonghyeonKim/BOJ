#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

	int t;
	cin >> t;
	
	while(t--) {
		vector<int> v(3);
		cin >> v[0] >> v[1] >> v[2];
		cout << v[0] << " " << v[1] << " " << v[2] << "\n";
		
		sort(v.begin(), v.end());
		
		if(v[0]>=10) cout << "triple-double\n\n";
		else if(v[1]>=10) cout << "double-double\n\n";
		else if(v[2]>=10) cout << "double\n\n";
		else cout << "zilch\n\n";
	}
	
 	return 0;
}
