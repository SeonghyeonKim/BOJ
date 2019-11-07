#include<iostream>
using namespace std;

int is_right(int, int, int);

int main(void)
{
	int a, b, c;
	cin >> a >> b >> c;
	
	while(a!=0 && b!=0 && c!=0) {
		if(is_right(a, b, c)) cout << "right\n";
		else cout << "wrong\n"; 
		
		cin >> a >> b >> c;
	}
		
	return 0;
}

int is_right(int a, int b, int c) {
	if(a>=b && a>=c) {
		if(a*a==b*b+c*c) return 1;
		else return 0;
	}
	else if(b>=a && b>=c) {
		if(b*b==a*a+c*c) return 1;
		else return 0;
	} 
	else {
		if(c*c==a*a+b*b) return 1;
		else return 0;
	}
}
