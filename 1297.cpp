#include<iostream>
#include<cmath>
using namespace std;

int main(void)
{
	int diagonal_length, height_rate, width_rate;
	cin >> diagonal_length >> height_rate >> width_rate;
	double rate = diagonal_length/sqrt(height_rate*height_rate+width_rate*width_rate);
	cout << (int) (height_rate*rate) << " " << (int) (width_rate*rate);
	
	return 0;
}
