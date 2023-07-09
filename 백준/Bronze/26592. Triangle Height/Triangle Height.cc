#include <iostream>
#include <string>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N;
	cin >> N;
	
	cout.precision(2);
	cout << fixed;
	
	while(N--) {
		double a, b;
		cin >> a >> b;
		
		
		cout << "The height of the triangle is " << a/b*2.0 << " units\n";	
	}
	
	return 0;
}
		
