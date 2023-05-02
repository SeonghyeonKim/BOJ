#include <iostream>
#include <vector>
using namespace std;

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	
	if(a+d == b+c) {
		if(b==d) cout << "Penalty";
		else if(b<d) cout << "Persepolis";
		else cout << "Esteghlal";
	}
	else if(a+d > b+c) cout << "Persepolis";
	else cout << "Esteghlal";
    		
    return 0;
}