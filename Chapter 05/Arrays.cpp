#include <iostream>
using namespace std;

int main()
{
    /*
   int arr[5];

   for(int i=0;i< 5; i++)
   {
        arr[i]=i*2;
   }


   for(int i=0;i< 5; i++)
   {
        cout << arr[i] << endl;
   }

   int arr1[] = {2,3,4,5,6};

   for(int i=0;i< 5; i++)
   {
       cout << arr1[i] << endl;
   }
       

       int arr3[5] ={1,3,5};

       for(int i=0;i< sizeof(arr3)/sizeof(arr3[3]); i++)
   {
        cout << arr3[i] << endl;
   }
        */

     int arr[] = {1,2,3,4,5};
     int b=sizeof(arr)/sizeof(arr[0]);
     cout << b;
}