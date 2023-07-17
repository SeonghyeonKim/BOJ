#include <iostream>
#include <string>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, cnt=0;
	cin >> n;
	
	int tmp=0;
	for(int i=0; i<n; i++) {
		int a;
		cin >> a;
		
		if(tmp == a) {
			cnt++;
			tmp = (tmp+1)%3;
		}
	}
	
	cout << cnt;

	return 0;	
}
