#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct Member{
	int rank;
	int age;
	char name[101];
};

bool compare(Member a, Member b) {
	if(a.age == b.age) return a.rank < b.rank; 
	else return a.age < b.age;
}

int main(void)
{
	int N;
	Member mem;
	vector<Member> m;
	
	cin >> N;
	for(int i=0; i<N; i++) {
		cin >> mem.age >> mem.name;
		mem.rank = i;
		m.push_back(mem);
	}
	
	sort(m.begin(),m.end(),compare);
	
	for(int i=0; i<N; i++) {
		cout << m[i].age << " " << m[i].name << "\n";
	}
	
	return 0;
}
