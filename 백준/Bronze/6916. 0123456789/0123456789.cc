#include <iostream>
#include <string>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a;
	cin >> a;
	
	switch(a) {
		case 1:
			cout << """\n      *\n      *\n      *\n\n      *\n      *\n      *""";
			break;	
		case 2:
			cout << """ * * *\n      *\n      *\n      *\n * * *\n*\n*\n*\n * * *""";
			break;	
		case 3:
			cout << """ * * *\n      *\n      *\n      *\n * * *\n      *\n      *\n      *\n * * *""";
			break;	
		case 4:
			cout << """\n*     *\n*     *\n*     *\n * * *\n      *\n      *\n      *""";
			break;	
		case 5:
			cout << """ * * *\n*\n*\n*\n * * *\n      *\n      *\n      *\n * * *""";
			break;	
		case 6:
			cout << """ * * *\n*\n*\n*\n * * *\n*     *\n*     *\n*     *\n * * *""";
			break;	
		case 7:
			cout << """ * * *\n      *\n      *\n      *\n\n      *\n      *\n      *""";
			break;	
		case 8:
			cout << """ * * *\n*     *\n*     *\n*     *\n * * *\n*     *\n*     *\n*     *\n * * *""";
			break;	
		case 9:
			cout << """ * * *\n*     *\n*     *\n*     *\n * * *\n      *\n      *\n      *\n * * *""";
			break;	
		case 0:
			cout << """ * * *\n*     *\n*     *\n*     *\n\n*     *\n*     *\n*     *\n * * *""";
			break;	
	}
	
	return 0;
}
