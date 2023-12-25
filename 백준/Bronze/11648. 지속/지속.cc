#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <vector>
#include <map>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N, cnt=0;
	cin >> N;
	
	while(N>9) {
		int tmp=1;
		
		for(int i=N; i>0; i/=10) {
			tmp *= i%10;
		}
		
		N=tmp;
		cnt++;
	}
	
	cout << cnt;
	
	return 0;
}