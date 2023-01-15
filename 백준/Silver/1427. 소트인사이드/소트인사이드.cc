//Silver
#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    string num;
    cin >> num;
    sort(num.begin(), num.end(), greater<int>());
    cout << (num);
    return 0;
}