//////////////////////////////////////////////////////////////////////////////////////////////
//░░░░░██████░██████░██░░█░██████░██████░░███░░░██████░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░//
//░░░░░░░██░░░██░░░█░███░█░░░██░░░░░██░░░█████░░██░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░©░//
//░░░░░░░██░░░██░░░█░█████░░░██░░░░░██░░██░░░██░██████░░░░░░░░░░░░███░███░█░███░█░████░█░░░░//
//░░░░░░░██░░░██░░░█░█░░██░░░██░░░░░██░░██░░░██░░░░░██░░░░░░░░░░░░█░█░█░░░█░█░█░█░█░░█░█░░░░//
//░░░░░░░██░░░██████░█░░██░░░██░░░░░██░░███████░██████░░░░░░░░░░░░█░█░██░░█░█░░░█░████░█░█░░//
//░░░░░██████░██████░█░░██░██████░░░██░░██░░░██░██████░░░░░░░░░░░░███░█░░░█░███░█░█░░█░███░░//
//                            Created by Serghei on 09.07.2018.                             //
//                  Copyright © 2018 Ionitas. All rights reserved.                          //
//////////////////////////////////////////////////////////////////////////////////////////////

//############Libraries############
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <fstream>
#include <iostream>
#include <iterator>
#include <limits>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include <array>
#include <forward_list>
#include <initializer_list>
#include <unordered_map>
#include <unordered_set>
#include <cmath>
//#include <boost/math/common_factor.hpp>
//#include <boost/multiprecision/cpp_int.hpp>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>


//############Namespaces############
using namespace std;
//using namespace boost::multiprecision;
//using namespace __gnu_pbds;


//############Defines && Typedefs############
#define     speed ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);srand(time(NULL));
#define     ll                      long long
#define     ld                      long double
#define     ull                     unsigned long long
#define     el                      puts("");
#define     endl                    '\n'
#define     fi                      first
#define     se                      second
#define     all(a)                  a.begin(), a.end()
#define     getcx()                 getchar();
#define     rt                      return 0;
#define     max3(a,b,c)             max(a,max(b,c))
#define     min3(a,b,c)             min(a,min(b,c))
#define     fill(a,nr)              memset(a , nr , sizeof a);
#define     pb                      push_back
#define     eb                      emplace_back
#define     rsz                     resize
#define     rsrv                    reserve
#define     ins(a)                  insert(a)
#define     del                     erase
#define     lwbnd(a, elem)          lower_bound(a.begin(), a.end(), elem);
#define     upbnd(a, elem)          upper_bound(a.begin(), a.end(), elem);
#define     sz(a)                   int((a).size())
#define     mp                      make_pair
#define     pi                      pair<int,int>
#define     pll                     pair<ll,ll>
#define     vi                      vector<int>
#define     vii                     vector<vi >
#define     vll                     vector<ll>
#define     vb                      vector<bool>
#define     vpi                     vector<pi >
#define     vs                      vector<string>
#define     mapi                    map<int,int>
#define     mapll                   map<ll,ll>
#define     umapi                   unordered_map<int,int>
#define     umapll                  unordered_map<ll,ll>
#define     stacki                  stack<int>
#define     stackll                 stack<ll>
#define     queuei                  queue<int >
#define     queuell                 queue<ll >
#define     pr_qi                   priority_queue<int >
#define     pr_qll                  priority_queue<ll >
#define     pqueue                  priority_queue< int >
#define     pdqueue                 priority_queue< int,vi ,greater< int > >
#define     minQueue                priority_queue<ll,vector<ll>,greater<ll> >
#define     maxQueue                priority_queue<ll,vector<ll>,less<ll> >
#define     Unique(a)               sort(all(a)),a.erase(unique(all(a)),a.end())
#define     vp(c,x)                 (find(all(c),x) != (c).end())  // for vector
#define     sp(c,x)                 ((c).find(x) != (c).end())  // for set,map
#define     fpresent(x,c)           ((c).find(x) != (c).end())  //set,map
#define     present(c,x)            (find(all(c),x) != (c).end()) //vector
#define     FOR(i,a,b)              for(ll int i(a);i<b;i++)
#define     FORdown(i, n)           for(ll int i =int(n) - 1; i >= 0; i--)
#define     tr(x,it)                for(auto it = x.begin();it!=x.end();++it)
#define     dbg(args...)            do {cerr << #args << " : "; faltu(args); } while(0)
#define     ook                     order_of_key
#define     fbo                     find_by_order //returns pointer
#define     precision(x,d)          cout<<fixed<<setprecision(d)<<x
#define     debug(n1)               cout<<n1<<endl
#define     rall(cont)              cont.end(), cont.begin()
#define     FOREACH(it, l)          for (auto it = l.begin(); it != l.end(); it++)
#define     sqr(x)                  ((x)*(x))
#define     gcd(a,b)                __gcd(a,b)
#define     lcm(a,b)                ((a)*((b)/gcd(a,b)))
#define     two(X)                  (1<<(X))
#define     setBit(mask,i)          (mask|two(i))
#define     contain(S,X)            (((S)&two(X))!=0
#define     debug_array(a,n)        for(int i=0;i<n;i++) cerr<<a[i]<<" "; cerr<<endl;

//############Constants############
const     ll                        MOD=1e9+7;
const     ll                        INF = 0x3f3f3f3f;
const     ll                        LINF = 0x3f3f3f3f3f3f3f3f;
const     ld                        PI = acos(-1);
const     ld                        eps= 0.00001;


//############Grid############
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
int dx4[] = {-1, 0, 1, 0};
int dy4[] = { 0, 1, 0,-1};
int dx8[] = {-1, 0, 1, 0, -1,-1, 1, 1};
int dy8[] = { 0, 1, 0,-1, -1, 1,-1, 1};
int dxhorse[] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dyhorse[] = {1,  -1, 2 , -2, 2,-2, 1,-1};

//############Templates############
template<typename T> inline void setmin(T &x, T y) { if (y < x) x = y; }
template<typename T> inline void setmax(T &x, T y) { if (y > x) x = y; }
template<typename T> inline T gcd(T a, T b) { while (b)swap(a %= b, b); return a; }
template<class T>  inline T fast_gcd(T u, T v) {
    int shl = 0; while (u && v && u != v) {
        T eu = u & 1; u >>= eu ^ 1; T ev = v & 1; v >>= ev ^ 1;
        shl += (~(eu | ev) & 1); T d = u & v & 1 ? (u + v) >> 1 : 0; T dif = (u - v) >> (sizeof(T) * 8 - 1); u -= d & ~dif; v -= d & dif;
    } return std::max(u, v) << shl;
}
template<class T1,class T2> inline void upd1(T1&a,T2 b){a>b?a=b:0;}
template<class T1,class T2> inline void upd2(T1&a,T2 b){a<b?a=b:0;}
template<class T> inline bool equ(const T&a,const T&b) { return!memcmp(&a,&b,sizeof a);}
template<class T> bool isPrime(T x) {
    if (x <= 4 || x % 2 == 0 || x % 3 == 0) return x == 2 || x == 3;
    for (T i = 5; i * i <= x; i += 6) if (x % i == 0 || x % (i + 2) == 0) return 0; return 1;
}
template<typename T> static inline T aabs(T x){if(x<0)return -x; return x;}
template<typename T, typename U> inline static void aswap(T &x, U &y){T temp; temp=x; x=y; y=temp;}
template<typename T, typename U> inline static ll fpow(T n, U k, int p = MOD) {ll r = 1; for (; k; k >>= 1) {if (k & 1) r = r * n % p; n = n * n % p;} return r;}
template<class T> inline void normmod(T &x, T m =MOD) { x %= m; if (x < 0) x += m; }
template<typename T> vector<vector<T> > newton(int N, int MOD) {
    vector<vector<T> > npok(N + 1, vector<T>(N + 1));
    for (int i = 0; i <= N; ++i)npok[i][0] = 1;
    for (int i = 1; i <= N; ++i)for (int j = 1; j <= N; ++j)npok[i][j] = (npok[i - 1][j] + npok[i - 1][j - 1]) % MOD; return npok;
}


//############Geometry############

template <typename T> inline T PointDistanceHorVer(T x1,T y1,T x2, T y2) {return abs(x1-x2)+abs(y1-y2);}
template <typename T> inline T PointDistanceDiagonally(T x1,T y1,T x2, T y2) {return sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));}
template <typename T> inline T PointDistanceMinimum(T x1,T y1,T x2, T y2) { T tmp1=abs(x1-x2); T tmp2=abs(y1-y2); T tmp3=abs(tmp1-tmp2); T tmp4=min(tmp1, tmp2); return tmp3+tmp4; }
template <typename T> inline T PointDistance3D(T x1,T y1,T z1,T x2,T y2,T z2) {return sqrt(square(x2-x1)+square(y2-y1)+square(z2-z1));}
template <typename T> inline T Cube(T a){return a*a*a;}
template <typename T> inline T RectengularPrism(T a,T b,T c){return a*b*c;}
template <typename T> inline T Pyramid(T base, T height){return (1/3)*base*height;}
template <typename T> inline T Ellipsoid(T r1,T r2,T r3) {return (4/3)*PI*r1*r2*r3;}
template <typename T> inline T IrregualarPrism(T base, T height){return base*height;}
template <typename T> inline T Sphere(T radius){ return (4/3)*PI*radius*radius*radius;}
template <typename T> inline T CylinderB(T base, T height){return base*height;} // base and height
template <typename T> inline T CylinderR(T radius, T height){return PI*radius*radius*height;} // radius and height
template <typename T> inline T Cone (T radius,T base, T height){return (1/3)*PI*radius*radius*height;}



//############Classes############


//############Functions############
inline bool EQ(double a, double b) { return fabs(a-b) < 1e-9; }
inline bool isLeapYear(ll year) { return (year%400==0) || (year%4==0 && year%100!=0); }
inline void normal(ll &a) { a %= MOD; (a < 0) && (a += MOD); }
inline ll modMul(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a*b)%MOD; }
inline ll modAdd(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a+b)%MOD; }
inline ll modSub(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); a -= b; normal(a); return a; }
inline ll modPow(ll b, ll p) { ll r = 1; while(p) { if(p&1) r = modMul(r, b); b = modMul(b, b); p >>= 1; } return r; }
inline ll modInverse(ll a) { return modPow(a, MOD-2); }
inline ll modDiv(ll a, ll b) { return modMul(a, modInverse(b));}
inline int test(int n, int b) { return (n>>b)&1; }
inline void set_bit(int & n, int b) { n |= two(b); }
inline void unset_bit(int & n, int b) { n &= ~two(b); }
inline int last_bit(int n) { return n & (-n); }
inline int ones(int n) { int res = 0; while(n && ++res) n-=n&(-n); return res; }

//############Structs############






//setbase - cout << setbase (16)a; cout << 100 << endl; Prints 64
//setfill -   cout << setfill ('x') << setw (5); cout << 77 <<endl;prints xxx77
//setprecision - cout << setprecision (14) << f << endl; Prints x.xxxx
//cout.precision(x)  cout<<fixed<<val;  // prints x digits after decimal in val




//############Main_Huinea############

int main(int argc, const char * argv[]) {
    speed
    // insert code here...
    
    
    
    
    
    
    
    
    
    
    rt
}
