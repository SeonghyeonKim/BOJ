/*
다익스트라 알고리즘을 이용한 단방향 그래프에서 
특정한 정점에서 다른 모든 정점으로의 최단 경로 구하기 
*/
#include <iostream>
#include <vector>	// 간선을 벡터의 배열로 저장 
#include <queue>	// 우선순위 큐 사용 

#define INF 987654321 
using namespace std;

// 다익스트라 배열 
int Dist[20001];

int main() {
	// 빠른 입출력 
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

	// 입력 
    int V, E, start;	// V:정점의 수, E:간선의 수, start:시작 정점 
    cin >> V >> E >> start;

    vector<pair<int, int> > v[20001];	// (목표 정점, 간선의 길이) 형태로 저장 
    for(int i=0; i<E; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
    }

	//	초기화 
    for(int i=1; i<=V; i++) Dist[i] = INF;	// 모든 정점의 cost를 INF로 초기화 
	Dist[start] = 0;	// 시작 정점의 cost는 0으로 초기화 
	
	
	// 다익스트라 
	// (-비용, 현재 정점), 음수의 비용을 기준으로 내림차순 
    priority_queue<pair<int, int> > pq;	 
    pq.push({0, start});	

    while(!pq.empty()) {
        int cost = -pq.top().first;
        int current = pq.top().second;
        pq.pop();

        for(int i=0; i<v[current].size(); i++) {
            int next = v[current][i].first;
            int nextCost = v[current][i].second;

            if(Dist[next] > cost + nextCost) {
                Dist[next] = cost + nextCost; 
                pq.push({-Dist[next], next});
            }
        }
    }

	// 결과 출력 
    for(int i=1; i<=V; i++) {
        if(Dist[i] == INF) cout << "INF\n";	// 연결되지 않음 
        else cout << Dist[i] << "\n";
    }

	return 0;
}