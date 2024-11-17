//WAP to find out the second max value in a given array;

#include <iostream>
using namespace std;
int main()
{
    int arr[]= {37,4,9,7,5,6,3};
    int s = sizeof(arr)/sizeof(arr[0]);
    int max1,max2;
    max1 = max2 = INT_MIN;
    for(int i=0;i<s;i++)
    {
        if(arr[i]>max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i]>max2 && arr[i]<max1)
        {
            max2 = arr[i];
        }
        }
         cout << "Second highest = " << max2;

}
