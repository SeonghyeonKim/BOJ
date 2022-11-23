#include <iostream>
#include <string>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int a, b;
	cin >> a >> b;
	
	if(b-a <= 0) cout << "Congratulations, you are within the speed limit!"; 
	else if(b-a <= 20) cout << "You are speeding and your fine is $100.";
	else if(b-a <= 30) cout << "You are speeding and your fine is $270.";
	else cout << "You are speeding and your fine is $500.";
	
	return 0;
}