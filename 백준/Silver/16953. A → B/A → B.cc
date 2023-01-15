#include<iostream>

using namespace std;
int ans = -1;

int solution(long long A, long long B, int c){
    if(A>B)return 0;
    if(A==B){
        ans = c;
        return 0;
    }

    solution(2*A,B, c+1);
    solution(10*A+1,B, c+1);
    return 0;
}
int main(){
    long long A, B;

    //INPUT
    cin >> A >> B;
    solution(A,B,0);

    if(ans != -1) cout << ans+1;
    else cout << ans;
    
}