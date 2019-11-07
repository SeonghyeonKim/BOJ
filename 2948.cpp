#include<iostream>
#include<cstring>
using namespace std;

int main(void)
{
	int m, n, date=0;
	int mon[]={31,28,31,30,31,30,31,31,30,31,30,31};
	string day[]={"Thursday","Friday","Saturday","Sunday","Monday","Tuesday","Wednesday"};
	
	cin >> n >> m;
	for(int i=0; i<m-1; i++) {
		date+=mon[i];
	}
	date+=n-1;
	cout << day[date%7];
		
	return 0;	
}
