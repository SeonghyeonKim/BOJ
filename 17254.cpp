#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Keboard{
public:
	int name;
	int time;
	char alpha;
	Keboard(int name, int time, char alpha):name(name),time(time),alpha(alpha){}
	
	bool operator<(Keboard k) const {
		if(this->time == k.time) return this->name < k.name;
		else return this->time <k.time;
	}	
};

int main(void)
{
	int N, M, a, b;
	char c;
	vector<Keboard> k;
	
	cin >> N >> M;
	for(int i=0; i<M; i++) {
		cin >> a >> b >> c;
		k.push_back(Keboard(a, b, c));
	}
	sort(k.begin(), k.end());
	for(int i=0; i<M; i++) {
		cout << k[i].alpha;
	}	
	
	return 0;
}
