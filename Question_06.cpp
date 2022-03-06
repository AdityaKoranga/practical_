// binary search with ad without recursion
#include <bits/stdc++.h>
using namespace std;
int binary_search_with_recursion(int *arr, int s, int e, int target)
{
    // base case
    if (s > e)
        return -1;
    int mid = s + (e - s) / 2;

    // recursive call

    // element found
    if (arr[mid] == target)
        return mid;
    else if (arr[mid] < target)
    {
        return binary_search_with_recursion(arr, mid + 1, e, target);
    }
    else
        return binary_search_with_recursion(arr, s, mid - 1, target);
}
int binary_search_without_recursion(int arr[], int s,int e, int target)
{
    int mid = s + (e - s) / 2;
    while(s<=e){
    if(arr[mid]==target)
        return mid;
    else if(arr[mid]>target){
        e=mid-1;

    }
    else{
        s=mid+1;
    }
    mid = s + (e - s) / 2;
    
    } 
    return -1;
}
int main()
{
    int arr[6] = {1, 3, 5, 7, 34, 44};
    int size = 6;
    int target = 7;
    cout << "using recursion the element is at index " << binary_search_with_recursion(arr, 0, size - 1, target) << endl;
    cout << "without recursion the element is at index " << binary_search_without_recursion(arr, 0, size - 1, target);

    return 0;
}