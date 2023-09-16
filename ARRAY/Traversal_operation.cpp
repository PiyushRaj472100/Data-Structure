#include <iostream>
using namespace std;





void display(int arr[] , int n)
{
   for (int i = 0; i < n; i++) {
    cout << "Arr[" << i << "] = " << arr[i] << "\n";
  }
}

  int insert(int arr[] , int n , int x , int capacity , int pos)
{
  if(n>=capacity)
  {
    return -1;
  }

  for(int i = n-1 ; i>=pos ; i--)
  {
    arr[i+1] = arr[i];
  }
  int i;
  arr[i] == x;
  return 1;
}

int main() {
  int arr[5] = {18, 30, 15, 70, 12};
 
 int n = 5;
 int x = 21;
 int capacity = 20;
 int pos = 2;

 display(arr , n);

 insert(arr , n , x , capacity , pos);

 n++;

 display(arr , n);

 return 0;
 
}


