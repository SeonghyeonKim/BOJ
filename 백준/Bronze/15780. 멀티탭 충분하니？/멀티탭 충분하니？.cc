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
    
    int N, K, cnt=0;
    cin >> N >> K;
    
    for(int i=0; i<K; i++) {
    	int a;
    	cin >> a;
		cnt += (a+1)/2;
	}
	
	if(N <= cnt) cout << "YES";
	else cout << "NO";
    
    return 0;
}