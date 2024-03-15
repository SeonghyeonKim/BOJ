#include <iostream>
using namespace std;

int arr[1000001];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, ans=0;
	cin >> N;
	
	for(int i=0; i<N; i++) {
		int a;
		cin >> a;
		
		if(arr[a]>0) {
			arr[a]--;
			arr[a-1]++;
		}
		else {
			ans++;
			arr[a-1]++;
		}
	}
	
	cout << ans;

	return 0;
}
