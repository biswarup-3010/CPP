#include<iostream>
using namespace std;
template<typename T>
class spiral_print_matrix{

    public :
        int row_n;
        int column_n;

    private:
        int row_start;
        int row_end;
        int col_start;
        int col_end;
        T arr[10][10];
    public:
        void take_input(){
            //taking input logic
            for(int i=0;i<row_n;i++)
                for(int j=0;j<column_n;j++)
                    cin>>arr[i][j];
        }
        void spiral_print(){
            //spiral order print logic
            row_start=0;row_end=row_n-1;col_start=0;col_end=column_n-1;
            while(row_start<=row_end && col_start<=col_end){
                for(int col=col_start;col<=col_end;col++)
                    cout<<arr[row_start][col]<<" ";
                row_start++;
                for(int row=row_start;row<=row_end;row++)
                    cout<<arr[row][col_end]<<" ";
                col_end--;
                for(int col=col_end;col>=col_start;col--)
                    cout<<arr[row_end][col]<<" ";
                row_end--;
                for(int row=row_end;row>=row_start;row--)
                    cout<<arr[row][col_start]<<" ";
                col_start++;
            }
        }
};
int main(){
    spiral_print_matrix<int> a;
    //taking the values of rows and columns
    cin>>a.row_n>>a.column_n;
    a.take_input();
    a.spiral_print();
    return 0;
}