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
	int n, niceness[1001];
	string s[1001];

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}

	for (int i = 0; i < n; i++) {
		niceness[i] = 0;
	}

	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (s[j].compare(s[i]) < 0) {
				niceness[i]++;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << niceness[i] << endl;
	}

	return 0;
}
