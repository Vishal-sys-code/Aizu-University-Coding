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

int calculate(int a, int b, char op){
    switch (op) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            return a / b;
        default:
            return -1;
    }
}

int main() {
    FAST_IO();
    int a,b; char op;
    while(true){
        cin >> a >> op >> b;
        if (op == '?') {
            break;
        }
        int result = calculate(a, b, op);
        cout << result << endl;
    }
    return 0;
}