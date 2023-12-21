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
    
    while(1) {
    	int a, b, c, d;
    	cin >> a >> b >> c >> d;
    	
    	if(a==0 && b==0 && c==0 && d==0) break;
    	
    	cout << c-b << " " << d-a << "\n";
	}
    
    return 0;
}