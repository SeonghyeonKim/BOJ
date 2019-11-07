#include<iostream>
using namespace std;

int main(void)
{
	int sq[3][2], n=6, x, y;
	
	for(int i=0; i<3; i++) {
		for(int j=0; j<2; j++) {
			cin >> sq[i][j];
		}
	}
	
	if(sq[0][0]==sq[1][0]) x=sq[2][0];
	else if(sq[1][0]==sq[2][0]) x=sq[0][0];
	else x=sq[1][0];
	
	if(sq[0][1]==sq[1][1]) y=sq[2][1];
	else if(sq[1][1]==sq[2][1]) y=sq[0][1];
	else y=sq[1][1];
	
	cout << x << " " << y;
	 
	return 0;
}
