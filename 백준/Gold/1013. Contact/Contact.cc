#include <iostream>
#include <regex>
#include<string>


using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T;
    regex r("(100+1+|01)+");
    cin >> T;
    while(T--){
        string spread;
        cin >> spread;

        if(regex_match(spread,r))
            cout << "YES\n";
        else
            cout << "NO\n";

    }

    return 0;
}