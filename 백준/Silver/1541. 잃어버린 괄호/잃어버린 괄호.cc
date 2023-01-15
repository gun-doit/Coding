//Silver II
#include <bits/stdc++.h>
using namespace std;

int chartoint(char *s){
    return atoi(s);
}

char form[51];
char number[6];
int sum = 0;
void reset(){
    number[0] = '\0';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    cin >> form;
    bool sub = false;
    for(int i = 0; i<=strlen(form); i++){
        if(form[i] == '-' || form[i] == '+' || i == strlen(form)){
            if(sub) sum-=atoi(number);
            else sum += atoi(number);
            reset();
        }
        if(form[i] == '-'){
            sub = true;
        }
        else{
            strncat(number,form+i, 1);
        }
    }

    cout << sum << "\n";
    return 0;
}