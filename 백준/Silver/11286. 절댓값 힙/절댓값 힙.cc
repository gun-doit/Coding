//Silvier II
#include <bits/stdc++.h>
using namespace std;

int N;
struct compare{
    bool operator()(auto q, auto q1){
        if(abs(q) == abs(q1)){
            return q > q1;
        }
        else return abs(q) > abs(q1);
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> N;
    int x;
    priority_queue<int,vector<int>, compare> q;

    for(int i = 0; i<N; i++){
        cin >> x;
        if(x == 0){
            if(q.empty()) cout << 0 << "\n";
            else{
                cout << q.top() << "\n";
                q.pop();
            }
        }
        else{
            q.push(x);
        }
    }
    return 0;
}