#include<iostream>
using namespace std;

int Fibo(int);

int main(void)
{
	int n;
	cin >> n;
	cout << Fibo(n);

	return 0;
}

int Fibo(int a) {
	if(a==0) return 0;
	else if(a==1) return 1;
	return Fibo(a-1) + Fibo(a-2);
}

