#include <iostream>
#include <string>
#include <stack>
using namespace std;

int arr[1001][1001];

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	long long N, cnt=0;
	cin >> N;
	
	for(int i=0; i<N*N; i++) {
		long long a;
		cin >> a;
		
		cnt += a;
	}
	cout << cnt;
	
	return 0;
}
