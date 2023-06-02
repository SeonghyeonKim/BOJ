#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b, c, d;
	cin >> a >> b >> c >> d;
	
	int st = a*60+b;
	int en = c*60+d;
	
	if(en < st) en += 24*60;
	
	cout << en - st << " " << (en-st)/30;
	
	return 0;
}


