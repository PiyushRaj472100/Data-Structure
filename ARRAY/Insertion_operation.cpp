#include <iostream>
using namespace std;

int main() {
  int arr[20] = {18, 30, 15, 70, 12};
  int i, x =15 , pos, n = 5;

  display(arr , n);

  insert(arr , n , x , 20  , 2);
  n++;
  display(arr , n);
  return 0;

}

void display(int arr[] , int n)
{
  for(int i = 0 ; i < n ; i++)
  {
    cout<<"arr"<<i<<"="<<arr[i];
  }
}
void insert(int arr[] , int n , int x , int capacity , int pos)
{
  if(n>=capacity)
  {
    return -1;
  }

  for(int i = n-1 ; i>=pos ; i--)
  {
    arr[i+1] = arr[i];
  }
  arr[i] == x;
  return 1;
}