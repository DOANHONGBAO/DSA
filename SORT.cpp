#define TASK "TEsT"
#define INPUT TASK".txt" 
#define OUTPUT TASK".OUT"
#include<bits/stdc++.h>
using namespace std; 
bool multitest = 0;
 
#define ll long long 
#define db double 
#define pii pair<int,int> 
#define pll pair<ll,ll>
#define vi vector<int>
#define vll vector<ll> 
#define ve vector 
#define str string 
#define pb push_back 
#define pk pop_back 
#define el '\n'
#define fi first 
#define se second  
#define tct template<typename T>
#define FOR(i,a,b) for(int i=(int)(a);i<=(int)(b);i++)
#define FORD(i,a,b) for(int i=(int)(a);i>=(int)(b);i--)
#define FORN(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define all(a) a.begin(),a.end() 
#define btpc(a) __builtin_popcount(a)  
ll lg(ll a){return __lg(a);}
ll sq(ll a){return a*a;}  
ll gcd(ll a , ll b){return __gcd(a,b);} 
ll lcm(ll a,  ll b){return a/gcd(a,b)*b;}
 tct bool mini(T& a,const T& b){return (a>b)?a=b,1:0;}
tct bool maxi(T& a,const T& b){return (a<b)?a=b,1:0;}
tct void prt(T a[] ,int n ){FOR(i,1,n)cout<<a[i]<<" ";cout<<el;}
int xx[] = {0,0,-1,0,1}; 
int yy[] = {0,-1,0,1,0};
 
const int N = 1e5+5, oo = 2e9, LO = 17; 
const ll inf = 1e17, cs = 330, sm = 1e9+7; 
const db PI = acos(-1), e = 1e-9;

namespace sub1
{
	int n = 10,m = 1000000;
	db a[11][1000001];
	int u = 10;
	void doc()
	{

		// FOR(i,1,n)
		{
			FOR(j,1,m) cin>>a[u][j];
		}
	}

	void QuickSort(db x[],int l,int r)
	{
    	if(l < r)
    	{
    		int pivot = x[r];
    		int i  = l - 1;
    		for(int j = l;j < r;j ++ )
    		{
    			if(x[j] <= pivot) swap(x[++i],x[j]);
    		}
		    swap(x[i + 1],x[r]);
	    	int mid = i + 1;
	    	QuickSort(x,l,mid - 1);
	    	QuickSort(x,mid + 1,r);
    	}

	}

	void heapify(db x[], int n, int i) {
	    int ma = i;
	    int l = 2 * i;     
	    int r = 2 * i + 1; 

	    if (l <= n && x[l] > x[ma]) ma = l;
	    if (r <= n && x[r] > x[ma]) ma = r;

	    if (ma != i) 
	    {
	        swap(x[i], x[ma]);
	        heapify(x, n, ma);
	    }
	}

	void HeapSort(db x[],int tmp, int sz) {
	    for (int i = sz / 2; i >= 1; i--) heapify(x, sz, i);

	    for (int i = sz; i > 1; i--) 
	    {
	        swap(x[1], x[i]); 
	        heapify(x, i - 1, 1); 
	    }
	}

	void merge(db x[],int l,int mid,int r)
	{
		int nL = mid - l + 1,nR = r - mid;
		vi tmpL(nL),tmpR(nR);
		FORN(i,0,nL) tmpL[i] = x[l + i];
		FORN(i,0,nR) tmpR[i] = x[mid + 1 + i];
		int d = 0,c = 0,it = l;
		while(d < nL && c < nR)
		{
			if(tmpL[d] <= tmpR[c]) x[it++] = tmpL[d++];
			else x[it++] = tmpR[c++];
		}
		while(d < nL) x[it++] = tmpL[d++];
		while(c < nR) x[it++] = tmpR[c++];
	}

	void MergeSort(db x[],int l,int r)
	{
		if(l >= r) return;
		int mid = (l + r) >> 1;
		MergeSort(x,l,mid);
		MergeSort(x,mid + 1,r);
		merge(x,l,mid,r);
	}

	void xuly()
	{
		// FOR(i,1,n)
		{

			// QuickSort(a[1],1,m);
			// HeapSort(a[u],1,m);
			// MergeSort(a[u],1,m);
			sort(a[u] + 1,a[u] + m + 1);
			// FOR(j,1,m) cout<<a[i][j]<<" "; cout<<endl;
		}
	}
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
    if(fopen(INPUT,"r"))
    {
        freopen(INPUT ,"r",stdin);
        freopen(OUTPUT,"w",stdout);
    }
    int test =1;
    if(multitest)cin>>test;
    FOR(i,1,test)
    {
        sub1::doc() ; 
        sub1::xuly() ; 
    }
    cerr<<el<<"Time: "<<clock()<<"ms"<<el;
}
