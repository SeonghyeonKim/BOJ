#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	vector<int> v(5);
	for(int i=0; i<5; i++) cin >> v[i];
	
	for(int i=0; i<5; i++) {
		int a;
		cin >> a;
		
		if(a+v[i]!=1) {
			cout << "N";
			return 0;
		}
	}
	cout << "Y";
	
	return 0;
}
