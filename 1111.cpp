#include<iostream>
using namespace std;

int arr[50];

int main(void)
{
	int N, a, b, judge;
	cin >> N;
	
	for(int i=0; i<N; i++) {
		cin >> arr[i];
	}
	
	if(N==1) cout << "A";
	else if(N==2 && arr[0]!=arr[1]) cout << "A";
	else if(arr[0]==arr[1]) {
		judge = 0;
		for(int i=1; i<N; i++) {
			if(arr[i]!=arr[0]) judge = 1;
		}	
		if(judge) cout << "B";
		else cout << arr[0];
	}
	else {
		a = (arr[2]-arr[1])/(arr[1]-arr[0]);
		b = arr[1] - a*arr[0];
		judge = 0;
		for(int i=1; i<N; i++) {
			if(arr[i]!=arr[i-1]*a+b) judge = 1;
		}
		if(judge) cout << "B";
		else cout << arr[N-1]*a+b;
	}
	
	return 0;
}
