int Solution::titleToNumber(string A) {
   
    int n=A.size();
    int res=0,j=n-1;
    for(int i=0;i<n;i++){
        int x=A[i]-'A'+1;
        res=res+pow(26,j)*x;
        j--;
    }
    return res;
}
