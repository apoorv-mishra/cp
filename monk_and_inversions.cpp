// https://www.hackerearth.com/practice/codemonk/

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
	int t, n, m[21][21], cnt[1001][21][21];

	cin >> t;

	while(t--) {

		cin >> n;

		for (int i = 1; i <= 1000; i++) {
			for (int j = 0; j <= n; j++) {
				for (int k = 0; k <= n; k++) {
					cnt[i][j][k] = 0;
				}
			}
		}

		for (int i = 0; i <= n; i++) {
			m[n][i] = 0;
			m[i][n] = 0;
		}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> m[i][j];
			}
		}

		for (int i = 1; i <= 1000; i++) {
			for (int j = n - 1; j >= 0; j--) {
				for (int k = n - 1; k >= 0; k--) {
					cnt[i][j][k] = cnt[i][j][k+1] + cnt[i][j+1][k] - cnt[i][j+1][k+1] + (i == m[j][k] ? 1 : 0);
				}
			}
		}

		int inv = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				for (int k = 1; k < m[i][j]; k++) {
					inv += cnt[k][i][j];
				}
			}
		}

		cout << inv << endl;

	}

	return 0;
}
