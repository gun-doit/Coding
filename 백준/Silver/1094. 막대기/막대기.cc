#include<iostream>
#include<bitset>

using namespace std;
int x;

int main(){

    cin >> x;

    cout << bitset<8>(x).count();
}