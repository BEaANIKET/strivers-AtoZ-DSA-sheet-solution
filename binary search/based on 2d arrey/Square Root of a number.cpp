int floorSqrt(int n)
{
    int start=0;
    int end=n;
    int idx=-1;
    while(start<=end){
        int mid=start+(end-start)/2;

        if(mid*mid==n){
            return mid;
        }

        if((mid*mid)<n){
            start=mid+1;
            idx=mid;
        }
        else{
            end=mid-1;
        }
       
    }
     return idx;
}
