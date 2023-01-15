#include<bits/stdc++.h>
#include<queue>
using namespace std;

int main(){
    priority_queue<int, vector<int>, greater<int>> q;
    int sum = 0, n = 0;
    for(int i = 0; i<5; i++){
        cin >> n;
        sum += n;
        q.push(n);
    }
    q.pop();
    q.pop();
    cout << sum/5 << "\n" << q.top() << "\n";
}