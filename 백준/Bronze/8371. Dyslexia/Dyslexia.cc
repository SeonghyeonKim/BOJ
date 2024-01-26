#include <iostream>
#include <string>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N, cnt=0;
	string a, b;
	cin >> N >> a >> b;
	
	for(int i=0; i<N; i++) {
		if(a[i]!=b[i]) cnt++;
	}
	cout << cnt;
	
	return 0;
}
