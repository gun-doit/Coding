// N명이 토너먼트를 진행한다
// 홀수라면 마지막 참가자가 부전승
// 임한수와 김지민은 항상 우승하며 언제 만나는지?
// 입력 참가자수. 김지민. 임한수

#include<iostream>
#include<cmath>


using namespace std;

int N;
double Jimin, Hansu;
int ans = 0;

void sol(){
    while(Hansu != Jimin){
        Jimin = ceil(Jimin/2);
        Hansu = ceil(Hansu/2);
        ans++;
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> N >> Jimin >> Hansu;
    sol();
    cout << ans;
    return 0;
}