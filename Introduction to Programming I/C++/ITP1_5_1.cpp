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

/*
procedure PrintRectangle(height, width):
    for i from 0 to height - 1:
        // Loop through each row of the rectangle
        for j from 0 to width - 1:
            // Loop through each column of the rectangle
            print '#'
        end for
        print newline
    end for
    print newline
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