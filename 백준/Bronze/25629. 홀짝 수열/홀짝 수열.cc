#include <iostream>
using namespace std;

int main(void) {
	int N;
	cin >> N;
	
	int cnt = 0;
	for(int i=0; i<N; i++) {
		int a;
		cin >> a;
		
		if(a%2) cnt++;
		else cnt--;
	}
	
	if(cnt==0 || cnt==1) cout << 1;
	else cout << 0;
	
	return 0;
}