class Solution {
public:

    int firstocc(vector<int>&nums,int target ){
       
       int start=0;
       int end=nums.size()-1;
       int idx=-1;
       while(start<=end){
           int mid=start+(end-start)/2;

           if(nums[mid]==target){
               end=mid-1;
               idx=mid;
           }
           else if(nums[mid]<target){
               start=mid+1;
           }

           else{
               end=mid-1;
           }
       }  
          return idx;
    }

      int lastocc(vector<int>&nums,int target){
       
       int start=0;
       int end=nums.size()-1;
       int idx=-1;
       while(start<=end){
           int mid=start+(end-start)/2;

           if(nums[mid]==target){
               start=mid+1;
               idx=mid;
           }
           else if(nums[mid]<target){
               start=mid+1;
           }

           else{
               end=mid-1;
           }
       }  
        return idx;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans(2,-1);
        ans[0]=firstocc(nums,target);
        ans[1]=lastocc(nums,target);
        return ans;
    }
};


// geeks for geeks solution 
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

  int firstocc(int nums[],int target ,int n){
       
       int start=0;
       int end=n-1;
       int idx=-1;
       while(start<=end){
           int mid=start+(end-start)/2;

           if(nums[mid]==target){
               end=mid-1;
               idx=mid;
           }
           else if(nums[mid]<target){
               start=mid+1;
           }

           else{
               end=mid-1;
           }
       }  
          return idx;
    }

      int lastocc(int nums[],int target,int n){
       
       int start=0;
       int end=n;
       int idx=-1;
       while(start<=end){
           int mid=start+(end-start)/2;

           if(nums[mid]==target){
               start=mid+1;
               idx=mid;
           }
           else if(nums[mid]<target){
               start=mid+1;
           }

           else{
               end=mid-1;
           }
       }  
        return idx;
    }
    
vector<int> find(int arr[], int n , int x )
{
    vector<int>ans(2,-1);
        ans[0]=firstocc(arr,x,n);
        ans[1]=lastocc(arr,x,n);
        return ans;
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends