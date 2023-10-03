/*
Column Name from a given column Number
Link Of Problem - https://practice.geeksforgeeks.org/problems/column-name-from-a-given-column-number4244/1
*/

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    string colName (long long int n)
    {
        // your code here
        string ans = "";
        string t = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; // first store an a to z characters to an string
        while(n>0){
            int rem = n%26; // taking modulo with 26
            if(rem==0){
                ans += 'Z';
            }
            else{
                ans += t[rem-1];
            }
            n--;
            n /= 26; // divide by 26
        }
        reverse(ans.begin(),ans.end()); // reverse the string to get the ans
        return ans;
    }
};