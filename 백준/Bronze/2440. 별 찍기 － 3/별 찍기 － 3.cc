#include<iostream>

using namespace std;

int main(){
    int N;

    //입력
    cin >> N;

    //출력
    for(int i = N; i>0; i--){
        for(int j = i; j>0; j--){
            cout << "*";
        }cout << endl;
    }
}