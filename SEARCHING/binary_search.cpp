#include <iostream>
using namespace std;

int binary_search(int arr[],int size , int search){

    int low , mid , high;
    low = 0;
    high = size - 1;

    // SEARCHING STARTS
    while(low<=high)
    {
    
    mid = (low+high)/2;

    if(arr[mid]==search){
        return mid;
    }

    if(arr[mid]<search){
        low = mid+1;
    }

    else{
        high=mid-1 ;
    }
    }
    //SEARCHING ENDS
    return -1;
}
int main() {

    int arr[] = {1,2,11,18,44,53,68,95,133};
    int size = sizeof(arr)/sizeof(int);
    int search = 95;
    int searching = binary_search(arr , size , 95);
    cout<<"The element was found at index : "<<searching;

return 0;
}


int arr[];

int n;

for(int i = 0 ; i < n; i++)
{
    cout<< "enter element";
    cin>>arr[i];
}

for(int i = 0 ; i < n; i++)
{
    cout<< arr[i];
   
}