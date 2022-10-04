#include <iostream>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int a, b;
	cin >> a >> b;
	
	if(a+b>=5) {
		cout << "yt";
	}
	else if(a+a+b>=5){
		cout << "yj";
	}
	else {
		cout << "yt";
	}
	
	return 0;
}