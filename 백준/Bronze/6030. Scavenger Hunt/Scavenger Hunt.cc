#include <iostream>
#include <string>
#include <cmath>
#include <stack>
#include <vector>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a, b;
	cin >> a >> b;
	
	vector<int> x, y;
	for(int i=1; i<=a; i++) {
		if(a%i==0) x.push_back(i);
	}
	for(int i=1; i<=b; i++) {
		if(b%i==0) y.push_back(i);
	}
	
	for(int i=0; i<x.size(); i++) {
		for(int j=0; j<y.size(); j++) {
			cout << x[i] << " " << y[j] << "\n";
		}
	}
 
	return 0;
}
