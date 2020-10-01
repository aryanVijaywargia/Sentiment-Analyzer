int Solution::hammingDistance(const vector<int> &A) {
    long long int ans=0,n=A.size();
    long long int count;
    for(int i=0;i<31;i++){
        count=0;
        for(int j=0;j<n;j++){
            if(A[j]&(1<<i))
             count++;
        }
        ans=(ans+count*(n-count)*2)%1000000007;
    }
    return ans;
}