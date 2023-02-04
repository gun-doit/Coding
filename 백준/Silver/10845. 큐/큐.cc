#include<iostream>
#include<queue>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N = 0;
    queue<int> q;
    int value = 0;
    string cmd;
    cin >> N;

    for(int i = 0; i<N; i++){
        cin >> cmd;
        if(cmd == "push") {
            cin >> value;
            q.push(value);
        }
        else if(cmd == "pop" && !q.empty()){
            cout << q.front() << endl;
            q.pop();
        }
        else if(cmd == "size") cout << q.size() << endl;
        else if(cmd == "empty") cout << q.empty() << endl;
        else if(cmd == "front" && !q.empty()) cout << q.front() << endl;
        else if(cmd == "back" && !q.empty()) cout << q.back() << endl;
        else cout << -1 << endl;
    }

    return 0;
}