#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


// UNION FIND
int arr[101];	// union find set

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
	for(int i=0; i<=101; i++) {
		arr[i] = i;
	}
}


typedef struct {
	int from, to;
	double cost;	
} edge;

vector<edge> v;

bool compare(edge a, edge b) {
	return a.cost < b.cost;
}

// MST by Kruskal
// O(E log E)
double kruskal(void) {
	double sum = 0;
	
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


int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N;
	cin >> N;
	
	vector<pair<double, double> > n(N);
	for(int i=0; i<N; i++) cin >> n[i].first >> n[i].second;
	
	for(int i=0; i<N; i++) {
		for(int j=i+1; j<N; j++) {
			double tmpx = n[i].first - n[j].first;
			double tmpy = n[i].second - n[j].second;
			
			v.push_back({i, j, sqrt(tmpx*tmpx+tmpy*tmpy)});
		}
	}
	
	cout << kruskal();
	
	
	return 0;
}