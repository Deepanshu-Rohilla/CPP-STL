#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;
int main(){
    map<char, int> M;
    unordered_map<char,int> U;
    string s = "Deepanshu Rohilla";
    for(char c: s)M[c]++; // O(NlogN)
    for(char c: s)U[c]++; // O(logN)
}