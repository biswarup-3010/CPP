#include<iostream>
#include<vector>
using namespace std;
vector<int> arr;
int mini=INT_MAX, maxi = INT_MIN;
void MaxMin(int i,int j,int &maxv,int &minv){
    if(i==j){
        maxv=minv=arr[i];
    }
    else if(i==j-1){
        if(arr[i]>arr[j]){
            maxv=arr[i];
            minv=arr[j];
        }
        else{
            maxv=arr[j];
            minv=arr[i];
        }
    }
    else{
        int mid = (i+j)/2;
        MaxMin(i,mid,maxv,minv);
        int max1=INT_MIN,min1=INT_MAX;
        MaxMin(mid+1,j,max1,min1);
        if(max1 > maxv) maxv=max1;
        if(min1<minv) minv=min1;
    }
}
int main(){
    int n;
    cout<<"Enter no of elements : ";
    cin>>n;
    cout<<"Enter the values : ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    MaxMin(0,n-1,maxi,mini);
    cout<<"Maximum : "<<maxi<<endl<<"Minimum : "<<mini;
    return 0;
}