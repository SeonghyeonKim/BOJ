#include<iostream>
using namespace std;

int main(void)
{
	int money, ham[3], bev[2], min_h=2000, min_b=2000;
	
	for(int i=0; i<3; i++) {
		cin >> ham[i];
		if(ham[i]<min_h) min_h=ham[i];
	}
	for(int i=0; i<2; i++) {
		cin >> bev[i];
		if(bev[i]<min_b) min_b=bev[i];
	}
	
	cout << min_h+min_b-50;
	
	return 0;
}
