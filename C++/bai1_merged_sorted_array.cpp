#include <bits/stdc++.h>
using namespace std;

void merge1(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int p1 = m-1, p2 = n-1, p = m+n-1;

    while ((p1 >= 0) && (p2 >= 0))
    {
        if (nums1[p1] > nums2[p2])
            nums1[p--] = nums1[p1--];
        else
            nums1[p--] = nums2[p2--];
    }
    for (int i = 0; i <= p2; ++i)
        nums1[i] = nums2[i];

}

void show(vector<int> a)
{
    for (int i : a)
        cout << i << " ";
}

int main()
{

    vector<int> nums1 = {4,0,0,0,0,0};
    vector<int > nums2 = {1,2,3,5,6};
    int m = 1;
    int n = 5;
    merge1(nums1, m, nums2, n);
    show(nums1);



//    vector<int> nums1 = {1};
//    vector<int > nums2 = {};
//    int m = 1;
//    int n = 0;
//    merge1(nums1, m, nums2, n);
//    show(nums1);



//    vector<int> nums1 = {0};
//    vector<int > nums2 = {1};
//    int m = 0;
//    int n = 1;
//    merge1(nums1, m, nums2, n);
//    show(nums1);

    return 0;
}

