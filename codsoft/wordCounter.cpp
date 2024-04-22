// #include <iostream>
// using namespace std;
// void print_L() {
//     cout << "*     " << endl;
//     cout << "*     " << endl;
//     cout << "*     " << endl;
//     cout << "*     " << endl;
//     cout << "******" << endl;
// }
// void print_O() {
//     cout << " **** " << endl;
//     cout << "*    *" << endl;
//     cout << "*    *" << endl;
//     cout << "*    *" << endl;
//     cout << " **** " << endl;
// }
// void print_V() {
//     cout << "*     *" << endl;
//     cout << " *   * " << endl;
//     cout << "  * *  " << endl;
//     cout << "   *   " << endl;
// }
// void print_E() {
//     cout << "******" << endl;
//     cout << "*     " << endl;
//     cout << "***** " << endl;
//     cout << "*     " << endl;
//     cout << "******" << endl;
// }
// int main() {
//     print_L();
//     cout << endl;
//     print_O();
//     cout << endl;
//     print_V();
//     cout << endl;
//     print_E();
//     return 0;
// }
#include <iostream>
#include <vector>
using namespace std;

int maxSubArraySum(vector<int>& nums) {
    int max_sum = INT_MIN;
    int current_sum = 0;
    for (int num : nums) {
        current_sum = max(num, current_sum + num);
        max_sum = max(max_sum, current_sum);
    }
    return max_sum;
}

int main() {
    vector<int> nums = {1, 2, 3, -2, 5};
    cout << maxSubArraySum(nums) << endl;
    return 0;
}
