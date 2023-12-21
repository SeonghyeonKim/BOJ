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
    
    int N;
    cin >> N;
    
    for(int i=0; i<=N; i++) {
    	if(i*i + i + 1 == N) {
    		cout << i;
    		return 0;
		} 
	}
    
    return 0;
}