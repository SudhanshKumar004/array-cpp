 #include <iostream>
 using namespace std;
 int main()
 {
    int arr[] = {12,4,53,6,3,33};
    int len = sizeof(arr)/sizeof(arr[0]);
    int b = INT_MAX;
    for(int i=0;i<len;i++)
    {
        if(b > arr[i])
        {
            b = arr[i];
        }
    }
    cout << "min value = " << b;
 }
