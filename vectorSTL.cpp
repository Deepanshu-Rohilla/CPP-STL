#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// condition for sorting
bool f(int x , int y){
    return x>y;
}

int main(){
    vector<int> A = {11,2,3,14};
    cout<<"2nd element is "<<A[1]<<"\n";
    sort(A.begin(), A.end());  // O(NlogN)
    // A = {2,3,11,14}
    bool isPresent = binary_search(A.begin(), A.end(), 3);  // O(logN) True
    cout<<"3 is "<<(isPresent ? "present" : "absent")<<"\n";
    A.push_back(100);
    isPresent = binary_search(A.begin(), A.end(), 100); // O(logN) True
    cout<<"100 is "<<(isPresent ? "present" : "absent")<<"\n";
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(123);
    // A = {2,3,11,14,100,100,100,100,123}
    auto it1 = lower_bound(A.begin(), A.end(),100);// >=100 O(logN)
    auto it2 = upper_bound(A.begin(), A.end(),100);// >100  O(logN)

    cout<<"it1 has "<<*it1<<"\n";
    cout<<"it2 has "<<*it2<<"\n";
    cout<<"it2-it1 is "<<it2 - it1<<"\n"; //4

    // to sort in descending order
    sort(A.begin(), A.end(), f); // f is defined above.
    for(int x : A){
        x++;
        cout<<x<<" ";
    }
    cout<<"\n";
    // Output: 124 101 101 101 101 15 12 4 3
    for(int x : A){
        cout<<x<<" ";
    }
    cout<<"\n";
    // Output: 123 100 100 100 100 14 11 3 2 
    // This is because we did not paas x by reference
    for(int &x : A){
        x++;
        cout<<x<<" ";
    }
    cout<<"\n";
    // Output: 124 101 101 101 101 15 12 4 3
    for(int x : A){
        cout<<x<<" ";
    }
    cout<<"\n";
    // Output: 124 101 101 101 101 15 12 4 3
}