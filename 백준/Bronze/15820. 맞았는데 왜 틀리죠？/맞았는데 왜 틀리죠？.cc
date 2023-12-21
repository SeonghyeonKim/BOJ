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
    	int q, w;
    	cin >> q >> w;
    	
    	if(q!=w) {
    		cout << "Wrong Answer";
    		return 0;
		}
	}
	for(int i=0; i<b; i++) {
		int q, w;
		cin >> q >> w;
		
		if(q!=w) {
			cout << "Why Wrong!!!";
			return 0;
		}
	}
	cout << "Accepted";
    
    return 0;
}