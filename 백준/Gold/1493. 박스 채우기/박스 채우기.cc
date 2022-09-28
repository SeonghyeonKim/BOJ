#include <iostream>
#include <cmath>
using namespace std;

int cube[21];
int cnt[21];
int ans = 0;
int N;

int make_cube(int l, int w, int h) {
	if(!(l && w && h)) return 1;
	
	int md = min(min(l, w), h);
	int midx = -1;
	for(int i=0; i<N; i++) {
		if(cube[i] <= md && cnt[i]>0) {
			md = cube[i];
			midx = i;
			ans++;
			cnt[i]--;
			break;
		}
	}
	
	if(midx==-1) return 0;
	
	int a = make_cube(l-md, md, h);
	int b = make_cube(l, w-md, h);
	int c = make_cube(md, md, h-md);
	
	return (a && b && c);
}
 
int main(void) {
	int l, w, h;
	cin >> l >> w >> h >> N;
	for(int i=N-1; i>=0; i--) cin >> cube[i] >> cnt[i];
	for(int i=0; i<N; i++) cube[i] = pow(2, cube[i]);
	
	if(make_cube(l, w, h)==0) {
		cout << "-1";
		return 0;
	}
		 
	cout << ans;
		
	return 0;
}