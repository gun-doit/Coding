#include<stdio.h>
#include<stdlib.h>

int main(void){
    int T, K;
    long long left = 1;
    long long right = 0;
    long long mid = 0;
    int sum =0;
    scanf("%d %d", &T, &K);
    
    int *cable = (int*)malloc(sizeof(int)*T);
    
    for(int i = 0; i<T; i++){
        scanf("%d", &cable[i]);
        right = right < cable[i] ? cable[i] : right;
    }
    int ans = 0;

    while(left <= right){
        sum = 0;
        mid = (left + right) / 2;
        

        for (int i = 0; i < T; i++)
        {
            sum += cable[i] / mid;
        }
        if(sum >= K ){
            left = mid + 1;
            ans = ans < mid ? mid : ans;
        } 
        else right = mid - 1;
    }
    printf("%d", ans);

}