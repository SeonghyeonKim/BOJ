#include <iostream>
#include <string>
using namespace std;

int round[51][3];

int main(void) {
	int R, N;
	string s;	

	cin >> R >> s >> N;
	
	for(int i=0; i<N; i++) {
		string tmp;
		cin >> tmp;
		
		for(int j=0; j<R; j++) {
			if(tmp[j]=='S') round[j][0]++;
			else if(tmp[j]=='P') round[j][1]++;
			else round[j][2]++;
		}
	}
	
	int ans1=0, ans2=0;
	
	for(int i=0; i<R; i++) {
		if(s[i]=='S') ans1 = ans1 + round[i][1]*2 + round[i][0];
		else if(s[i]=='P') ans1 = ans1 + round[i][2]*2 + round[i][1];
		else ans1 = ans1 + round[i][0]*2 + round[i][2];
		
		int a = round[i][1]*2 + round[i][0];
		int b = round[i][2]*2 + round[i][1];
		int c = round[i][0]*2 + round[i][2];
		
		if(a>=b && a>=c) ans2+=a;
		else if(b>=a && b>=c) ans2+=b;
		else ans2+=c;
	}
	
	cout << ans1 << "\n" << ans2;
	
	return 0;
}