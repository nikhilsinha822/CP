
#include <bits/stdc++.h>
using namespace std;

int sumFind(int A[], int N, int query)
{
    int i = 0, j = N - 1;

    while (i < j)
    {
        if (A[i] + A[j] == query)
            return 1;
        else if (A[i] + A[j] < query)
            i++;
        else
            j--;
    }
    return 0;
}

int main()
{
    // array declaration
    int arr[] = {2, 3, 5, 8, 9, 10, 11};

    // value to search
    int val = 17;

    // size of the array
    int arrSize = *(&arr + 1) - arr;

    // array should be sorted before using two-pointer technique
    sort(arr, arr + 7);

    // Function call
    cout << (bool)isPairSum(arr, arrSize, val);

    return 0;
}