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

/*
Algorithm():
Checking the conditions [x:Width & y:Height]
1. x>=radius and x<=(Width-radius)
2. y>=radius and y<=(Height-radius)

if these both statements are TRUE: print [YES]
else: print [NO]
*/

int main() {
    FAST_IO();
    ll W,H,x,y,r;
    cin>>W>>H>>x>>y>>r;
    if((x>=r and x<=W-r) and (y>=r and y<=H-r)){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}
