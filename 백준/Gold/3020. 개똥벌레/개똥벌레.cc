#include <iostream>
using namespace std;

int arr[500003];

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N, H;
	cin >> N >> H;
	
	for(int i=0; i<N; i++) {
		int a;
		cin >> a;
		
		if(i%2) {
			arr[1]++;
			arr[a+1]--;
		}
		else {
			arr[H-a+1]++;
			arr[H+1]--;
		}
	}

	int ans1=987654321, ans2=0, tmp=0;
			
	for(int i=1; i<=H; i++) {
		tmp += arr[i];
		
		if(ans1==tmp) {
			ans2++;
		}
		else if(ans1 > tmp) {
			ans1=tmp;
			ans2=1;
		}
	}
	
	cout << ans1 << " " << ans2;
	
	return 0;
}

