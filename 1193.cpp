#include<iostream>
using namespace std;

int main()
{
	int n, x=0, d;

	cin >> n;

	while (x*(x+1)/2<n) {
		x++;
	}

	x--;
	d=n-x*(x+1)/2;

	if ((x % 2)) {
		cout << d << "/" << x+2-d << "\n";
	}
	else {
		cout << x+2-d << "/" << d << "\n";
	}	
		
	return 0;
}

