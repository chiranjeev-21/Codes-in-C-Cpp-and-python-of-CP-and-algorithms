// #include <algorithm>
// #include <iostream>
// #include<bits/stdc++.h>
// using namespace std;
 

// int main()
// {
//     // int arr[] = { 1, 2, 3 };
//     string s;
//     cin>>s;
//     vector<int>vec;
//     int n=s.length();
//     for(int i=0;i<n;i++){
//         vec.push_back(s[i]-'a');
//     }
//     // int n=vec.size();
//     // sort(arr, arr + 3);
//     sort(vec.begin(),vec.end());
//     // cout << "The 3! possible permutations with 3 elements:\n";
//     do {
//         // cout << vec[0] << " " << vec[1] << " " << vec[2] << "\n"<< vec[3] << "\n";
//         for(int i=0;i<m;i++){
//             res.push_back()
//         }
//     } while (next_permutation(vec.begin(),vec.end()));
 
//     // cout << (char)vec[0] << " " << (char)vec[1] << " " << (char)vec[2] << "\n"<< (char)vec[3] << "\n";
 
//     return 0;
// }



#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

// Utility function to swap two digits
void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}
  
// Given a number as a char array number[], this function finds the
// next greater number.  It modifies the same array to store the result
void findNext(char number[], int n)
{
    int i, j;
  
    // I) Start from the right most digit and find the first digit that is
    // smaller than the digit next to it.
    for (i = n-1; i > 0; i--)
        if (number[i] > number[i-1])
           break;
  
    // If no such digit is found, then all digits are in descending order
    // means there cannot be a greater number with same set of digits
    if (i==0)
    {
        cout << "Next number is not possible";
        return;
    }
    // II) Find the smallest digit on right side of (i-1)'th digit that is
    // greater than number[i-1]
    int x = number[i-1], smallest = i;
    for (j = i+1; j < n; j++)
        if (number[j] > x && number[j] < number[smallest])
            smallest = j;
  
    // III) Swap the above found smallest digit with number[i-1]
    swap(&number[smallest], &number[i-1]);
  
    // IV) Sort the digits after (i-1) in ascending order
    // sort(word.begin()+i,word.end());
    sort(number +i, number + n);
  
    cout << "Next number with same set of digits is " << number;
  
    return;
}
  
// Driver program to test above function
int main()
{
    char digits[] = "baca";
    int n = strlen(digits);
    findNext(digits, n);
    return 0;
}