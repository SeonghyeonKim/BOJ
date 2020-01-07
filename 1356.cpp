#include<iostream>
using namespace std;

int arr[11];

int main(void)
{
	long long int N;
	int check=1, judge=0, count=0;
	int front, back;
	cin >> N;
	
	for(int i=0; N; i++, N/=10) {
		arr[i] = N%10;
		count++;
	}
	
	while(check<count) {
		front = 1;
		back = 1;
		for(int i=0; i<check; i++) front*=arr[i];
		for(int i=check; i<count; i++) back*=arr[i];	
		if(front==back) {
			judge = 1;
			break;
		}
		check++;
	}
	
	if(judge) cout << "YES";
	else cout << "NO";
	
	return 0;
}
