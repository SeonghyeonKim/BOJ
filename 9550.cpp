#include<iostream>
using namespace std;

int main(void)
{
	int T, N, K, candy, count;
	cin >> T;
	while(T--) {
		count=0;
		cin >> N >> K;
		while(N--) {
			cin >> candy;
			count += candy/K;
		}
		cout << count <<"\n";
	}
	return 0;
}
