#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(void) {
	cin.tie(NULL);
    ios_base::sync_with_stdio(false);

	int N, K, cnt=0, tmp=-1;
	cin >> N >> K;
   
   	for(int i=0; i<N; i++) {
   		int a;
   		cin >> a;
   		
   		if(a <= tmp) {
   			a += K;
			cnt++;
			
			if(a <= tmp) {
				cout << -1;
				return 0;
			}
			tmp = a;
		}
		else {
			tmp = a;
		}
	}
   	cout << cnt;
   
    return 0;
}

