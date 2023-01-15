#include<iostream>

using namespace std;

int main(){
    int number;
    int ans = 0;

    //입력
    for(int i = 0; i<5; i++){
        cin >> number;
        ans += number * number;
    }    


    //출력
    cout << ans%10;
}