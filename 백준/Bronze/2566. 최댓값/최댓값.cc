#include<iostream>

using namespace std;

int main(){
    int max = 0, n =0;
    int x = 0, y = 0;

    //INPUT
    for(int i = 1; i<=9; i++){
        for(int j = 1; j<=9; j++){
            cin >> n;
            if(max <= n){
                max = n;
                x = i;
                y = j;
            }
        }
    }

    //OUTPUT
    cout << max << "\n" << x << " " << y << "\n";
}