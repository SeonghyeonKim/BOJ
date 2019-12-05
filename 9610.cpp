#include<iostream>
#include<cstdio>
using namespace std;

int main(void)
{
	int n, q1=0, q2=0, q3=0, q4=0, ax=0, x, y;
	cin >> n;
	while(n--) {
		cin >> x >> y;
		if(x==0 || y==0) ax++;
		else if(x>0 && y>0) q1++;
		else if(x<0 && y>0) q2++;
		else if(x<0 && y<0) q3++;
		else q4++;
	}
	printf("Q1: %d\nQ2: %d\nQ3: %d\nQ4: %d\nAXIS: %d", q1, q2, q3, q4, ax);
	
	return 0;
}
