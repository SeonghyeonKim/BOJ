#include <iostream>
#include <vector>
#define pii pair<int, int>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;
	
	int cnt=0, tmp=-1;
	for(int i=0; i<N; i++) {
		int a;
		cin >> a;
		
		if(a%2!=tmp) {
			tmp = a%2;
			cnt++;
		}
	}
	
	cout << cnt;

    return 0;
}