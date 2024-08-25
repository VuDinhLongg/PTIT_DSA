// LonggVuz.
#include<bits/stdc++.h>
using namespace std;
// Noob C++
void End(){
    cerr << "=> Thời gian code chạy: ";
    cerr << (1.0 * clock() / CLOCKS_PER_SEC) << " giây" << string(27, '\t');
}
#define LonggVuz() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define use(x) freopen(x".inp", "r", stdin); freopen(x".out", "w", stdout);
#define fix(x) fixed << setprecision(x)
#define all(x) x.begin(), x.end()
#define len(x) (int)x.size()
#define ms(a, x) memset(a, x, sizeof(a))
#define tc() int TC; cin >> TC; while(TC--)
#define el '\n'
#define fi first
#define se second
#define pb push_back
#define str string
#define int intmax_t
#define ld long double

const int mod = 1e9 + 7;
const int oo = 1e18 + 7;
const int maxn = 1e6 + 7;

void solve(int n){
	vector<int> v;
	queue<int> q;
	q.push(6);
	q.push(8);
	while(1){
		int x = q.front(); q.pop();
		if(len(to_string(x)) > n) break;
		v.pb(x);
		q.push(x * 10 + 6);
		q.push(x * 10 + 8);
	}cout << len(v) << el;
	for(int &i : v) cout << i << ' '; cout << el;
}

signed main(){
	LonggVuz();
	
	tc(){
		int n; cin >> n;
		solve(n);
	}
	
	End();
}