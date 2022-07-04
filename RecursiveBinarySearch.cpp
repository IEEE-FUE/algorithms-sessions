#include <iostream>

using namespace std;
int binarySearch(int arr[], int k,int start, int end){
    
    
    if(start<=end)
    {
        int mid =(start+end)/2;
        if(arr[mid]==k)
        return mid;
        else if(arr[mid]<k){
           return binarySearch(arr,k,mid+1,end); 
        }
        
        else if (arr[mid]>k){
          return binarySearch(arr,k,start,mid-1); 
        }
        
    }
    return -1;
    
}

int main()
{
    int arr[]={2,9,10,15,18,20,25,30};
    int start=0;
    int end=8;
    int k;
    cin>>k;
    
   cout<< binarySearch(arr,k,start,end);
    
    return 0;
}


