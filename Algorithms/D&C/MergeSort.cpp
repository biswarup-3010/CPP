#include<iostream>
#include<vector>
using namespace std;

vector<int> ans;

void Merge(int s, int mid, int e) {
    int n1 = mid - s + 1;
    int n2 = e - mid;
    
    vector<int> temp;

    int i = s, j = mid + 1;

    while (i <= mid && j <= e) {
        if (ans[i] < ans[j]) {
            temp.push_back(ans[i++]);
        } else {
            temp.push_back(ans[j++]);
        }
    }

    while (i <= mid) {
        temp.push_back(ans[i++]);
    }
    while (j <= e) {
        temp.push_back(ans[j++]);
    }

    for (int k = s; k <= e; k++) {
        ans[k] = temp[k - s];
    }
}

void  MergeSort(int l, int u) {
    if (l < u) {
        int mid = (l + u) / 2;
        MergeSort(l, mid);
        MergeSort(mid + 1, u);
        Merge(l, mid, u);
    }
}

int main() {
    int n;
    cout << "Enter no of elements : ";
    cin >> n;

    cout << "Enter the elements : ";
    for (int i = 0; i < n; i++) {
        int c;
        cin >> c;
        ans.push_back(c);
    }

    MergeSort(0, n - 1);

    cout << "Sorted array: ";
    for (int i : ans) {
        cout << i << ", ";
    }
    cout << endl;

    return 0;
}
