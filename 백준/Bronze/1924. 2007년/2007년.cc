#include<iostream>

using namespace std;

int main(){
    int x, y;
    int month[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    char day[7][4] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};

    //입력
    cin >> x >> y;


    //OUTPUT
    if(x == 1 && y == 1){ printf("%s\n",day[0]); return 0; }

    else{
        int count = 0;
        int m = 1;
        while(m < x){
            count += month[m++];
        }
        count += y-1;

        printf("%s\n", day[count % 7]);
    }

}