// [1,2,3,0,0,0]
// [2,4,5]

//[]
//[1]

//[2]
//[]

#include <iostream>
#include <bits/stdc++.h>
#include <math.h>

using namespace std;

class Solution
{
public:
    vector<int> merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {

        // base case for 0 and 1 elements
        if (nums1.size() <= 1 || nums2.size() == 0)
        {

            if (n == 0)
            {
                nums1 = nums1;
            }
            else
            {
                nums1[m + n - 1] = nums2[0];
            }
        }
        // case for in place operation
        else
        {

            while (m < nums1.size())
            {
                if (nums1[m - 1] > nums2[n - 1])
                {
                    // insertion for last inserted element comparing with last element
                    nums1[m] = nums1[m - 1];
                    nums1[m - 1] = nums2[n - 1];

                    // swap operation on nums1 till inserted elements
                    int i = m;
                    while (i)
                    {
                        if (nums1[i] > nums1[i - 1])
                        {
                            // sorted in ascending order
                        }
                        else
                        {
                            int temp = nums1[i - 1];
                            nums1[i - 1] = nums1[i];
                            nums1[i] = temp;
                        }
                        --i;
                    }
                }
                else
                {

                    nums1[m] = nums2[n - 1];
                }
                --n, ++m;
            }
        }
        return nums1;
    }
};
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    Solution solution;
    vector<int> nums1 = {0,0,0,0,0,0};
    vector<int> nums2 = {1,2,3,4,5,6};
    vector<int> resultArray = solution.merge(nums1, 0, nums2, 6);
    for (int i = 0; i < resultArray.size(); i++)
    {
        cout << resultArray[i] << endl;
    }

    return 0;
}
