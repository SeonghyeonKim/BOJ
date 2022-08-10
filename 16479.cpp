#include <iostream>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int K, D1, D2;
	cin >> K >> D1 >> D2;
	
	double temp = (D1-D2)/2.0;
	
	cout << K*K - temp*temp;
	
	return 0;
}
