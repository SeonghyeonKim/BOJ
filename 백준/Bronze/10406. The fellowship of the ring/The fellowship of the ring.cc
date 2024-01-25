#include <iostream>
#include <string>
#include <cmath>
#include <stack>
#include <vector>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a, b, c, cnt=0;
	cin >> a >> b >> c;
	
	for(int i=0; i<c; i++) {
		int t;
		cin >> t;
		
		if(t>=a && t<=b) cnt++;
	}
	cout << cnt;
	
	return 0;
}
