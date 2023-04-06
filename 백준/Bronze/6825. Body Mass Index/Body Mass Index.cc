#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	double a, b;
	cin >> a >> b;
	
	double tmp = a/b/b;
	if(tmp>25) cout << "Overweight";
	else if(tmp>=18.5) cout << "Normal weight";
	else cout << "Underweight";
	
	return 0;
}