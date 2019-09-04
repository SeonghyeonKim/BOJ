#include<iostream>
using namespace std;

int main(void)
{
	int x, y, w, h, min=1000;
	int num[4];
	
	cin >> x >> y >> w >> h;
	
	num[0] = w - x;
	num[1] = x;
	num[2] = h - y;
	num[3] = y;
	
	for(int i=0; i<4; i++) {
		if(min>num[i]) min = num[i];		
	}
	
	cout << min;
	
	return 0;
}
