#include<iostream>
#include<cmath>
using namespace std;

void hanoi(int from, int by, int to, int n)
{
	if(n==1) 
		cout << from << " " << to << "\n";
	else {
		hanoi(from, to, by, n-1);
		cout << from << " " << to << "\n";
		hanoi(by, from, to, n-1);
	}
}

int main(void)
{
	int N;
	
	cin >> N;
	
	cout << (long long)pow(2, N)-1 << "\n";
	hanoi(1, 2, 3, N);
	
	return 0;
}
