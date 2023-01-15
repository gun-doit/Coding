//Bronze III
#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int line[3];
    while(true){
        cin >> line[0] >> line[1] >> line[2];
        if(line[0] == 0 && line[1] == 0 && line[2] == 0) break;
        sort(line,line+3);
        if(line[0]*line[0] + line[1]*line[1] == line[2]*line[2]) cout << "right" << "\n";
        else cout << "wrong" << "\n";
    }    

    return 0;
}
