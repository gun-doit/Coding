#include<iostream>

using namespace std;

int findNum(int *N){
    int num = *N;
    int sum = 0;
    while(num > 0){
        sum += num % 10;
        num /= 10;
    }
    
    if((*N)%sum == 0) return 1;
    else return 0;
}

int main(){
    int N;

    //INPUT
    cin >> N;
    
    while(N){
        if(findNum(&N)) break;
        N++;
    }

    //OUTPUT
    cout << N << "\n";
}