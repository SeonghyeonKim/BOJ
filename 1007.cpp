#include <iostream>
#include <cmath>
using namespace std;

typedef struct{
	int x, y;
}lo;

int N;
int check[20];
lo arr[20];
double ans;

double sum() {
	lo tmp = {0,0};
	
	for(int i=0; i<N; i++) {
		if(check[i]) {
			tmp.x -= arr[i].x;
			tmp.y -= arr[i].y;
		}
		else {
			tmp.x += arr[i].x;
			tmp.y += arr[i].y;
		}
	}
	
	return sqrt(pow(tmp.x,2) + pow(tmp.y,2));
}

void sol(int idx, int cnt) {
	if(cnt==N/2) {
		ans = min(ans, sum());
		return ;
	}
	
	for(int i=idx; i<N; i++) {
		check[i]=1;
		sol(i+1, cnt+1);
		check[i]=0;
	}
}

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int T;
	cin >> T;
	
	while(T--) {
		cin >> N;
		
		for(int i=0; i<N; i++) cin >> arr[i].x >> arr[i].y;
	
		ans = 987654321;
		
		sol(0, 0);
		
		cout << fixed;
		cout.precision(7);		
		
		cout << ans << "\n";
	}
	
	return 0;
}
