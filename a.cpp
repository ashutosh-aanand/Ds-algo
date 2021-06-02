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


void solve()
{
	int n;  cin>>n ;
	string a , b ; cin>>a>>b ;
	vector<int> pre0(n) , pre1(n);
	
	pre0[0] = a[0] == '0' ;
	pre1[0] = a[0] == '1' ;
	
	for(int i=1 ; i<n ; i++){
		pre0[i] = pre0[i-1] ;
		pre1[i] = pre1[i-1] ;
		
		if(a[i] == '0') pre0[i]++ ;
		else pre1[i]++ ;
	}
	
	debug(pre0);
	
	int parity = 0 ;
	
	int j = n-1 ;
	
	while(j>=0){
		if(!parity){
			if(a[j]!=b[j]){
				if(pre0[j]!=pre1[j]){
					cout<<"NO\n" ;
					return ;
				}
				parity^=1 ;
			}
		}
		else {
			if(a[j]==b[j]){
				if(pre0[j]!=pre1[j]){
					cout<<"NO\n" ;
					return ;
				}
				parity^=1 ;
			}	
		}
		j-- ;
	}
	
	cout<<"YES\n" ;
	

	
	
	
}

int main()
{
	speed(); 
    int T = 1;
    cin >> T;
    while (T--){
    solve();
}
}
