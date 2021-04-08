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
const int N = 1001 ; 
int dp[N][N] ;
int n , m ; 
	
	// just print the lcs .. 
	
int lcs(string a , string b ){
	
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=m ; j++){
			if(a[i-1]==b[j-1]) dp[i][j] = 1 + dp[i-1][j-1] ; 
			else {
				dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
			}
		}
	}
	
	return dp[n][m] ; 
	
}

void solve()
{
	string a , b ; cin>>a>>b ; 
	memset(dp , 0 , sizeof dp);
	n= a.size() , m= b.size();
	
	cout<<lcs(a , b);
	
	//here we will print the lcs
	string ans = "" ; 
	
	int x = 1 , y = 1 ; 
	
	while(x<=n and y<=m){
		
		if(a[x-1]==b[y-1]) {
			ans+=a[x-1] ;
			x++ , y++ ; 
		}
		
		else if (dp[x+1][y] > dp[x][y+1]) x++ ;
		else y++ ; 
	}
	
	debug(ans);
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
