#include<iostream>
#include<string>
#include<cmath>
using namespace std;

long long color(string);

int main(void)
{
	string a, b, c;
	
	cin >> a >> b >> c;
	
	long long num = ( color(a)*10 + color(b) )* pow(10, color(c));
	
	cout << num;

	return 0;
}

long long color(string a)
{
	if(a=="black")
		return 0;
	else if(a=="brown")
		return 1;
	else if(a=="red")
		return 2;
	else if(a=="orange")
		return 3;
	else if(a=="yellow")
		return 4;
	else if(a=="green")
		return 5;
	else if(a=="blue")
		return 6;
	else if(a=="violet")
		return 7;
	else if(a=="grey")
		return 8;
	else
		return 9;
}
