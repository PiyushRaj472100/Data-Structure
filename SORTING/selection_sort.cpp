


#include <iostream>
using namespace std;

void print_Array(int arr[], int size){

    for(int i = 0; i<size;i++){

        cout<<" "<<arr[i];
    }
    cout<<"\n";
}
void selectionSort(int A[], int size){
    int indexOfMin, temp;
    printf("Running Selection sort...\n");
    for (int i = 0; i <= size-1; i++)
    {
        indexOfMin = i;
        for (int j = i+1; j < size; j++)
        {
            if(A[j] < A[indexOfMin]){
                indexOfMin = j;
            }
        }
        // Swap A[i] and A[indexOfMin]
        temp = A[i];
        A[i] = A[indexOfMin];
        A[indexOfMin] = temp;
    }
}
  

int main() {

    int arr[] = {1,2,11,8,44,3,68,95,33};
    int size = sizeof(arr)/sizeof(int);
    print_Array(arr , size);
    selectionSort(arr , size);
    print_Array(arr , size);
return 0;
}