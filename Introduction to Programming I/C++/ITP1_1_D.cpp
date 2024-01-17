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
Algorithm(H,M,S):
1. Findign the hour. So, hour = seconds/3600;
2. then we will go for finding the remainder part which came in the hour so s%3600 => now the remainder will play the major part to find the minute and the seconds
3. then finding minute = remainder/60;
4. then for seconds = remainder%60;
*/

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
