#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#define pii pair<int, int>
using namespace std;

string t[7] = {"", "Habb Yakk", "Dobara", "Dousa", "Dorgy", "Dabash", "Dosh"};
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
			cout << t[a] << "\n";
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
