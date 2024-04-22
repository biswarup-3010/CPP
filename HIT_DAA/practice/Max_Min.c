// #include<stdio.h>
// #define f(i,a,b) for(int i =a;i<b;i++)
// int arr[10],n;
// void MaxMin(int max, int min){
//     f(i,0,n){
//         if(max < arr[i]) {
//             max = arr[i];
//         }
//         if(min >= arr[i]){
//             min = arr[i];
//         }
//     }
// }
// int main(){
//     printf("Enter no of elements : ");
//     scanf("%d",&n);
//     printf("Enter the elements : ");
//     f(i,0,n) scanf("%d",&arr[i]);
//     int max, min;
//     MaxMin(max,min);
//     printf("Max = %d \n Min = %d\n",max,min);
//     return 0;
// }

// // 11 1 2 3 4 5 100 7 8 9 10 0

#include<stdio.h>
int main(){
    int x,y=224;
    scanf("%d",&x);
    printf("%d & %d = %d\n",x,y,(x&y));
    return 0;
}