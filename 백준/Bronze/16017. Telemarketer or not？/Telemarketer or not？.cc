#include <iostream>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a, b, c, d;
	cin >> a >> b >> c >> d;
	
	if((a==8 || a==9 ) && (d==8 || d==9) && (b==c)) cout << "ignore";
	else cout << "answer";
				
	return 0;
}