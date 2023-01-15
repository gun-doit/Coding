//Silver IV
#include <bits/stdc++.h>
using namespace std;

int N;
queue<int> buffer;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> N;
    int k = 0;
    while(k != -1){
        cin >> k;
        if(buffer.size() == N) continue;
        if(k > 0){
            buffer.push(k);
        }
        if(k == 0){
            buffer.pop();
        }
    }


    if(buffer.empty()) cout << "empty" << "\n";
    else{
        while(!buffer.empty()){
            cout << buffer.front() << " ";
            buffer.pop();
        }
    }
    return 0;
}