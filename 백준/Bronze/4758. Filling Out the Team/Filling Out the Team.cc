#include <iostream>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	while(1) {
		double a;
		int b, c, f=0;
		cin >> a >> b >> c;
		
		if(!a && !b && !c) break;
		
		if(a<=4.5 && b>=150 && c>=200) {
			f=1;
			cout << "Wide Receiver ";
		}
		if(a<=6.0 && b>=300 && c>=500) {
			f=1;
			cout << "Lineman ";
		}
		if(a<=5.0 && b>=200 && c>=300) {
			f=1;
			cout << "Quarterback ";
		}
		
		if(f) cout << "\n";
		else cout << "No positions\n";
	}

	return 0;
}

