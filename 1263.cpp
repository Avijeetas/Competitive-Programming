#include <bits/stdc++.h>
using namespace std;

//===============typedef
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector< vi > vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<vii> vvii;
typedef set<int> si;
typedef map<string, int> msi;

/*
using namespace __gnu_pbds;

#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp> // Including 
template<typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<typename F, typename S>
using ordered_map = tree<F, S, less<F>, rb_tree_tag, tree_order_statistics_node_update>;
*/


//=================Constant
const ll MOD=1e9+7;
const ll inf=10000000;

//=============define
#define cln(a) memset(a,0,sizeof a);
#define clni(a) memset(a,inf,sizeof a);
#define all(x) x.begin(), x.end()
#define tr(container, it) for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
#define sz(a) int((a).size())
#define pb push_back
#define sp(c,x) ((c).find(x) != (c).end())  // for set,map
#define vp(c,x) (find(all(c),x) != (c).end())  // for vector
#define uu first
#define vv second
#define fr(i,a,b) for(int i=int(a);i<int(b);++i)
#define nfr(i,a,b) for(int i= int(a);i>=int(b);--i)
#define tc cin>>t ; while(t--)
#define pc()  cout<<"Case "<<cs++<<": "
#define mx (int)1e5+10
#define s2(x,y) scanf("%d %d",&x,&y)
#define s2l(x,y) scanf("%lld %lld",&x,&y)
#define s3(x,y,z) scanf("%d %d %d",&x,&y,&z)
#define s3l(x,y,z) scanf("%lld %lld %lld",&x,&y,&z)
#define sc(x)  scanf("%d",&x)
//
#define SCL(x)  scanf("%lld",&x)
#define pfs(x) printf("%d ",x)
#define pfl(x) printf("%d\n",x)
#define el puts("");
#define getcx() getchar()
#define IOS    ios::sync_with_stdio(0); cin.tie(0);cout.tie(0)
#define Fl   freopen("in", "r", stdin);freopen("out","w", stdout)


//============functions
inline bool EQ(double a, double b) { return fabs(a-b) < 1e-9; }
inline bool isLeapYear(ll year) { return (year%400==0) || (year%4==0 && year%100!=0); }
inline void normal(ll &a) { a %= MOD; (a < 0) && (a += MOD); }
inline ll modMul(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a*b)%MOD; }
inline ll modAdd(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a+b)%MOD; }
inline ll modSub(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); a -= b; normal(a); return a; }
inline ll modPow(ll b, ll p) { ll r = 1; while(p) { if(p&1) r = modMul(r, b); b = modMul(b, b); p >>= 1; } return r; }
inline ll modInverse(ll a) { return modPow(a, MOD-2); }
inline ll modDiv(ll a, ll b) { return modMul(a, modInverse(b)); }
inline bool checkBit(ll n, int i) { return n&(1LL<<i); }
inline ll setBit(ll n, int i) { return n|(1LL<<i);; }
inline ll resetBit(ll n, int i) { return n&(~(1LL<<i)); }

//============ Grid


int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0}; 

void input(ll n,const ll a[],int co=0)
{
	ll i=1;
	for(;i<=n;i++)
	{
	}
}

/*
	
	lcm(a,b,c)=a*b*c/gcd(gcd(a,b),c)=L
*/

bool cmp()
{
    
}
const ll N=1e3+5;
vi g[N];
int a[N],vis[N];

int n,m,tot,cnt,avg;
void dfs(int u,int pr=-1)
{
	cnt++;
	tot+=a[u];
	vis[u]=1;
	for(auto it : g[u])
	{
		if(!vis[it])
			dfs(it,u);
	}
}


int main()
{
	
//			IOS;
			
//			Fl;
			int t,cs=1;
			sc(t);
			while(t--)
			{


				s2(n,m);

				memset(vis,0,sizeof vis);
				int tl=0;
				fr(i,0,n)
				{
					sc(a[i]);
					tl+=a[i];
				}	

					int u,v;
				while(m--)
				{

					s2(u,v);
					u--,v--;
					g[u].pb(v);
					g[v].pb(u);
				}
				avg=tl/n;
				int no=0;
				if(tl%n)
					no=1;
				fr(i,0,n)
				{
					tot=0;
					cnt=0;
					if(vis[i]==0)
					{
						dfs(i);
						if(avg!=tot/cnt)
						{
							no=1;
							break;
						}
						else if(tot%cnt)
						{
							no=1;
							break;
						}
					}
				}
								
	
				printf("Case %d: %s\n",cs++,!no?"Yes":"No");
				fr(i,0,N)
					g[i].clear();	
//				memset(vis,0,sizeof vis);
			}
		
				
}