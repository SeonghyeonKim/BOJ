#include <iostream>
using namespace std;

int main(void)
{
	int N, score[5]={0,}, max=0;
	
	for(int i=0; i<5; i++) {
		for(int j=0; j<4; j++) {
			cin >> N;
			score[i]=score[i]+N;
		}
	}
	for(int i=0; i<5; i++) {
		if(score[i]>score[max]) max=i;
	}
	cout << max+1 << " " << score[max];
	
	return 0;
}
