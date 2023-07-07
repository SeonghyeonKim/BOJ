#include <iostream>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N;
	cin >> N;
	
	int a=0, b=0, c=0, d=0;	
	for(int i=0; i<N; i++) {
		int q, w, e;
		cin >> q >> w >> e;
		
		if(q==1) d++;
		else if(w==3) b++;
		else if(w==4) c++;
		else a++;
	}
	
	cout << a << "\n" << b << "\n" << c << "\n" << d;

	return 0;
}
		
