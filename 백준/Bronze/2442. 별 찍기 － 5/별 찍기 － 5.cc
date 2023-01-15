#include<iostream>

using namespace std;

int main(){
    int N;
    
    int i, j = 0;
    int star = 1;
    cin >> N;
    
    for(i = 0; i < N; i++){
        for(j = N-1-i; j>0; j--){
            cout << " ";
        }
        for(int k = 0; k<star; k++){
            cout <<"*";
        }
        star+=2;
        cout << endl;
    }
}
