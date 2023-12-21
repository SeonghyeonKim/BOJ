#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
#define ll long long
using namespace std;

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int K, N, cnt=0;
    cin >> K >> N;
    
    K--;
    for(int i=0; i<N; i++) {
    	int t;
    	char z;
    	
    	cin >> t >> z;
    	
    	cnt += t;
    	
    	if(cnt >= 210) {
    		cout << K+1;
    		return 0;
		}
		
		if(z == 'T') {
			K = (K+1)%8;
		}
	}
    
    return 0;
}