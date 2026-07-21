#include <bits/stdc++.h>
using namespace std;

vector<int> remove_dup(vector<int> nums, int n)
{
    vector<int> ret;

    for (int i = 0; i < n; i++)
    {
        if (i == 0 || nums[i] != nums[i-1])
        {
            ret.push_back(nums[i]);
        }
    }

    return ret;
}

int main()
{
    int n;
    cout << "Enter the number of elements\n";
    cin >> n;

    vector<int> nums;

    for (int i = 0; i < n; i++)
    {
        int element;
        cout << "Enter the " << i + 1 << " element : ";
        cin >> element;
        nums.push_back(element);
    }

    vector<int> result = remove_dup(nums, n);

    cout << "Removed duplicate elements of array: ";

    for (int x : result)
    {
        cout << x << " ";
    }

    return 0;
}