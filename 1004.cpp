#include<iostream>
#include<cmath>
using namespace std;

int is_in(int, int, int, int, int, int, int);

int main(void)
{
	int x1, y1, x2, y2;
	int T, n, cx, cy, r, count;
	
	cin >> T;
	
	for(int i=0; i<T; i++) {
		count = 0;
		cin >> x1 >> y1 >> x2 >> y2;
		cin >> n;
		for(int j=0; j<n; j++) {
			cin >> cx >> cy >> r;
			count += is_in(cx, cy, r, x1, y1, x2, y2);
		}
		cout << count << "\n";
	}
	
	return 0;
}

int is_in(int cx, int cy, int r, int x1, int y1, int x2, int y2)
{
	int in_1=0, in_2=0;
	double d_1, d_2;
	
	d_1 = sqrt(pow((double)cx-(double)x1,2)+pow((double)cy-(double)y1,2));
	d_2 = sqrt(pow((double)cx-(double)x2,2)+pow((double)cy-(double)y2,2));
	
	if(d_1 < r) in_1 = 1;
	if(d_2 < r) in_2 = 1;
	
	if((in_1==0 && in_2==0) || in_1==1 && in_2==1) return 0;
	else return 1;
}
