#include<iostream>
using namespace std;
#define f(i,a,b) for(i = a;i<=n;i++)
template<typename T>
class Element{
    public:
    T cost,wt,rto;
};
void sort(Element<float> arr[],int n){
    int i, j;
    f(i,1,n-1){
        f(j,1,n-i-1){
            if(arr[j].rto < arr[j+1].rto){
                Element<float> t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
}
int main(){
    int n,i;
    Element<float> s[10];
    cout<<"Enter no of items : ";
    cin>>n;
    f(i,1,n){
        cout<<"Enter cost of ("<<i<<") : ";
        cin>>s[i].cost;
        cout<<"Enter Weight of ("<<i<<") : ";
        cin>>s[i].wt;
        s[i].rto = s[i].cost / s[i].wt;
    }
    sort(s,n);
    // knapshack algorithm
    float maxSpace , ans = 0;
    i = 1;
    cout<<"Enter max capacity : ";
    cin>>maxSpace;
    while(maxSpace > 0){
        if(maxSpace >= s[i].wt) {
            maxSpace -= s[i].wt;
            ans += s[i].cost;
            i++;
        }
        else{
            float t = maxSpace/s[i].wt;
            ans += s[i].cost * t;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}



// input : 7 10 2 5 3 15 5 7 7 6 1 18 4 3 1 15