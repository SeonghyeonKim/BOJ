#include <iostream>
#include <string>
#include <stack>
using namespace std;

int arr[1001][1001];

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N, a, b;
	cin >> N >> a >> b;
	
	for(int i=1; i<=N; i++) {
		for(int j=1; j<=N; j++) {
			cin >> arr[i][j];
		}
	}	
	
	for(int i=0; i<=N; i++) {
		if(arr[i][b] > arr[a][b] || arr[a][i] > arr[a][b]) {
			cout << "ANGRY";
			return 0;
		}
	}
	cout << "HAPPY";
	return 0;
	
	return 0;
}
