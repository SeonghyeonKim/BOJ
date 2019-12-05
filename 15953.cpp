#include<iostream>
using namespace std;

int a_money[101] = {0, 500, 300, 300, 200, 200, 200, 50, 50, 50, 50, 30, 30, 30, 30, 30, 10, 10, 10, 10, 10, 10, 0,};
int b_money[65] = {0, 512, 256, 256, 128, 128, 128, 128, 64, 64, 64, 64, 64, 64, 64, 64, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 0,};

int main(void)
{
	int T, a, b;
	cin >> T;
	
	while(T--) {
		cin >> a >> b;
		cout << (a_money[a] + b_money[b]) * 10000 << "\n";
	}
	return 0;	
}
