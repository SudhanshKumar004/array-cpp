//WAP to print only even number in array;

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {3,5,7,6,2,78,8};
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0;i<len;i++)
    {
        if(arr[i]%2==0)
        {
            cout << arr[i] << "\t";
        }
    }
}
