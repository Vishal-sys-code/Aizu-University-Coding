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
h = 3 & w = 4
-----------------
4 -> row = weight [w]
3 -> column = height [h]
-----------------
####
####
####
*/

int main(){
    FAST_IO();
    int w,h;
    int row = w;
    int column = h;
    while(cin>>row>>column){
        if(w==0 && h==0) break;
        else{
            for(int i=0;i<=column;i++){
                for(int j=0;j<row;j++){
                    cout << "#";
                }
                cout << endl;
            }
        }
    }
    return 0;
}