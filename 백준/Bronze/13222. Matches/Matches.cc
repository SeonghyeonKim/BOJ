#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, W, H;
	cin >> N >> W >> H;
	
	for(int i=0; i<N; i++) {
		int a;
		cin >> a;
		
		if(a*a <= W*W+H*H) cout << "YES\n";
		else cout << "NO\n";
	}

	return 0;
}