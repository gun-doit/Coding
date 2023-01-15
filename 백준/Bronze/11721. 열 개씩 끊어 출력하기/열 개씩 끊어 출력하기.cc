#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char str[101];
    
    cin >> str;
    for(int i = 0; i < strlen(str); i++){
        if(i % 10 == 0 && i > 0) printf("\n");
        cout << str[i];
    }
}