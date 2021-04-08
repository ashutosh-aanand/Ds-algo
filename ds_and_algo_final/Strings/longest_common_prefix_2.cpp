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

string CommonPrefix(vector<string> a){
	
	int n = a.size();
	
	int minlen = inf ; 
	
	for(auto it : a) minlen = min(minlen , (int)it.size());
	
	debug(minlen);
	
	string res=""  ; char curr ; 
	
	for(int i=0 ; i<minlen ; i++){
		
		curr = a[0][i] ; 
		
		for(int j=1 ; j<n ; j++){
			
			debug(a[j][i] , curr);
			if(a[j][i] != curr){
				return res ; 
			}
		}
		res+=curr; 
	}
	
	return res ; 

}

void solve()
{
	
	int n; cin>>n ; 
	vector<string> a(n);
	for(auto &it : a) cin>>it ; 
	
	string ans = CommonPrefix(a);
	
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
