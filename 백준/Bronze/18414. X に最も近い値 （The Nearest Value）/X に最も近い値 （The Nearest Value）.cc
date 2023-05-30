#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int arr[2];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int X, L, R;
	cin >> X >> L >> R;
	
	if(X>=L && X<=R) cout << X;
	else if(X>R) cout << R;
	else cout << L;
	
	return 0;
}
