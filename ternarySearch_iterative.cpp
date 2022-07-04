#include <iostream>

using namespace std;


int main()
{
    int arr[]={1,6,8,15,70};
    int key;
    int start=0;
    int end=4;
    bool f=true;
    cin>>key;
    while(start<=end){
        int mid1= start+(end-start)/3;
        int mid2=end-(end-start)/3;
        if(arr[mid1]==key){
            cout<<mid1;
            f=false;
            break;
            
        }
        else if(arr[mid2]==key){
              cout<<mid2;
               f=false;
            break;
        }
        else if(key<arr[mid1]){
            end=mid1-1;
           
        }
        else if(key>arr[mid2]){
            start=mid2+1;
        
        }
        else{
            start=mid1+1;
            end=mid2-1;
        } 
    }
    
    if(f){
        cout<<-1;
    }
    
   

    return 0;
}

