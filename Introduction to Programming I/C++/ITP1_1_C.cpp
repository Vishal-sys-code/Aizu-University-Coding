#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define lld long long double

void FAST_IO() {
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    FAST_IO();
    ll a,b; cin>>a>>b;
    //cout << "AREA" << " " << "PERIMETER" << endl;
    // AREA = L*B, PERIMETER = 2*(L+B)
    cout << (a*b) << " " << 2*(a+b) << endl;
    return 0;
}
