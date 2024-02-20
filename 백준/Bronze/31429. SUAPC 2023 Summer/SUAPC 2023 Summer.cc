#include <iostream>
using namespace std;

int a[] = {12, 11, 11, 10, 9, 9, 9, 8, 7, 6, 6};
int b[] = {1600, 894, 1327, 1311, 1004, 1178, 1357, 837, 1055, 556, 773};

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N;
	cin >> N;
	
	cout << a[N-1] << " " << b[N-1];
	
	return 0;
}