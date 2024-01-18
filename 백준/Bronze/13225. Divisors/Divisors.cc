#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#define pii pair<int, int>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);	
	
	int T;
	cin >> T;
	
	while(T--) {
		int a, cnt=0;
		cin >> a;
		
		for(int i=1; i<=a; i++) if(a%i==0) cnt++;
		cout << a << " " << cnt << "\n";	
	}
	
	return 0;
}
