#include<iostream>
using namespace std;

int main(void)
{
	char str[5][16] = {0,};
	for(int i=0; i<5; i++) {
		cin >> str[i];	
	}
	for(int i=0; i<15; i++) {
		for(int j=0; j<5; j++) {
			if(str[j][i]) cout << str[j][i];	
		}
	}
	
	return 0;
}
