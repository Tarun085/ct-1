// Name : Tarun Tiwari
//RollNO. :2010991749
//Set : 04
//Question 1 :

#include <iostream>
#include <unordered_set>
using namespace std;


int findMinIndex(int arr[], int n)
{
    int minIndex = n;
    unordered_set<int> set;
    
    for (int i = n - 1; i >= 0; i--)
    {
        if (set.find(arr[i]) != set.end())
        {
            minIndex = i;
        }
        else
        {
            set.insert(arr[i]);
        }
    }
    
    if (minIndex == n)
    {
        return -1;
    }

    return minIndex;
}

    int main()
{
    // int a;
    // cin>>a;
    // int t;
    // int arr[a];
    
    // for(int i=0;i<=a;i++){
    //     cin>>arr[i];
    // }
    
        
 int arr[] = {5, 6, 3, 4, 3, 6, 4};


    int n = sizeof(arr) / sizeof(arr[n]);

    int minIndex;

    try
    {
        minIndex = findMinIndex(arr, n);
    }
    catch (int error)
    {
        cout << "Error: " << error << endl;
    }

    if (minIndex != n)
    {
        cout << "The minimum index of the repeating element is " << minIndex;
    }
    else
    {
        cout << "Invalid Input";
    }

    return 0;
}
 