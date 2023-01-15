#include<iostream>

using namespace std;

int main(){
    int N;
    
    //입력
    cin >> N;

    //출력
    for(int i = 0; i<N; i++){
        for(int j = 0; j<i; j++){
            cout << " ";
        }
        for(int j = N-i; j>0; j--){
            cout << "*";
        }cout << endl;
    }
}