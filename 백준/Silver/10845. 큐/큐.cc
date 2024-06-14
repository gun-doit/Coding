#include <iostream>
#include <memory.h>
#include<string>
#include<queue>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    

    int N;
    cin >> N; 
    queue<int> q;


    while(N--){
        string cmd;
        int x;
        cin >> cmd;

        if(cmd == "push"){
            cin >> x;
            q.push(x);
        }else if(cmd == "pop"){
            if(q.empty()) cout << -1 <<"\n";
            else {
                cout << q.front() << "\n";
                q.pop();
            }
        }else if(cmd == "size"){
            cout << q.size() << "\n";
        }else if(cmd == "empty"){
            cout << (q.empty() ? 1 : 0) << "\n";
        }else if(cmd == "front"){
            if(q.empty()) cout << -1 <<"\n";
            else cout << q.front() << "\n";
        }else{
            if(q.empty()) cout << -1 <<"\n";
            else cout << q.back() << "\n";
        }

    }
}