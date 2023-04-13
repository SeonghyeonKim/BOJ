#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a=0, b=0;

	vector<int> A(10);
	for(int i=0; i<10; i++) cin >> A[i];
	for(int i=0; i<10; i++) {
		int t;
		cin >> t;
		
		if(A[i]>t) a++;
		else if(A[i]==t) b++;
	}			
	
	if(10-a-b==a) cout << "D";
	else if(10-a-b > a) cout << "B";
	else cout << "A";
	
	return 0;
}