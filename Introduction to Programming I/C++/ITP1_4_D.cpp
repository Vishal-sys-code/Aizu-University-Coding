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

/*
ALGORITHM_BRUTE_FORCE():
1. Take it in the array, and also take out the sum of the whole array
2. After the sum, we need to sort the array by using the STL one in log(N) Time Complexity
3. If the whole array is sorted then the minimum element is in the 0th index and the maximum element is in the (n-1)th index
    minimum => 0th index
    maximum => (n-1)th index
*/

int main() {
    FAST_IO();
    /*
    USING SORTING => O(N)+O(log(N))+O(N) => O(2N+log(N)) => O(N+log(N))
    --------------------------------------------------
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
    --------------------------------------------------
    */
    // Using O(N) operations
    ll n; cin>>n;
    ll arr[n]; ll sum = 0;
     for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    ll min = arr[0]; ll max = arr[0];
    for(ll i=0;i<n;i++){
        sum+=arr[i];
    }
    for(ll i=1;i<n;i++){
        if(min > arr[i]){
            min = arr[i];
        }
        if(max < arr[i]){
            max = arr[i];
        }
    }
    cout << min << " " << max << " " << sum << endl;
    return 0;
}