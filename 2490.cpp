#include<iostream>
using namespace std;

int main(void)
{
	int n;
	int count;
	
	for(int i=0; i<3; i++) {
		count=0;
		for(int j=0; j<4; j++) {
			cin >> n;
			if(n==0) count++;
		}
		switch(count) {
			case 0:
				cout << "E";
				break;
			case 1:
				cout << "A";
				break;
			case 2:
				cout << "B";
				break;
			case 3:
				cout << "C";
				break;
			case 4:
				cout << "D";
				break;
		}
		cout << "\n";
	}
	
	return 0;
}
