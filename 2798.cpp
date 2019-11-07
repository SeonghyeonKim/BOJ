#include<iostream>
using namespace std;

int main(void) 
{
	int N, M, card[101], sum=0;
	cin >> N >> M;
	for(int i=0; i<N; i++) cin >> card[i];
	
	for(int i=0; i<N; i++) {
		for(int j=i+1; j<N; j++) {
			for(int k=j+1; k<N; k++) {
				if(card[i]+card[j]+card[k]>sum && card[i]+card[j]+card[k]<=M) sum = card[i]+card[j]+card[k];
			}
		}
	}
	cout << sum;
		
	return 0;
}
