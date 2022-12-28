#include<iostream>
using namespace std;
int binary_search(int Arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid=start+(end- start)/2;
    while(start<=end){
        if(Arr[mid]==key){
        return mid;
    }
      else if(key>Arr[mid]){
        start=mid+1;
     }
     else{
        end=mid-1;
     }
     mid=start+(end-start)/2;
    }

return -1;
}


int main()
{
    int arr[8]={1,2,3,4,5,6,7,11}; //Array must be sorted either ascending or decending
    binary_search(arr,8,7);
    cout<<"The index of key is:"<<binary_search(arr,8,7);

    return 0;
}