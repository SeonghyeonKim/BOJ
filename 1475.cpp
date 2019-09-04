#include<iostream>
using namespace std;

int main(void)
{
	char room[10]="";
	int num[10] = {0, }, set=0;
	
	cin >> room;
	
	for(int i=0; room[i]!='\0'; i++) {
		num[room[i]-'0']++;
	}
	
	num[6] = (num[6]+num[9]+1)/2;
	
	for(int i=0; i<8; i++) {
		if(set<num[i]) set=num[i];
	}
	
	cout << set;
	
	return 0;
}
