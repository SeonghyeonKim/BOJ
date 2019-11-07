#include<iostream>
using namespace std;

int main(void)
{
	int N, num;
	cin >> N;
	
	for(int i=0; i<9; i++) {
		cin >> num;
		N-=num;
	}
	cout << N;
	
	return 0;
}
