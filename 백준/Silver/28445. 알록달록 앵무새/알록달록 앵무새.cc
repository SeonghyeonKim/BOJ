#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	vector<string> v(4);
	for(int i=0; i<4; i++) cin >> v[i];
	
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());
	
	for(int i=0; i<v.size(); i++) {
		for(int j=0; j<v.size(); j++) {
			cout << v[i] << " " << v[j] << "\n";
		}
	}

    return 0;
}

