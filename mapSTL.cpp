#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main(){
    map<int, int> a;
    a[1] = 100;
    a[2] = -1;
    a[3] = 200;
    a[69] = 1;
    map<char, int> cnt;
   string x = "Deepanshu Rohilla";
   for(char c:x){
       cnt[c]++;
   }
   cout<<"Count of A is "<<cnt['a']<<"\n";

}