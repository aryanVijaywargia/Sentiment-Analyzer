int sum=0;

long fact(int n){
    if(n==0)
    return 0;
    else return n*fact(n-1);
}
vector<int>can_v;
    
int Solution::solve(int A, vector<int> &B) {
    
    if(A==0)
    return 0;
    if(A==1 && B.size()==1)
    return 0;
    else if(A==1 && B.size()==0)
    return 0;
    
    
    can_v.clear();
    for(int i=0; i<B.size(); i++)
    {
        B[i] = B[i]-1;
    }
    bool x =true;
    for(int i=0; i<B.size(); i++)
    {
        if(i!=B[i])
        x = false;
    }
    if(x)
    return sum;
    
    for(int i=0; i<B.size(); i++){
        if(B[i]-1>=0 && B[i-1]==i-1)
        can_v.push_back(B[i]-1);
        else if(B[i]-1>=0)
        { can_v.push_back(i-1); B.push_back(i-1);}
        else if(B[i]+1<A)
        {can_v.push_back(i+1);B.push_back(i+1);} 
    }
    
    sum+=fact(can_v.size());
    sort(B.begin(),B.end());
    return solve(A,B);
    
}
