#include<iostream>
#include "ds_stack.cpp"
using namespace std;
int main(){
    stack v;
    v.push(5);
    cout<<v.is_empty()<<"  "<<v.peak();
    return 0;
}