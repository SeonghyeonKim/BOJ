#include <iostream>
#include <vector>
#define pii pair<int, int>
using namespace std;
 
vector<pii> v1, v2;
int dp[1001][1001];	// dp[i][j]: 1번 차가 i, 2번차가 j를 끝냈을 때 거리의 최소값 
int N, W;

int get_dis(pii &a, pii &b) {
	return abs(a.first-b.first) + abs(a.second-b.second);
}

// 각각의 차가 해결한 사건 번호 
int dfs(int pn1, int pn2) {
	// 탐색 종료
	if(pn1 == W || pn2 == W) return 0;
	// 탐색 완료
	if(dp[pn1][pn2] != 0) return dp[pn1][pn2];
	
	int next = max(pn1, pn2) + 1;
	
	// 경찰차1이 다음 사건 해결 시 거리 
	int dis1 = dfs(next, pn2) + get_dis(v1[pn1], v1[next]);
	
	// 경찰차2가 다음 사건 해결 시 거리 
	int dis2 = dfs(pn1, next) + get_dis(v2[pn2], v2[next]);
	
	return dp[pn1][pn2] = min(dis1, dis2);
}

// 경찰차 번호 출력
void Print(int pn1, int pn2) {
	// 탐색 종료 
	if(pn1 == W || pn2 == W) return ;
	
	int next = max(pn1, pn2) + 1;
	
	// 경찰차1이 다음 사건 해결 시 거리 
	int dis1 = dp[next][pn2] + get_dis(v1[pn1], v1[next]);
	
	// 경찰차2가 다음 사건 해결 시 거리 
	int dis2 = dp[pn1][next] + get_dis(v2[pn2], v2[next]);
	
	
	if(dis1 > dis2) {
		cout << "2\n";
		Print(pn1, next);
	} 
	else {
		cout << "1\n";
		Print(next, pn2);
	}
} 

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
	
	cin >> N >> W;
	
	v1.push_back({1, 1});
	v2.push_back({N, N});
		
	for(int i=0; i<W; i++) {
		int a, b;
		cin >> a >> b;
		
		v1.push_back({a, b});
		v2.push_back({a, b});		
	}
	
	cout << dfs(0, 0) << "\n";
    Print(0, 0);
    
    return 0;
}