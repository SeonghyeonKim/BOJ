#include <iostream>
#include <string>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	long long int n, cnt=0;
	cin >> n;
	
	while(n) {
		if(n%10!=0) break;
		n/=10;
	}
	
	while(n) {
		if(n%10==0)cnt++;
		n/=10;
	}	
	
	cout << cnt;
		
	return 0;
}
		
