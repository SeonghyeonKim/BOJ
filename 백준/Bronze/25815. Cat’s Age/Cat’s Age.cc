#include <iostream>
using namespace std;

int main(void) {
	cin.tie(NULL);
    ios_base::sync_with_stdio(false);

	int a, b;
	cin >> a >> b;

	int year=0, month=0;
	if(a==0) year = 0;
	else if(a==1) year = 15;
	else if(a==2) year = 24;
	else year = 24 + 4*(a-2);
	
	if(a==0) month = b*15;
	else if(a<2) month = b*9;
	else month = b*4;
	
	cout << year + month/12 << " " << month%12;
	
    return 0;
}