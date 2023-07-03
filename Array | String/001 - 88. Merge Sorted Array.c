void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    int temp = 10;
    for(int i = m; i < (m+n); i++) {nums1[i] = nums2[i-m];}
    for(int i = (m+n-1); i >= 0; i--) {
        if((nums1[i] > temp) && i < (m+n-1)) {
            nums1[i+1] = nums1[i];
            nums1[i] = temp;
            i = m+n-1;
        }
        temp=nums1[i];
    }
}
