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
1. Finding the sum of all the three numbers [sum = A+B+C]
2. Finding the smallest number in all of the three numbers [Smallest = min({a,b,c})]
3. Finding the largest number in all of the three numbers  [Largest = max({a,b,c})]
4. Now we have all the numbers except the middle so for finding the middle number => Middle_Element = abs[sum-largest-smallest].
5. Print all the three numbers in an asec order [Smallest, Middle, Largest]
*/

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
