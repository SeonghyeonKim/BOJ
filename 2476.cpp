#include<iostream>
using namespace std;

int main(void)
{
	int N, a, b, c, prize, max_prize=0;
	
	cin >> N;
	for(int i=0; i<N; i++) {
		cin >> a >> b >> c;
		
		if(a==b && b==c) prize = 10000 + a*1000;
		else if(a==b) prize = 1000 + a*100;
		else if(b==c) prize = 1000 + b*100;
		else if(c==a) prize = 1000 + a*100;
		else {
			if(a>b || a>c) prize = a * 100;
			else if(b>c) prize = b * 100;
			else prize = c * 100; 
		}
		if(prize > max_prize) max_prize = prize;
	}
	cout << max_prize;
	
	return 0;
}
