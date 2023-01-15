#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> array(3,0);

    //입력
    cin >> array[0] >> array[1] >> array[2];

    //정렬
    sort(array.begin(), array.end());
    
    //출력
    cout << array[1];
}