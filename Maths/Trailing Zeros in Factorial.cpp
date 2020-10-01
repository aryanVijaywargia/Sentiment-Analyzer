int nooffives(int x){
    int a=0;
    while(x%5==0){
        x=x/5;
        a++;
    }
    return a;
}
int Solution::trailingZeroes(int n) {
    int ans=0;
    for(int i=5;i<=n;i+=5){
        ans+=nooffives(i);
    }
    return ans;
}