#include <iostream>
#include <vector>
#define pii pair<int, int>
using namespace std;

int mon[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
int dp[101][10001];

int flag(int a) {
	if((a%4==0 && a%100!=0) || a%400==0) return 1;
	return 0; 
}

int change(int a, int b, int c) {
	int ret = 0;
	for(int i=1990; i<a; i++) {
		if(flag(i)) ret += 366;
		else ret += 365;
	}
	
	for(int i=1; i<b; i++) {
		if(i==2 && flag(a)) ret++;
		ret += mon[i];
	}
	
	ret += c-1;
	
	return ret;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int y1, m1, d1, y2, m2, d2, T, N;
	cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2 >> T >> N;
	
	vector<pii> v(1, {0,0});
	for(int i=1; i<=N; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		
		if(a==3) v.push_back({b, c*30});
		else v.push_back({b, c});
	}
	
	int D1 = change(y1, m1, d1);
	int D2 = change(y2, m2, d2);
	
	for(int i=1; i<=N; i++) {
		for(int j=0; j<=T; j++) {
			if(j < v[i].first) dp[i][j] = dp[i-1][j];
			else dp[i][j] = max(dp[i-1][j], dp[i-1][j-v[i].first] + v[i].second);
		}
	}
	
	cout << abs(D2 - D1 - dp[N][T]);

	return 0;
}