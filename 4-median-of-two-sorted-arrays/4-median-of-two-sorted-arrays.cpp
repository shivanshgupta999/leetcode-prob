class Solution {
public:
    double findMedianSortedArrays(vector<int>& arr1, vector<int>& arr2) {
      int n=arr1.size();
        int m=arr2.size();
        int k = (n+m+1)/2;
         int s=max(0,k-m),e=min(k,n);
     while(s<=e){
         int cut1 = (s+e)/2;
         int cut2 = k-cut1;
       
         int l1= cut1==0 ? INT_MIN : arr1[cut1-1];
         int l2= cut2==0 ? INT_MIN : arr2[cut2-1];
         int r1= cut1==n ? INT_MAX : arr1[cut1];
         int r2= cut2==m ? INT_MAX : arr2[cut2];
         if(l1>r2){
             e=cut1-1;
             
         }
         else if(l2> r1){
             s=cut1+1;
         }
         else{
               if((m+n)%2 != 0)
                return max(l1,l2);
            else 
                return (max(l1,l2)+min(r1,r2))/2.0;
         }
        
     }
        return 0;
    }
};