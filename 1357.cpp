#include<iostream>
using namespace std;

int rev(int);

int main(void)
{
	int a, b;
	cin >> a >> b;
	
	cout << rev(rev(a)+rev(b));
	
	return 0;
}

int rev(int a) {
	int ra=0;
	while(a) {
		ra = ra*10+a%10;
		a/=10;
	}
	return ra;
}
