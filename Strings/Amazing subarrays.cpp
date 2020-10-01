int Solution::solve(string A) {
    int sum=0;
    for(int i=0; i<A.size(); i++){
    if (A[i] == 'a' || A[i] == 'e' || A[i] == 'i' || A[i] == 'o' || A[i] == 'u'
    ||A[i] == 'A' || A[i] == 'E' || A[i] == 'I' || A[i] == 'O' || A[i] == 'U') 
    sum = (sum + A.size()-i-1 + 1)%10003;
    }

    return sum;
}
