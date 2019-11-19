#include<iostream>
using namespace std;

int main(void)
{
	long K, N, lan[10000], count=0, size=0, sum=0, low=0, high;
	cin >> K >> N;
	for(long i=0; i<K; i++) {
		cin >> lan[i];
		sum+=lan[i];
	}
	size = sum/N;
	high = size;
	while(count!=N) {
		count = 0;
		for(long i=0; i<K; i++) {
			count += lan[i]/size;
		}
		if(count>N) {
			low = size;
			size = (size+high)/2;
		}
		else if(count<N) {
			high = size;
			size = (low+size)/2;
		}
	}
	while(count==N) {
		size++;
		count=0;
		for(long i=0; i<K; i++) {
			count += lan[i]/size;
		}
	}
	cout << --size;
	
	return 0;
}

/*
4 11
802
743
457
539
*/
