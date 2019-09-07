#include<iostream>
#include<cstdlib>
using namespace std;

int main(void)
{
	long long N, B, C;
	long long count = 0;
	long long* arr = (long long*)malloc(sizeof(long)*1000001);
	cin >> N;
	
	for(int i=0; i<N; i++) {
		cin >> arr[i];
	}
	
	cin >> B >> C;
	
	for(int i=0; i<N; i++) {
		arr[i] = arr[i] - B;
		count++;
		
		if(arr[i] > 0) {
			count = count + arr[i]/C;
			if(arr[i]%C != 0) count++;
		}
	}
	
	cout << count;
	
	free(arr);
	
	return 0;
}
