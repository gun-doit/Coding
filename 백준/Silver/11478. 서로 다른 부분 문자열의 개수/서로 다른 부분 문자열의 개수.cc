//Silver III
#include <bits/stdc++.h>
using namespace std;

bool check[26] = {false,};
map<string, bool> ans;
string buffer = "";
string S;

void solution(int n, int len){
    string buffer;
    for(int i = 0; i<len-n+1; i++){
        buffer.append(S,i,n);
        ans.insert(make_pair(buffer,true));
        buffer.clear();
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> S;
    for(int i = 0; i< S.length(); i++){
        solution(i,S.length());
    }
    cout << ans.size();

    return 0;
}