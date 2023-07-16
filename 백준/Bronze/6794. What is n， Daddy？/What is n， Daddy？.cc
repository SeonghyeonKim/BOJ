#include <iostream>
#include <string>
using namespace std;

int arr[] = {0,1,2,2,3,3,3,2,2,1,1};

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;
	
	cout << arr[N];

	return 0;	
}
