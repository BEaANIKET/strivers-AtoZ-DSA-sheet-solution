class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        if (n==1){
            return nums[0];
        }
        if(nums[0]!=nums[1]){
            return nums[0];
        }
        else if (nums[n-1]!=nums[n-2]){
            return nums[n-1];
        }

        int start=1;
        int end=n-2;
        while(start<=end){

            int mid=(end+start)/2;
            if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]){
                return nums[mid];
            }
            if(mid%2==0 && nums[mid]==nums[mid+1] || mid%2==1 && nums[mid]==nums[mid-1]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return -1;
    }
};

// geeks for geeks code 

//{ Driver Code Starts
// Driver code

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
  public:
    int findOnce(int arr[], int n)
    {
        if (n==1){
            return arr[0];
        }
        if(arr[0]!=arr[1]){
            return arr[0];
        }
        else if (arr[n-1]!=arr[n-2]){
            return arr[n-1];
        }

        int start=1;
        int end=n-2;
        while(start<=end){

            int mid=(end+start)/2;
            if(arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid+1]){
                return arr[mid];
            }
            if(mid%2==0 && arr[mid]==arr[mid+1] || mid%2==1 && arr[mid]==arr[mid-1]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int A[n];
        for(int i = 0;i < n;i++)
        {
            cin>>A[i];
        }
        
        Solution ob;
        
        int res = ob.findOnce(A,n);
        cout << res << endl;
    }
    
    return 0;
}
// } Driver Code Ends