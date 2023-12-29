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
    if(a<b){
        cout << "a < b" << endl;
        // cout << a << " is less than " << b;
    }
    else if(b<a){
        cout << "a > b" << endl;
        // cout << a << " is greater than " << b;
    }
    else{
        cout << "a == b" << endl;
        // cout << a << " is equal to " << b;
    }
    return 0;
}
