int NthRoot(int n, int m) {
  int start=1;
  int end=m;
  while(start<=end){
    int mid=start + (end-start)/2;
    long long num=1;
    for(int i=0;i<n;++i){
       num*=mid;
       if(num>m){
         end=mid-1;
         break;
       }
    }

    if(num==m){
      return mid;
    }

    
    if(num<m){
      start=mid+1;
    }
    else{
      end=mid-1;
    }
  }
  return -1;
}