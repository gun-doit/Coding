//Silver III
#include <bits/stdc++.h>
using namespace std;

pair<int,int> jo,baek;
int T;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> T;
    int r1, r2;
    for(int i = 0; i<T; i++){
        cin >> jo.first >> jo.second >> r1 >> baek.first >> baek.second >> r2;

        double d = sqrt(pow(baek.first-jo.first,2) + pow(baek.second-jo.second,2));

        if(d == 0 && r1 == r2) cout << -1 << "\n";
        else if(d > r1 + r2 || d < abs(r1-r2)) cout << 0 << "\n";
        else if(d == r1 + r2 || d == abs(r1-r2)) cout << 1 << "\n";
        else if(d < r1 + r2) cout << 2 <<"\n";
    }
    return 0;
}

