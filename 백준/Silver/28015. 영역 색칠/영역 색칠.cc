#include <iostream>
#include <vector>
using namespace std;

int arr[101][101];
int board[101][101];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a, b;
	cin >> a >> b;
	
	for(int i=0; i<a; i++) {
		for(int j=0; j<b; j++) {
			cin >> arr[i][j];
		}
	}
	
	int ans =0;
	for(int i=0; i<a; i++) {		
		for(int j=0; j<b; j++) {
			if(board[i][j] != arr[i][j]) {
				ans++;
				
				for(int k=j; arr[i][k]!=board[i][k]; k++) {
					board[i][k] = arr[i][j];
				}
			}
		}
	}
	
	cout << ans;

    return 0;
}

