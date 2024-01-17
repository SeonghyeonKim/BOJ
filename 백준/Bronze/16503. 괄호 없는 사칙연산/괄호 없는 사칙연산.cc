#include <iostream>
#include <string>
#include <cmath>
#include <stack>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a, b, c;
	char d, e;
	cin >> a >> d >> b >> e >> c;
	
	int tmp1, tmp2;
	switch(d) {
		case '+':
			switch(e) {
				case '+':
					tmp1 = (a + b) + c;
					tmp2 = a + (b + c);
					break;
				case '-':
					tmp1 = (a + b) - c;
					tmp2 = a + (b - c);
					break;
				case '*':
					tmp1 = (a + b) * c;
					tmp2 = a + (b * c);
					break;
				case '/':
					tmp1 = (a + b) / c;
					tmp2 = a + (b / c);
					break;
			}
			break;
		case '-':
			switch(e) {
				case '+':
					tmp1 = (a - b) + c;
					tmp2 = a - (b + c);
					break;
				case '-':
					tmp1 = (a - b) - c;
					tmp2 = a - (b - c);
					break;
				case '*':
					tmp1 = (a - b) * c;
					tmp2 = a - (b * c);
					break;
				case '/':
					tmp1 = (a - b) / c;
					tmp2 = a - (b / c);
					break;
			}
			break;
		case '*':
			switch(e) {
				case '+':
					tmp1 = (a * b) + c;
					tmp2 = a * (b + c);
					break;
				case '-':
					tmp1 = (a * b) - c;
					tmp2 = a * (b - c);
					break;
				case '*':
					tmp1 = (a * b) * c;
					tmp2 = a * (b * c);
					break;
				case '/':
					tmp1 = (a * b) / c;
					tmp2 = a * (b / c);
					break;
			}
			break;
		case '/':
			switch(e) {
				case '+':
					tmp1 = (a / b) + c;
					tmp2 = a / (b + c);
					break;
				case '-':
					tmp1 = (a / b) - c;
					tmp2 = a / (b - c);
					break;
				case '*':
					tmp1 = (a / b) * c;
					tmp2 = a / (b * c);
					break;
				case '/':
					tmp1 = (a / b) / c;
					tmp2 = a / (b / c);
					break;
			}
			break;
	}
	
	if(tmp1>tmp2) cout << tmp2 << "\n" << tmp1;
	else cout << tmp1 << "\n" << tmp2;
	
			
	return 0;
}
