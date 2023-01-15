#include<iostream>
using namespace std;

int main(){
    int n;
    int array[201] = {0,};
    int p;
    
    cin >> n;
    if(n == 0) return 0;
    for(int i = 0; i<n; i++){
        cin >> p;
        array[p+100]++;
    }
    cin >> p;
    cout << array[p+100];
}