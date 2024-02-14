#include <iostream>
using namespace std;

int main(void) {
	cin.tie(NULL);
    ios_base::sync_with_stdio(false);
	
	long long x, y;
	cin >> x >> y;
	
	long long num = 0;
	while(1) {
		if(x+y == num*(num+1)/2) break;
		else if(x+y < num*(num+1)/2) {
			cout << "-1";
			return 0;
		}
		num++;
	}
	
	long long cnt = 0;
	for(int i=num; i>0; i--) {
		if(x >= i) {
			x -= i;
			cnt++;
		}
		
		if(x==0) break;
	}
	cout << cnt;
	
    return 0;
}

