// https://www.hackerearth.com/practice/codemonk/
// partial
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned int ui;

#define inp_s     ios_base::sync_with_stdio(false)
#define DRT()     int test_case;cin>>test_case;while(test_case--)

#define VI        vector<int>
#define VS        vector<string>
#define VLL       vector<ll>
#define PII       pair<int,int>
#define all(c)    c.begin(),c.end()
#define sz(c)     (int)c.size()
#define clr(c)    c.clear()
#define pb        push_back
#define pf        push_front
#define mp        make_pair

#define GI(x)     scanf("%d",&x)

#define FOR(i,a,b)      for(int i=(int)(a);i<(int)(b);i++)
#define RFOR(i,a,b)     for(int i=(int)(b)-1;i>=(int)(a);i--)

#define MOD       1000000007
#define EPS       1E-10
#define INF       1000000000
#define MAXN      1000005
#define PI        acos(-1)

#define CASE(x)   cout << "Case #" << x << ": ";

#define OPERATOR(chk) chk=='+'||chk=='-'||chk=='*'||chk=='/'||chk=='%'||chk=='^'

int main() {

	ll t, n, k;
	string str;

	cin >> t;

	while(t--) {
		cin >> n >> k >> str;

		str += str;

		ll cnt = 0, maxOnes = 0, pos = 0, idx = -1;
		for (int i = 0; i < sz(str); i++) {
			if (str[i] == '1') {
				cnt++;
				if (maxOnes < cnt) {
					maxOnes = cnt;
					pos = idx + 1;
				}
			} else {
				idx = i;
				cnt = 0;
			}
		}

		ll minCycles = n;
		for (int i = 1; i < n; i++) {
			if (n % i == 0) {
				string s1 = str.substr(0, i);
				bool found = true;
				for (int j = i; j + i <= n; j += i) {
					string s2 = str.substr(j, i);
					if (s1.compare(s2) != 0) {
						found = false;
						break;
					}
				}
				if (found) {
					minCycles = i;
					break;
				}
			}
		}

		cout << pos + (k - 1) * minCycles << "\n";
	}
	return 0;
}
