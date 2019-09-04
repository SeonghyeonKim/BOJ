#include <iostream>
using namespace std;

int *arr;
int check(int);

int main(void)
{
	int N;
  	cin >> N;
  	arr = new int[N+1]();
	check(N);

  	cout << arr[N];
  	
  	delete arr;
  	
	return 0;
}

int check(int n)
{
	if(n == 1) return 0;
	if(arr[n] > 0) return arr[n];
	arr[n] = check(n-1) + 1;

	if(n%2 == 0){
		int temp = check(n/2) + 1;
		if(arr[n] > temp) arr[n] =temp;
	}
	if(n%3 == 0){
		int temp = check(n/3) + 1;
		if(arr[n] > temp) arr[n] = temp;
	}

	return arr[n];
}

