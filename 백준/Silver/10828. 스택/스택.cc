#include<iostream>
#include<stack>

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);

    int N = 0;
    string cmd;
    int value = 0;
    stack<int> block;

    cin >> N;

    for(int i = 0; i<N; i++){
        cin >> cmd;
        if(cmd == "push"){
            cin >> value;
            block.push(value);
        }
        else if(cmd == "pop" && !block.empty()){
            printf("%d\n", block.top());
            block.pop();
        }
        else if(cmd == "size") printf("%d\n", block.size());
        else if(cmd == "empty") printf("%d\n", block.empty());
        else if(cmd == "top" && !block.empty()) printf("%d\n", block.top());
        else printf("-1\n");
    }

    return 0;
}
