#include<iostream>
using namespace std;

int main(void)
{
	char str[101] = "";
	int digit=0;
	
	cin >> str;
	
	for(int i=0; str[i]!='\0'; i++) {
		if(str[i]=='c' && str[i+1]=='=') digit--;
		if(str[i]=='c' && str[i+1]=='-') digit--;
		if(str[i]=='d' && str[i+1]=='-') digit--;
		if(str[i]=='d' && str[i+1]=='z' && str[i+2]=='=') digit--;
		if(str[i]=='l' && str[i+1]=='j') digit--;
		if(str[i]=='n' && str[i+1]=='j') digit--;
		if(str[i]=='s' && str[i+1]=='=') digit--;
		if(str[i]=='z' && str[i+1]=='=') digit--;
		digit++;
	}
	
	cout << digit;
	
	return 0;
}
