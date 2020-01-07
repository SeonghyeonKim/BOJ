#include<iostream>
using namespace std;

int main(void)
{
	int R, B, L, W;
	cin >> R >> B;
	
	for(int i=3; i<R+B; i++) {
		if((R+B)%i==0) {
			W = i;
			L = (R+B)/i;
			if((L-2)*(W-2)==B) break;
		}
	}
	
	cout << L << " " << W;
	
	return 0;
}
