#include <iostream>
#include <vector>
#include <algorithm>
#define pii pair<int, int>
using namespace std;

int arr[100001];

int getParent(int x) {
	if(arr[x]==x) return x;
	return arr[x] = getParent(arr[x]);
}

void unionParent(int a, int b) {
	a = getParent(a);
	b = getParent(b);
	if(a<b) arr[b] = a;
	else arr[a] = b;
}

int findParent(int a, int b){
	a = getParent(a);
	b = getParent(b);
	if(a==b) return 1;
	else return 0;
}

void init(void) {
	for(int i=0; i<=100001; i++) {
		arr[i] = i;
	}
}

typedef struct {
	int from, to, cost;	
} edge;

vector<edge> v;

bool compare(edge a, edge b) {
	return a.cost < b.cost;
}

long long int kruskal(void) {
	long long int sum = 0;
	
	init();
	
	sort(v.begin(), v.end(), compare);
	
	for(int i=0; i<v.size(); i++) {
		if(!findParent(v[i].from, v[i].to)) {
			sum+=v[i].cost;
			unionParent(v[i].from, v[i].to);
		}
	}
	return sum;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N;
	cin >> N;
	
	vector<pii> x, y, z; 
	for(int i=0; i<N; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		
		x.push_back({a, i});
		y.push_back({b, i});
		z.push_back({c, i});
	}
	
	sort(x.begin(), x.end());
	sort(y.begin(), y.end());
	sort(z.begin(), z.end());

	for(int i=0; i<N-1; i++) {
		v.push_back({x[i].second, x[i+1].second, abs(x[i].first - x[i+1].first)});
		v.push_back({x[i+1].second, x[i].second, abs(x[i].first - x[i+1].first)});
		v.push_back({y[i].second, y[i+1].second, abs(y[i].first - y[i+1].first)});
		v.push_back({y[i+1].second, y[i].second, abs(y[i].first - y[i+1].first)});
		v.push_back({z[i].second, z[i+1].second, abs(z[i].first - z[i+1].first)});
		v.push_back({z[i+1].second, z[i].second, abs(z[i].first - z[i+1].first)});
	}
	
	cout << kruskal();
	
	return 0;
}