#include<iostream>
using namespace std;

int arr[10000001];

int main(void)
{
	long long int N, M, num, count=0;
	cin >> N >> M;
	
	for(long long int i=0; i<N; i++) {
		cin >> num;
		arr[num] = 1;
	}
	
	for(long long int i=0; i<(M+1)/2; i++)
	{
		if(arr[i] && arr[M-i]) count++;		
	}
	cout << count;
	
	return 0;
}

