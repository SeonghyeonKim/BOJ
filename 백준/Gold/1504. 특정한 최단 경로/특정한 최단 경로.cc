/*
3개의 다익스트라를 사용.

1~v1 + v1~v2 + v2~N 의 경로와
1~v2 + v2~v1 + v2~N 의 경로를 비교하여 최단경로 구하기.

3 부분 중에 하나라도 INF면 -1 출력. 
*/

#include <iostream>
#include <vector>
#include <queue>

#define INF 987654321
using namespace std;

int Dist[3][801];	// 다익스트라 배열 

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

	int N, E;
	int v1, v2;	// 방문해야하는 두 정점 
	cin >> N >> E;
	
	vector<pair<int, int> > v[801];	// 간선 배열 
    for(int i=0; i<E; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
        v[b].push_back({a, c});
    }

	cin >> v1 >> v2;

	// 배열 초기화 
	for(int i=1; i<=N; i++) {
		Dist[0][i] = INF;
		Dist[1][i] = INF;
		Dist[2][i] = INF;	
	}
	
	// 1번째 다익스트라, 1 에서 출발 경로 계산 
	Dist[0][1] = 0;
    priority_queue<pair<int, int> > pq;
    pq.push({0, 1});

    while(!pq.empty()) {
        int cost = -pq.top().first;
        int current = pq.top().second;
        pq.pop();

        for(int i=0; i<v[current].size(); i++) {
            int next = v[current][i].first;
            int nextCost = v[current][i].second;

            if(Dist[0][next] > cost + nextCost) {
                Dist[0][next] = cost + nextCost;
                pq.push({-Dist[0][next], next});
            }
        }
    }
    
    // 2번째 다익스트라, v1에서 출발 경로 계산 
    Dist[1][v1] = 0;
    pq.push({0, v1});

    while(!pq.empty()) {
        int cost = -pq.top().first;
        int current = pq.top().second;
        pq.pop();

        for(int i=0; i<v[current].size(); i++) {
            int next = v[current][i].first;
            int nextCost = v[current][i].second;

            if(Dist[1][next] > cost + nextCost) {
                Dist[1][next] = cost + nextCost;
                pq.push({-Dist[1][next], next});
            }
        }
    }
    
    // 3번째 다익스트라, N에서 출발 경로 계산 
	Dist[2][N] = 0;
	pq.push({0, N});

    while(!pq.empty()) {
        int cost = -pq.top().first;
        int current = pq.top().second;
        pq.pop();

        for(int i=0; i<v[current].size(); i++) {
            int next = v[current][i].first;
            int nextCost = v[current][i].second;

            if(Dist[2][next] > cost + nextCost) {
                Dist[2][next] = cost + nextCost;
                pq.push({-Dist[2][next], next});
            }
        }
    }
	
	if(Dist[0][v1]==INF || Dist[1][v2]==INF || Dist[2][v2]==INF) cout << -1;
 	else cout << min(Dist[0][v1]+Dist[2][v2], Dist[0][v2]+Dist[2][v1]) + Dist[1][v2];

	return 0;
}