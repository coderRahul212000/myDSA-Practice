//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        
        int arr[26] = {0};
        
        for( int i = 0 ; i < str.length(); i++){
            char ch = str[i];
            int pos = ch - 'a';
            arr[pos]++;
        }
        
        //max
        int maxi = INT_MIN, maxPos = -1;
        for( int i = 0 ; i < 26; i++){
            if(arr[i]>maxi){
                maxi = arr[i];
                maxPos = i;
            }
        }
        
        
        return maxPos + 'a';
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends