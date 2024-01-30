#include <iostream>
#include <string>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;
	
	while(N--) {
		int a, cnt=0;
		cin >> a;
		
		for(int i=1; i<=a; i++) {
			cnt += i*i;
		}
		
		cout << cnt << "\n";
	}

	return 0;
}
