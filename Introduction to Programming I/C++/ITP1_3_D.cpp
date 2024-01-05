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
    ll a, b, c, count; 
    cin>>a>>b>>c;
    for(ll i = a; i<=b; i++){
        if(c%i == 0){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}