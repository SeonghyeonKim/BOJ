#include <iostream>
using namespace std;

int arr[10];

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N;
	cin >> N;
	
	for(int i=N; i>0; i/=10) arr[i%10]++;
	
	int ans=0;
	
	for(int i=0; i<10; i++) {
		if(i!=6 && i!=9) ans = max(arr[i], ans);
	}
	
	cout << max(ans, (arr[6]+arr[9]+1)/2);
	
	return 0;
}
