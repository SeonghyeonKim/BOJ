#include <iostream>
using namespace std;

int arr[4];

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

	int N;
	cin >> N;
	
	for(int i=0; i<N; i++) {
		int a;
		cin >> a;
		arr[a]++;
	}	
	
	int ans=0, tmp=0;
	
	tmp = min(arr[0], arr[3]);
	arr[0] -= tmp;
	arr[3] -= tmp;
	ans += tmp*3;
	tmp = min(arr[1], arr[2]);
	arr[1] -= tmp;
	arr[2] -= tmp;
	ans += tmp*3;
	
	tmp = min(arr[0], arr[2]);
	arr[0] -= tmp;
	arr[2] -= tmp;
	ans += tmp*2;
	tmp = min(arr[1], arr[3]);
	arr[1] -= tmp;
	arr[3] -= tmp;
	ans += tmp*2;
	
	tmp = min(arr[0], arr[1]);
	arr[0] -= tmp;
	arr[1] -= tmp;
	ans += tmp;
	tmp = min(arr[2], arr[3]);
	arr[2] -= tmp;
	arr[3] -= tmp;
	ans += tmp;
	
	cout << ans;
	
    return 0;
}