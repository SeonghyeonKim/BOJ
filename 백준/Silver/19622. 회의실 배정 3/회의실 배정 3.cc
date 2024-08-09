#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

// dp[i][j] : i번째 회의가 열릴 때(j) 최대 인원 
int dp[100002][2];

struct lo {
	int start, end, member;
};

bool comp(lo a, lo b) {
	if(a.start == b.start) {
		return a.end < b.end;
	}
	return a.start < b.start;
}

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N;
	cin >> N;
	
	vector<lo> v;
	for(int i=0; i<N; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		
		v.push_back({a, b, c});
	}
	
	sort(v.begin(), v.end(), comp);
	
	for(int i=1; i<=N; i++) {
		dp[i][0] = max(dp[i-1][0], dp[i-1][1]);
		dp[i][1] = dp[i-1][0] + v[i-1].member;
	}
	
	cout << max(dp[N][0], dp[N][1]);
	
	return 0;
}