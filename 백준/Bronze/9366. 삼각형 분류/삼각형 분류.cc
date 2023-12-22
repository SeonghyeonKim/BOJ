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
    	cout << "Case #" << i << ": ";
    	
    	vector<int> v(3);
    	cin >> v[0] >> v[1] >> v[2];
    	sort(v.begin(), v.end());
    	
    	if(v[0] + v[1] <= v[2]) cout << "invalid!\n";
    	else if(v[0]==v[1] && v[1]==v[2]) cout << "equilateral\n";
    	else if(v[0]==v[1] || v[1]==v[2]) cout << "isosceles\n";
    	else cout << "scalene\n";
	}
    
    return 0;
}