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

int num;
str f(int n){
	str s = "";
	while(n){
		s.pb(n % 2 + '0');
		n /= 2;
	}while(len(s) < num) s.pb('0');
	reverse(all(s));
	str res = ""; res.pb(s[0]);
	for(int i=1; i<num; i++){
		if(s[i] == s[i-1]) res.pb('0');
		else res.pb('1');
	}return res;
}

signed main(){
	LonggVuz();
	
	tc(){
		cin >> num;
		int x = (int)pow(2, num);
		for(int i=0; i<x; i++){
			cout << f(i) << ' ';
		}cout << el;
	}
	
	End();
}