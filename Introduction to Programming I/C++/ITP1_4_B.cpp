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
    double r; cin>>r;
    double area, circumference;
    area = PI*r*r;
    circumference = 2*PI*r;
    cout << fixed << setprecision(6) << area << " " << fixed << setprecision(6) << circumference << endl;
    return 0;
}