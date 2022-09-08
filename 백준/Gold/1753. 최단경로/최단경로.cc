#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int Dist[20001];

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int V, E, start;
    cin >> V >> E >> start;

    vector<pair<int, int> > v[20001];
    for(int i=0; i<E; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
    }

    for(int i=1; i<=V; i++) Dist[i] = 987654321;
	Dist[start] = 0;
	
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

    for(int i=1; i<=V; i++) {
        if(Dist[i] == 987654321) cout << "INF\n";
        else cout << Dist[i] << "\n";
    }

	return 0;
}