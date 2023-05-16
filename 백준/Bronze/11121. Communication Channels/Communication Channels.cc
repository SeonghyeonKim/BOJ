#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N;
	cin >> N;
	
	while(N--) {
		string a, b;
		cin >> a >> b;
		
		if(a==b) cout << "OK\n";
		else cout << "ERROR\n";
	} 
	
	return 0;
}