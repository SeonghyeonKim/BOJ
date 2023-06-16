#include <iostream>
#include <vector>
#include <cmath>
#define pii pair<int, int>
using namespace std;

int arr[9999*12+14];
int sum[9999*12+14];

int main(void) {
	//cin.tie(NULL);
	//ios_base::sync_with_stdio(false);
	
	int N;
	cin >> N;
	
	for(int i=0; i<N; i++) {
		int a, b, c, d;
		scanf("%d-%d %d-%d", &a, &b, &c, &d);
		
		sum[a*12+b]++;
		sum[c*12+d+1]--;
	}
	
	int ans=0, a, b, temp=0;
	
	for(int i=2000*12; i<=9999*12+12; i++) {
		temp+=sum[i];
		
		if(ans < temp) {
			ans = temp;
			a = i/12;
			b = i%12;
		}
	} 
	
	if(b==0) printf("%d-%02d", a-1, 12);
	else printf("%d-%02d", a, b);
	
	return 0;
}
