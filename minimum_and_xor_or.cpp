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

	int t, n, a[100005];

	cin >> t;

	while(t--) {
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}

		if (n == 1) {
			cout << a[0] << endl;
			continue;
		}

		sort(a, a + n);

		int minXOR = INT_MAX;
		for (int i = 0; i < n - 1; i++) {
			minXOR = min(minXOR, a[i] ^ a[i+1]);
		}

		cout << minXOR << endl;
	}
	return 0;
}
