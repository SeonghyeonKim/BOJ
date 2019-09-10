#include<iostream>
using namespace std;

int main(void)
{
	int height[9], sum=0, state=0;
	
	for(int i=0; i<9; i++) {
		cin >> height[i];
		sum+=height[i];
	}
	
	for(int i=0; i<8; i++) {
		for(int j=i+1; j<9; j++) {
			if(height[i]<height[j]) {
				int temp = height[i];
				height[i] = height[j];
				height[j] = temp;
			}
		}
	}
	
	for(int i=0; i<8 && state==0; i++) {
		for(int j=i+1; j<9 && state==0; j++) {
			if(sum - height[i] - height[j] == 100) {
				height[i]=0;
				height[j]=0;
				state=1;
			}
		}
	}
	
	for(int i=8; i>=0; i--) {
		if(height[i]!=0) cout << height[i] << "\n";
	}
	
	return 0;
}
