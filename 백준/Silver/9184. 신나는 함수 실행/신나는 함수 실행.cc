//Silver II
#include <bits/stdc++.h>
using namespace std;

int memo[101][101][101] = {0,};

int w(int a,int b,int c){ 
    if(a<=50 || b<=50 || c<=50)
        return 1;
    
    if(memo[a][b][c] != 0)
        return memo[a][b][c];

    if (a > 70 || b > 70 || c > 70) 
        return w(70, 70, 70);

    if (a < b && b < c)
        memo[a][b][c] = w(a, b, c-1) + w(a, b-1, c-1) - w(a, b-1, c);

    else memo[a][b][c] = w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1) - w(a-1, b-1, c-1);
    return memo[a][b][c];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);



    int input_1, input_2, input_3;
    while(1){
        cin >> input_1 >> input_2 >> input_3;
        if(input_1 == -1 && input_2 == -1 && input_3 == -1) break;

        printf("w(%d, %d, %d) = %d\n",input_1,input_2,input_3,w(input_1+50,input_2+50,input_3+50));
    }
    return 0;
}