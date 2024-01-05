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
    ll a,b;
    while(cin>>a>>b){
        if(a==0 && b==0) break;
        if(a>b){
            std::swap(a,b);
            cout << a << " " << b << endl;
        }
        else{
            cout << a << " " << b << endl;
        }
    }
    return 0;
}