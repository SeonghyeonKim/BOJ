#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(void) {
	cin.tie(NULL);
    ios_base::sync_with_stdio(false);

	int N, M, cnt=0;
	cin >> N >> M;
	
	cnt = N;
	while(N) {
		cnt += N/M;
		N/=M;
	}
	cout << cnt;
	
    return 0;
}

