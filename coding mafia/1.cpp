#include<iostream>
#include <set>
using namespace std;

int main(){
    multiset<int> ms;
    ms.insert(1);
    ms.insert(2);
    ms.insert(1);
    ms.insert(2);
    ms.insert(1);
    ms.insert(2);
    ms.insert(1);
    ms.insert(2);
    ms.insert(1);
    ms.insert(2);
    ms.insert(1);
    ms.insert(2);
    ms.erase(2);
    for(auto i : ms){
        cout<<i << " ";
    }
    return 0;
}