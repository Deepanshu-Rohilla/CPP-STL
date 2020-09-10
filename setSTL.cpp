#include<iostream>
#include<algorithm>
#include <set>

using namespace std;

int main(){
    set<int> S;
    S.insert(1); // O(logN)
    S.insert(2);
    S.insert(-1);
    S.insert(-10);
    for(int x:S){
        cout<<x<<" ";
    }
    cout<<"\n";
    // OUTPUT: -10 -1 1 2
    auto it = S.find(-1);
    if(it==S.end()){
        cout<<"not present"<<"\n";
    }
    else{
        cout<<"present and the value is "<<*it<<"\n";
    }
    auto it2 = S.lower_bound(-1); // -1
    cout<<"it2 has "<<*it2<<"\n";
    auto it3 = S.upper_bound(-1);  // 1
    cout<<"it3 has "<<*it3<<"\n";
    auto it4 = S.upper_bound(2); // returns S.end()

}