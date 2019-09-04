#include<iostream>
#include<cmath>
using namespace std;

int main(void)
{
	int N, r, c, count=0, sum, judge;
	
	cin >> N >> r >> c;
	
	while(N!=0) {
		judge = pow(2, N-1);
		sum = pow(4, N-1);
		
		if(r>=judge && c>=judge) {
			r = r - judge;
			c = c - judge;
			count = count + sum*3; 
		}
		else if(r>=judge && c<judge) {
			r = r - judge;
			count = count + sum*2;
		}
		else if(r<judge && c>=judge) {
			c = c - judge;
			count = count + sum;
		}
		else ;
	
		N--;
	}
	
	cout << count;
	
	return 0;
}
