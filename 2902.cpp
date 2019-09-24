#include<iostream>
using namespace std;

int main(void)
{
	char str[101];
	int j=1;
	
	cin >> str;
	
	for(int i=0; str[i]!='\0'; i++) {
		if(str[i] >= 'A' && str[i] <= 'Z') cout << str[i];	
	}
	
	return 0;
}
