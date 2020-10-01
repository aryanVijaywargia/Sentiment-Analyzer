bool isPrime(int n) 
{ 
 
    if (n <= 3) 
        return true; 
  
    if (n % 2 == 0 || n % 3 == 0) 
        return false; 
  
    for (int i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
  
    return true; 
} 
  
vector<int> Solution::primesum(int A) {
    vector<int> v,x;
    
    for(int i=2; i<=A; i++)
    {
        if(isPrime(i) && isPrime(A-i))
        {
            v.push_back(i);
            v.push_back(A-i);
            return v;
        }
       
    }

    return v;
}
