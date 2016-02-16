
#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i=(a),_b=(b); i<=_b; ++i)
#define FORD(i,a,b) for(int i=(a),_b=(b); i>=_b; --i)
#define REP(i,a) for(int i=0,_a=(a); i < _a; ++i)

#define DEBUG(X) { cout << #X << " = " << X << endl; }
#define PR(A,n)  { cout << #A << " = "; FOR(_,1,n) cout << A[_] << ' '; cout << endl; }
#define PR0(A,n) { cout << #A << " = "; REP(_,n) cout << A[_] << ' '; cout << endl; }

#define sqr(x) ((x) * (x))
#define ll long long
#define SZ(x) ((int) (x).size())
using namespace std;

const int MN = 100111;
int n, k;
int a[MN];

int main() {
    ios :: sync_with_stdio(0); cin.tie(0);
    while (cin >> n >> k) {
        if (n == k) {
            cout << -1 << endl;
            continue;
        }
        FOR(i,n-k+1,n) a[i] = i;
        int bound = n - k;
        FOR(i,1,bound) {
            int j = i + 1;
            if (j > bound) j = 1;
            a[i] = j;
        }
        FOR(i,1,n) cout << a[i] << ' '; cout << endl;
    }
}
