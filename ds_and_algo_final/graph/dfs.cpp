#include <bits/stdc++.h>

using namespace std;

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
#define ll long long
#define endl "\n"
#define inf          INT_MAX
#define zer          INT_MIN
#define nl cout<<'\n' ; 
void speed() { ios_base::sync_with_stdio(false);cin.tie(NULL);}
const int N = 1000 ; 
vector<int> adj[N] ; 
vector<int> vis(N,0) ;

void bfs(int src , vector<int>& traversal){
	queue<int> q ; 
	q.push(src);
	vis[src] = 1 ; 
	while(!q.empty()){
		int node = q.front();
		traversal.push_back(node);
		q.pop();
		for(int child : adj[node]){
			if(!vis[child]){
				q.push(child);
				vis[child] = 1 ; 
			}
		}
	}
}

void dfs(int src , vector<int>& traversal){
	vis[src] = 1 ; 
	traversal.push_back(src);
	for(int child : adj[src]){
		if(!vis[child]) dfs(child , traversal);
	}
}

void solve()
{
	int e ; cin>>e ; // number of edges 
	while(e--){
		int a , b ; cin>>a>>b ;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	
	int src = 0 ;
	vector<int> traversal ; 
	//bfs(src , traversal);
	dfs(src , traversal);
	
	debug(traversal);
	
	
}

int main()
{
	speed(); 
    int T = 1;
    //cin >> T;
    while (T--){
    solve();
}
}


/*
test data 
6
0 1 
0 2  
1 2 
1 4 
2 5     
2 6 
*/

