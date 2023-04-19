#include <iostream>
#include <algorithm>
using namespace std;

int line[3] = {0,};

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);


   while(true){
      cin >> line[0] >> line[1] >> line[2];
      if(line[0] == 0 && line[1] == 0 && line[2] == 0) break;
      sort(line, line+3);


      if(line[2] >= line[0] + line[1]) cout << "Invalid" << endl;
      else if (line[0] == line[1] && line[0] == line[2]) cout << "Equilateral" << endl;
      else if (line[0] != line[1] && line[1] != line[2] && line[0] != line[2]) cout << "Scalene" << endl;
      else cout << "Isosceles" << endl;

   }


   return 0;
}