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
    ll s; cin>>s;
    ll hh = s/3600; //13
    ll rem = s%3600; //179
    ll mm = rem/60; //2
    ll ss = rem%60;
    cout << hh << ":" << mm << ":" << ss << endl;
    return 0;
}
