#include<iostream>
#include<vector>
#include<limits.h>
#include<math.h>
#include<string.h>
#define x 0
#define y 1

using namespace std;

int P[21][2] = {0,};
int sumxy[2];
int count = 0;
double minvalue = __DBL_MAX__;

void dfs(int P[21][2], int sum[2], int point, int n, int size){
    if(point >= size) return;    
    if(n == 0){
        double value = sqrt(pow((double)sum[x],2) + pow((double)sum[y],2));
        if(minvalue - value > 0.0) minvalue = value;
        return;
    }
   
    if(n > 0 && point < size){
        sum[x] -= 2*P[point][x];
        sum[y] -= 2*P[point][y];
        dfs(P,sum,point+1,n-1,size);
        sum[x] += 2*P[point][x];
        sum[y] += 2*P[point][y];
    }
    dfs(P,sum,point+1,n,size);
}

int main(){
    int TestCase, PointC = 0;    

    //입력
    cin >> TestCase;
    for(int i = 0; i<TestCase; i++){
        cin >> PointC;

        //변수 초기화
        minvalue = __DBL_MAX__;
        memset(sumxy,0.0,sizeof(sumxy));
        memset(P, 0.0,sizeof(P));

        for(int j = 0; j<PointC; j++){
            cin >> P[j][x] >> P[j][1];
            sumxy[x] += P[j][x];
            sumxy[y] += P[j][y];
        }
        count = 0;
        dfs(P,sumxy,0,PointC/2,PointC);
        printf("%.6lf\n", minvalue); 
    }
    


    //출력
}

