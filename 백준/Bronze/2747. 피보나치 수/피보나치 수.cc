#include<iostream>
#include<string.h>
int memo[46];

int fibo(int N){
    if(memo[N] != -1) return memo[N];
    memo[N] = fibo(N-1) + fibo(N-2);
	return memo[N];
}

int main(){
    int N;
    memset(memo,-1,sizeof(memo));
    memo[0] = 0;
    memo[1] = 1;
    memo[2] = 1;
    
    std::cin >> N;
	fibo(N);
    std::cout << memo[N] << "\n";
}