//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
		
	int firstocc(int arr[],int n,int target){
	    
	    int start=0;
	    int end=n-1;
	    int idx=-1;
	    while(start<=end){
	        
	        int mid=start + (end-start)/2;
	        
	        if(arr[mid]==target){
	            end=mid-1;
	            idx=mid;
	        }
	        else if(arr[mid]<target){
	            start=mid+1;
	        }
	        else{
	            end=mid-1;
	        }
	    }
	    return idx;
	}
	
		int lastocc(int arr[],int n,int target){
	    
	    int start=0;
	    int end=n-1;
	    int idx=-1;
	    while(start<=end){
	        
	        int mid=start + (end-start)/2;
	        
	        if(arr[mid]==target){
	            start=mid+1;
	            idx=mid;
	        }
	        else if(arr[mid]<target){
	            start=mid+1;
	        }
	        else{
	            end=mid-1;
	        }
	    }
	    return idx;
	}
	int count(int arr[], int n, int x) {
	    // code here
	    int firstidx=firstocc(arr,n,x);
	    int lastidx=lastocc(arr,n,x);
	    int count=(lastidx+1)-firstidx;
	    if(firstidx==-1 && lastidx==-1){
	        return 0;
	    }
	    else if(firstidx==lastidx){
	        return 1;
	    }
	    else{
	        return count;
	    }
	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends