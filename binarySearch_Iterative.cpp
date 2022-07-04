#include <iostream>

using namespace std;
int binarySearch(int arr[], int k){
    int start=0;
    int end=sizeof(arr)-1;
    
    while(start<=end)
    {
        int mid =(start+end)/2;
        if(arr[mid]==k)
        return mid;
        else if(arr[mid]<k){
           start=mid+1; 
        }
        
        else if (arr[mid]>k){
          end=mid-1; 
        }
        
    }
    return -1;
    
}

int main()
{
    int arr[]={2,9,10,15,18,20,25,30};
    int k;
    cin>>k;
    
   cout<< binarySearch(arr,k);
    
    return 0;
}

