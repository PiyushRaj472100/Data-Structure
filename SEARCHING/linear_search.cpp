#include <iostream>
using namespace std;

int linear_search(int arr[],int size , int search){

    for(int i = 0 ; i<size ; i++){

        if(arr[i]==search){

            return i;
        }
        }
          return -1;
        }
int main() {

    int arr[] = {1,12,11,18,44,13,18,15,33};
    int size = sizeof(arr)/sizeof(int);
    int search = 12;
    int searching = linear_search(arr , size , 12);
    cout<<"The element was found at index : "<<searching;

return 0;
}