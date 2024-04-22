#include<iostream>
#include<vector>
using namespace std;
vector<int> arr;
void QuickSort(int start, int end){
    if(start < end){
        int p = Partition(start, end+1);
        QuickSort(start,p-1);
        QuickSort(p+1,end);
    }
}
int main(){
    int n;
    cout<<"Enter no of elements : ";
    cin>>n;
    cout<<"Enter the elements : "<<endl;
    for(int i=0;i<n;i++){
        int c;
        cin>>c;
        arr.push_back(c);
    }
    QuickSort(0,n-1);
    return 0;
}