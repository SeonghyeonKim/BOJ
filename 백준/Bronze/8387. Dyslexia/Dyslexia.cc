#include <iostream>
#include <string>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a, cnt=0;
	string q, w;
	cin >> a >> q >> w;
	
	for(int i=0; i<a; i++) {
		if(q[i]==w[i]) cnt++;
	}
	cout << cnt;

	return 0;
}
