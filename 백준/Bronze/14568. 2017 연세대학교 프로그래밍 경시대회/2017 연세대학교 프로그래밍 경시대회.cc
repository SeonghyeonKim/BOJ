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
    
    int N, cnt=0;
    cin >> N;
    
    for(int i=1; i<=N; i++) {
    	for(int j=2; i+j<=N; j+=2) {		
			if(N-i-j >= i+2) cnt++;
		}
	}
    
    cout << cnt;
    
    return 0;
}