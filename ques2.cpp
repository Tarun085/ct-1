//Name : Tarun Tiwari
//RollNo. : 2010991749
//Set : 04
//Question 2 :

#include <bits/stdc++.h>
using namespace std;

//Check if array elements are consecutive
bool Consecutive(int arr[], int n)
{
    // Sort the array
    sort(arr, arr + n);
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1] + 1)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int arr[] = {-1,5,4,2,0,3,1};
    int n = sizeof(arr) / sizeof(arr[0]);

    bool res;

    try
    {
        res = Consecutive(arr, n);
    }
    catch (int error)
    {
        cout << "Error: " << error << endl;
    }

    if (res == true)
        cout << " The Array contain consecutive integers";
    else
        cout << " The Array does not contain consecutive integers";
    return 0;
}
