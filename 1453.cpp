#include<iostream>
using namespace std;

int check[100];

int main(void)
{
	int N, num, count=0;
	cin >> N;
	while(N--)
	{
		cin >> num;
		if(check[num-1]) count++;
		else check[num-1]++;
	}
	cout << count;
	
	return 0;
}
