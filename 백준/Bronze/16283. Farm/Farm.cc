#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	
	vector<int> v;
	for(int i=1; i<c; i++) {
		if(a*i + b*(c-i)==d) {
			v.push_back(i);
		}
	}
	
	if(v.size()==1) cout << v[0] << " " << c-v[0];
	else cout << -1;
	
	return 0;
}