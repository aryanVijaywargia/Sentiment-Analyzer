int extended_gcd(int a,int b,int &x,int &y)
{
if(a==0)
{
x = 0;
y = 1;
return b;
}
int x1,y1;

   int gcd = extended_gcd(b%a,a,x1,y1);
   
   x = y1 - (b/a)*x1;
   y = x1;
   
   return gcd;

}
long long int factorial(long long int n)
{
    long long int ans = 1;
    while(n>=2)
    {
        ans = (ans%1000003)*(n%1000003);
        n--;
    }
    return ans%1000003;
}

int Solution::findRank(string A) {
    unordered_map<char,int> map;
    
    int n = A.size();
    
    if(n==1) return 1;
    
    for(int i=0;i<n;i++)
    map[A[i]]++;
    
    long long int count = 0;
    
    for(int i=1;i<n;i++)
    if(A[i]<A[0]) count++;
    
    long long int ans = 0;
    if(count>0)
    {   ans = factorial(n-1)%1000003;
        ans = (ans*count)%1000003;
         
        for(auto i:map)
        {
            if(i.second>1)
            {
                int temp = (factorial(i.second));
                if(ans%temp==0) ans = (ans/temp)%1000003;
                else
                {   int x,y;
                    int g = extended_gcd(temp,1000003,x,y);
                    int res = (x%1000003 + 1000003)%1000003;
                    ans = (ans%1000003*res%1000003)%1000003;
                }
            }
        }
    }
    return (ans + findRank(A.substr(1)))%1000003;
}