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
    
    int a, b;
    cin >> a >> b;
    
    for(int i=0; i<a; i++) {
    	for(int j=0; j<b; j++) {
    		cout << (i*b) + j + 1;
    		if(j!=b-1) cout << " ";
		}
		cout << "\n";
	}
    
    return 0;
}