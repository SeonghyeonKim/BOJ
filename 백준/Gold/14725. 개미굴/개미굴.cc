#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

struct TRIE{
	bool Finish;
	map<string, TRIE*> Node;
	
	TRIE() {
		Finish = false;
	}

	void Insert(vector<string> v, int cnt, int idx) {
		if(cnt == idx) {
			Finish = true;
			return ;
		}
		
		string Cur = v[idx];
		if(Node.find(Cur) == Node.end()) Node.insert({Cur, new TRIE()});
		Node[Cur]->Insert(v, cnt, idx+1); 
	} 
	
	void Print(int cnt) {
		for(auto it=Node.begin(); it!=Node.end(); it++) {
			for(int i=0; i<cnt; i++) cout << "--";
			cout << it->first << "\n";
			(it->second)->Print(cnt+1);
		}
	}
};

int main() {
	cin.tie(NULL);
    ios_base::sync_with_stdio(false);
	
	int T;
	cin >> T;
	
	TRIE *root = new TRIE();
	while(T--) {
		int N, flag=0;
		cin >> N;
		
		vector<string> v(N);
		
		for(int i=0; i<N; i++) 
			cin >> v[i];
			
		root->Insert(v, N, 0);
	}
	
	root->Print(0);
		
	return 0;
}