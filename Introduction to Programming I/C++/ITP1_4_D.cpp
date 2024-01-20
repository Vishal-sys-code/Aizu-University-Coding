#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define ld long double
const double PI = 3.14159265359;

void FAST_IO() {
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    FAST_IO();
    ll n; cin>>n;
    ll arr[n];
    ll sum = 0; ll min = 0; ll max = 0;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    for(ll i=0;i<n;i++){
        sum+=arr[i];
    }
    sort(arr,arr+n);
    for(ll i=0;i<n;i++){
        max = arr[n-1];
        min = arr[0];
    }
    cout << min << " " << max << " "  << sum << endl;
    return 0;
}