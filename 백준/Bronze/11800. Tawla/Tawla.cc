#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#define pii pair<int, int>
using namespace std;

string s[7] = {"", "Yakk", "Doh", "Seh", "Ghar", "Bang", "Sheesh"};

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);	

	int N;
	cin >> N;
	for(int i=1; i<=N; i++) {
		int a, b;
		cin >> a >> b;
		
		if(a < b) swap(a, b);
		
		cout << "Case " << i << ": ";
		
		if(a==b) {
			switch (a) {
				case 1:
					cout << "Habb Yakk\n";
					break;
				case 2:
					cout << "Dobara\n";
					break;
				case 3:
					cout << "Dousa\n";
					break;
				case 4:
					cout << "Dorgy\n";
					break;
				case 5:
					cout << "Dabash\n";
					break;
				case 6:
					cout << "Dosh\n";
					break;	
			}
		}
		else if(a==6 && b==5) {
			cout << "Sheesh Beesh\n";	
		}
		else {
			cout << s[a] << " " << s[b] << "\n";
		}
	}
	
	return 0;
}
