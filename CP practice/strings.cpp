// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//     string inputString, currentString;
    
//     // Reading input strings separated by spaces and newlines
//     while (cin >> inputString) {
//         if (currentString.empty()) {
//             currentString = inputString;
//         } else {
//             currentString += " " + inputString;
//         }
//         if (cin.peek() == '\n')
//         mkii {
//             cout << currentString << endl;
//             currentString = "";
//             cin.ignore();
//         }
//     }
//     if (!currentString.empty()) {
//         cout << currentString << endl;
//     }
    
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// // Function to find maximum length even word
// string findMaxLenEven(string str)
// {
//     int n = str.length();

//     int i = 0;

//     // To store length of current word.
//     int currlen = 0;

//     // To store length of maximum length word.
//     int maxlen = 0;

//     // To store starting index of maximum
//     // length word.
//     int st = -1;

//     while (i < n)
//     {
//         if (str[i] == ' ')
//         {
//         if (currlen % 2 == 0)
//         {
//             if (maxlen < currlen)
//             {
//                 maxlen = currlen;
//                 st = i - currlen;
//             }
//         }
//         // Set currlen to zero for next word.
//         currlen = 0;
//         }
//         else
//         {
//         // Update length of current word.
//         currlen++;
//         }
//         i++;
//     }

//     // Check length of last word.
//     if (currlen % 2 == 0)
//     {
//         if (maxlen < currlen)
//         {
//         maxlen = currlen;
//         st = i - currlen;
//         }
//     }

//     // If no even length word is present
//     // then return -1.
//     if (st == -1)
//         return "-1";

//     return str.substr(st, maxlen);
// }

// // Driver code
// int main()
// {
//     string str = "this is a test string";

//     cout << findMaxLenEven(str);

//     return 0;
// }

// std::vector<int> subarray_sum(std::vector<int> arr, int target) {
//     std::unordered_map<int, int> prefix_sums;
//     // an empty subarray has a sum of 0
//     prefix_sums[0] = 0;
//     int cur_sum = 0;
//     for (int i = 0 ; i < arr.size(); i++) {
//         cur_sum += arr[i];
//         int complement = cur_sum - target;
//         if (prefix_sums.count(complement)) {
//             return {prefix_sums[complement], i + 1};
//         }
//         prefix_sums[cur_sum] = i + 1;
//     }
//     // return no indices if arr is empty
//     return {};
// }




#include<bits/stdc++.h>
using namespace std;

void buildPrefixSumArray(int arr[], int n,int prefixSumArray[])
{
    prefixSumArray[0] = arr[0];
 
    // Adding present element with previous element
    for (int i = 1; i < n; i++)
        prefixSumArray[i] = prefixSumArray[i - 1] + arr[i];
}
 
// Computes sum all sub-array
ll SubArraySum(int arr[], int n)
{
    ll result = 0, sum = 0;
    int prefixSumArr[n] = { 0 };
    buildPrefixSumArray(arr, n, prefixSumArr);
 
    // Pick starting point
    for (int i = 0; i < n; i++) {
        sum = 0;
        for (int j = i; j < n; j++) {
            if (i != 0) {
                sum = prefixSumArr[j] - prefixSumArr[i - 1];
            }
            else
                sum = prefixSumArr[j];
            result += sum;
        }
    }
 
    return result;
}

int main(){
    int n=5;
    int arr[n]={1,2,4,6,3};
    cout<<SubArraySum(arr,n);
}

