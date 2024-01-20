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
    int h,w;
    while(true){
        cin>>h>>w;
        if(w==0 && h==0) {break;}
        else{
            for(int i=0;i<=h-1;++i){
                for(int j=0;j<w;++j){
                    cout << "#";
                }
                cout << endl;
            }
        }
        cout << endl;
    }
    return 0;
}