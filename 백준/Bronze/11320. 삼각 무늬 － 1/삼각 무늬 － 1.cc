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
    
    int T;
    cin >> T;
    
    for(int i=1; i<=T; i++) {
    	int a, b;
    	cin >> a >> b;
    	
    	cout << (a/b)*(a/b) << "\n";
	}
    
    return 0;
}