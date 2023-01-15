#include<iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    int star = 2*N-1;
    
    int i, j =0;
    for(i = 0; i<N; i++){
        for(int k = 0; k<i; k++){
            printf(" ");
        }
        for(j = star; j>0; j--){
            printf("*");
        }
        star-=2;
        printf("\n");
    }
}