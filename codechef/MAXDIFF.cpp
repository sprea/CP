/*
 *	adikul30
 *	Aditya Kulkarni <aditya.kulkarni15@siesgst.ac.in>
 */
#include <bits/stdc++.h>

using namespace std;

#define INF 1e9
#define EPS 1e-9
#define REP(i, a, b) for(int i = a; i < b; ++i)
#define REPR(i, a, b) for(int i = a; i >= b; --i)
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
#define what_is(x) cerr << #x << " is " << x << endl;

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef vector<string> vs;
typedef map<int,int> mii;

int main()
{
	ios_base::sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		int a[n];
		REP(i,0,n)cin >> a[i];
		sort(a, a+n);
		ll kid = 0,chef = 0;
		if(k >= n-k)k = n-k;
		REP(i,0,k)kid += a[i];
		REP(i,k,n)chef += a[i];
		cout << abs(chef - kid) << endl;
	}
	return 0;
}