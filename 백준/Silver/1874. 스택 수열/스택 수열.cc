//Silver II
#include <iostream>
#include<stack>
#include<vector>
#include<queue>
using namespace std;
stack<int> s;
int N;
int p = 0;
queue<int> v;
vector<char> ans;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> N;
    int k;


    for(int i = 0; i < N; i++){
        cin >> k;
        v.push(k);
    }
    for(int i =1; i<=N; i++){
        s.push(i);
        ans.push_back('+');

        while(!s.empty() && !v.empty() && v.front() == s.top()){
            v.pop();
            s.pop();
            ans.push_back('-');
            p++;
        }
    }

    if(s.empty()){
        for(int i = 0; i < ans.size(); i++){
            printf("%c\n",ans[i]);
        }
    }
    else{
        printf("NO");
    }

    return 0;
}