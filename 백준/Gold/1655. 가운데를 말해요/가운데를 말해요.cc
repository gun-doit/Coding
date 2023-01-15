//Gold II
#include <bits/stdc++.h>
using namespace std;

int N;
priority_queue<int,vector<int>, less<int>> q;
priority_queue<int,vector<int>, greater<int>> q1;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> N;
    int x;

    if(N == 1){
        cin >> x;
        cout << x;
        return 0;
    }

    for(int i = 1; i<=N; i++){
        cin >> x;

        if(i % 2 != 0){
            q.push(x);
        }
        else{
            q1.push(x);
        }
        if(!q.empty() && !q1.empty() && q.top() > q1.top()){
            auto a = q.top(); q.pop();
            auto b = q1.top(); q1.pop();
            q.push(b);
            q1.push(a);
        }

        cout << q.top() << "\n";

    }
    return 0;
}

