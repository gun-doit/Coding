//Bronze I
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    int N, B;
    int x = 0;
    cin >> N >> B;


    while(true){
        if(pow(B,x) > N){
            break;
        }
        x++;
    }

    char* xArr = new char[x+1];
    int i = x -1;

    while(true){
        int m = N / B;
        
        if(N%B < 10){
            xArr[i--] = (char(N%B+48));
        }
        else{
            xArr[i--] = (char(N%B+55));
        }

        if(m == 0)
            break;
        N = m;
    }

    cout << xArr << endl;
}