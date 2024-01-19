#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define ld long double

void FAST_IO() {
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    FAST_IO();
    int a,b; cin>>a>>b;
    int d = (a/b);
    int r = (a%b);
    double f = static_cast<double> (a)/ static_cast<double> (b);
    cout << d << " " << r << "" << fixed << setprecision(5) << " " << f;
    return 0;
}