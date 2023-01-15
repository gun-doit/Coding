#include<iostream>
#include<string>

using namespace std;

void print_star(int n){
    for(int i = 0; i<n; i++){
        cout << "*";
    }
    cout << "\n";
}
int main(){
    int star;
    cin >> star;
    
    int c = 1;
    
    for(int i = 1; i<=star; i++){
        print_star(i);
    }
    
    for(int j = star-1; j>0; j--){
        print_star(j);
    }
    
}