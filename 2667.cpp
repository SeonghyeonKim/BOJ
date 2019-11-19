#include<iostream>
using namespace std;

int main(void)
{
	int N;
	cin >> N;
	int mat[N][N];
	for(int i=0; i<N; i++) {
		for(int j=0; j<N; j++) {
			cin >> mat[i][j];
		}
	}
	
	return 0;
}
