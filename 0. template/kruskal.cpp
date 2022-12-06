// UNION FIND
int arr[MAX];	// union find set

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
	for(int i=0; i<=NODE; i++) {
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

// MST by Kruskal
// O(E log E)
int kruskal(void) {
	int sum = 0;
	
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
