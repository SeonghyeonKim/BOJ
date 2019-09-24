#include<iostream>
using namespace std;

int main(void)
{
	int N;
	cin >> N;
	
	for(int i=1; i!=N-1; i++) {
		for(int j=N-i; j!=1; j--) cout << " ";
		for(int j=i; j!=N-1; j++) cout << "*";
		cout << "\n";
	}
	for(int i=N; i!=1; i--) {
		for(int j=1; j!=N; j++) cout << " ";
		for(int j=i; j!=N; j++) cout << "*";
		cout << "\n";
	}
	
	return 0;
}
