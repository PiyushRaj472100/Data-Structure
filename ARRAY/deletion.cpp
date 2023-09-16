#include <iostream>
#include <vector>

using namespace std;

int main() {
 
  int arr[] = {1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(int);

  // Print the original array
  cout << "Original array: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  // Delete the element at index 2
  int index = 2;
  for (int i = index; i < n - 1; i++) {
    arr[i] = arr[i + 1];
  }
  n--;

  // Print the modified array
  cout << "Modified array: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}