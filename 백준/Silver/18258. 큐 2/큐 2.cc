//Silver IV

#include <bits/stdc++.h>
#include <queue>
#include <string>
using namespace std;

int empty(queue<int> q){
    if(q.empty()) return -1;
    return 1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    queue<int> q;
    int T;

    cin >> T;
    for(int i = 0; i < T; i++){
        string cmd;
        cin >> cmd;
        int value;
        
        if(cmd == "push"){
            cin >> value;
            q.push(value);
        }
        else if(cmd == "pop"){
            if(q.empty()) cout << -1 << '\n';
            else{
                cout << q.front() << '\n';
                q.pop();
            }
        }
        else if(cmd == "size"){
            cout << q.size() << '\n';
        }
        else if(cmd == "empty"){
            cout << q.empty() << '\n';
        }
        else if(cmd == "front"){
            if(q.empty()) cout << -1 << '\n';
            else cout << q.front() << '\n';
        }
        else{
            if(q.empty()) cout << -1 << '\n';
            else cout << q.back() << '\n';
        }
    }

    return 0;
}