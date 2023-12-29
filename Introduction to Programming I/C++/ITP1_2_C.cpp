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
    ll a,b,c; cin>>a>>b>>c;
    ll sum = (a+b+c);
    ll smallest = min({a,b,c});
    ll largest = max({a,b,c});
    ll middle = abs(sum - smallest - largest);
    cout << smallest << " " << middle << " " << largest;
    return 0;
}
