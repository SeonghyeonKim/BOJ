#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string s = u8"";
	cin >> s;
	
	int a=0;
	a += ((s[0]&255)-234)*4096;
	a += ((s[1]&255)-176)*64;
	a += ((s[2]&255)-127);
	cout << a;
	
	return 0;
} 