#include <iostream>
#include <string>
using namespace std;

int main(void) {
	int a;
	cin >> a;
	
	string s;
	a+=3071; 
	
	s.push_back(a/4096+234);
	s.push_back(a/64%64+128);
	s.push_back(a%64+128);
	cout << s;
	
	return 0;
} 