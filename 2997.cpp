#include<iostream>
using namespace std;

int main(void)
{
	int a, b, c;
	cin >> a >> b >> c;
	
	if(a<b && a<c) cout << b+c-a;
	else if(b<c) cout << a+c-b;
	else cout << a+b-c;
	
	return 0;
}
