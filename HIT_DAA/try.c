// quick sort
// n log(n)

// #include<stdio.h>
// int partition(int ,int);
// void q_sort(int,int);
// int arr[10],n=0;
// int main(){
//     scanf("%d",&n);
//     for( int i = 0; i < n; i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("Before sort : ");
//     for( int i = 0; i < n; i++){
//         printf("%d ",arr[i]);
//     }
//     q_sort(0,n-1);
//     printf("\nAfter sort : ");
//     for( int i = 0; i < n; i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }
// int partition(int s,int e){
//     int pivot = arr[e];
//     int i = s-1;
//     for(int j=s;j<e;j++){
//         if(arr[j]<pivot){
//             i++;
//             int t = arr[i];
//             arr[i] = arr[j];
//             arr[j] = t;
//         }
//     }
//     i++;
//     int t = arr[i];
//     arr[i] = arr[e];
//     arr[e] = t;   
//     return i;
// }
// void q_sort(int l,int u){
//     if(l<u){
//         int p = partition(l,u);
//         q_sort(l,p-1);
//         q_sort(p+1,u);
//     }
// }

// ---------------------------------------------------------------------------
// Merge sort
// n log(n)
// #include<stdio.h>
// void merge(int ,int ,int );
// void m_sort(int,int);
// int arr[10],n=0;
// int main(){
//     scanf("%d",&n);
//     for( int i = 0; i < n; i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("Before sort : ");
//     for( int i = 0; i < n; i++){
//         printf("%d ",arr[i]);
//     }
//     m_sort(0,n-1);
//     printf("\nAfter sort : ");
//     for( int i = 0; i < n; i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }
// void merge(int s,int mid,int e){
//     int n1 = 10;
//     n1 = mid-s+1;
//     int n2 = 10;
//     n2 = e - mid;
//     int arr1[n1],arr2[n2];
//     for(int i = 0;i<n1;i++) arr1[i] = arr[s+i];
//     for(int i = 0;i<n2;i++) arr2[i] = arr[mid+1+i];
//     int i = 0,j = 0, k = s;
//     while(i<n1 && j<n2){
//         if(arr1[i] < arr2[j]) arr[k++] = arr1[i++];
//         else arr[k++] = arr2[j++];
//     }
//     while(i<n1) arr[k++] = arr1[i++];
//     while(j<n2) arr[k++] = arr2[j++];
// }
// void m_sort(int s, int e){
//     if(s<e){
//         int mid = (s+e)/2;
//         m_sort(s,mid);
//         m_sort(mid+1,e);
//         merge(s,mid,e);
//     }
// }

// ---------------------------------------------------------------------

