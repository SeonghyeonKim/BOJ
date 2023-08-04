#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, ans=0;
	cin >> N;
	
	int tmp = -1;
	for(int i=0; i<N; i++) {
		int a;
		cin >> a;
		
		if(tmp+1 != a) {
			ans += a;
		}
		tmp = a;
	}
	
	cout << ans;
	
    return 0;
}
