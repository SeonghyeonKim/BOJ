#include<iostream>
using namespace std;

int main(void)
{
	char num[12], count=0;
	cin >> num;
	for(int i=0; num[i]!='\0'; i++) count++;

	
	for(int i=0; i<count-1; i++) {
		for(int j=i; j<count; j++) {
			if(num[j]>num[i]) {
				char temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	for(int i=0; i<count; i++) cout << num[i];
	
	return 0;
}
