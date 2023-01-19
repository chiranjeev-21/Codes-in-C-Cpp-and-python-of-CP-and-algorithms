#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[]) {
  int key;
  int j = 0;
  for (int i = 1; i < 5; i++) {
    key = arr[i];
    for(j = i - 1 ;j >= 0 && arr[j] > key ; j--)
    {
      arr[j + 1] = arr[j];
    }
    arr[j + 1] = key;
    
  }
}

int main() {
  int myarray[5];
  cout << "Enter 5 integers in any order" << endl;
  for (int i = 0; i < 5; i++) {
    cin >> myarray[i];
  }

  insertionSort(myarray);

  cout << endl << "After Sorting: " << endl;
  for (int i = 0; i < 5; i++) {
    cout << myarray[i] << " ";
  }
  return 0;
}
// To sort an array of size n in ascending order: 
// 1: Iterate from arr[1] to arr[n] over the array. 
// 2: Compare the current element (key) to its predecessor. 
// 3: If the key element is smaller than its predecessor,
   // compare it to the elements before. Move the greater elements one position up to make space for the swapped element.

// pseudocode

//    declare variables – i, key, j
// loop : i = 1 to n – 1 // outer loop
// key = a[i] //pick the next element
// j = i – j; // decrement j value
// loop : (j>=0 && a[j]>key) // inner loop
// arr[j+1] = arr[j]
// j = j – 1
// end loop // outer loop
// arr[j+1] = key
// end loop // outer loop