class Solution {
public:
     
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int n1 = nums1.size();
    int n2 = nums2.size();     
    int i=0,j=0;
    int n=(n1+n2);
    int count= 0;        
    
    if(n%2){
        while(count < n/2 && i<n1 && j<n2){
            if(nums1[i] <= nums2[j]){
                i++;
            }
            else{
                j++;
            }
            count++;
        }

        while(count < n/2 && i<n1){
            i++;
            count++;
        }

        while(count < n/2 && j<n2){
            j++;
            count++;
        }
        
        if(i<n1 && j<n2) return double(min(nums1[i], nums2[j]));
        else if(i<n1) return double (nums1[i]);
        return double(nums2[j]);                                         
    }       
    
    int m1=0, m2=0;
    while(count < (n/2-1) && i<n1 && j<n2){
        count++;
        if(nums1[i] <= nums2[j]){                
            i++;
        }
        else{                
            j++;
        }
    }

    while(count < n/2-1 && i<n1){
        count++;            
        i++;
    }

    while(count < n/2-1 && j<n2){
        count++;            
        j++;            
    }
    
    while(count < (n/2 + 1) && i<n1 && j<n2){
        count++;
        if(nums1[i] <= nums2[j]){
            if(count==n/2) {m1 = nums1[i];}
            else if(count==n/2 + 1) {m2 = nums1[i]; break;}
            i++;
        }
        else{
            if(count==n/2) {m1 = nums2[j];}
            else if(count==n/2 + 1) {m2 = nums2[j];  break;}
            j++;
        }
        
    }

    while(count < n/2+1 && i<n1){ 
        count++;
        if(count==n/2) {m1 = nums1[i];}
        else if(count==n/2 + 1) {m2 = nums1[i]; break;}
        i++;             
    }

    while(count < n/2+1 && j<n2){
        count++;
        if(count==n/2) {m1 = nums2[j];}
        else if(count==n/2 + 1) {m2 = nums2[j]; break;}
        j++;            
    }
    
    return double(m1+m2)/2;}
};