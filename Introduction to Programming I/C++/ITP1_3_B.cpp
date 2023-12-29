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
    ll x;
    for(int i=1;;i++){
        cin>>x;
        if(x == 0) break;
        cout << "Case " << i << ": " << x << endl;
    }
    return 0;
}