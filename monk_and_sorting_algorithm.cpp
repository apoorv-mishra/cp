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
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll n;
	vector <pair<ll, ll>> v;

	cin >> n;

	ll num;
	for (int i = 0; i < n; i++) {
		cin >> num;
		v.pb(mp(num, num));
	}

	int p = 0;
	while(1) {
		// modify
		for (int i = 0; i < sz(v); i++) {
			v[i].second = (v[i].first / (ll)pow(10, p)) % 100000;
		}

		// sort
		stable_sort(v.begin(), v.end(), [](const pair<ll, ll> &left, const pair<ll, ll> &right) { return left.second < right.second; });

		// check
		if (v[sz(v) - 1].second == 0)
			break;

		// print
		for (int i = 0; i < sz(v); i++) {
			cout << v[i].first << ' ';
		}

		cout << "\n";

		p += 5;
	}

	return 0;
}
