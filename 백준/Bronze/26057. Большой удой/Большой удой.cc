#include <iostream>
#include <string>
using namespace std;

int abs(int a) {
	if(a<0) return -a;
	return a;
}

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int a, b;
	cin >> a >> b;
	
	cout << abs(a-b-b);	

	
	return 0;	
}
		
