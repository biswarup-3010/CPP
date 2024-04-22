#include <bits/stdc++.h>
#include<set>
using namespace std;
int main()
{
    int arr[] = { 14, 12, 15, 11, 10 };
    set<int> s(arr, arr + 5);
    set<int>::iterator rit;
    for (rit = s.begin(); rit != s.end(); rit++)
        cout << *rit << " ";
    
    return 0;
}