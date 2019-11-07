#include<iostream>
using namespace std;

int main(void)
{
	int N, rank, data[50][2];
	cin >> N;
	
	for(int i=0; i<N; i++) {
		cin >> data[i][0] >> data[i][1];
	}
	for(int i=0; i<N; i++) {
		rank=1;
		for(int j=0; j<N; j++) {
			if(data[j][0] > data[i][0] && data[j][1] > data[i][1]) rank++;
		}
		cout << rank << " ";
	}
	
	return 0;
}
