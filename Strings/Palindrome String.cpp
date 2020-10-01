int Solution::isPalindrome(string A) {
    vector<int> v1,v2;
    int size = A.size();
    for(int i=0; i<size; i++){
        if(isalpha(A[i]) || isdigit(A[i]))
        {   int a;
            if(isalpha(A[i]))
            a = (int)tolower(A[i]);
            else a =A[i];
            v1.push_back(a);
        }
        if(isalpha(A[size-1-i]) || isdigit(A[size-1-i]))
        {   int a;
            if(isalpha(A[size-1-i]))
             a = (int)tolower(A[size-1-i]);
            else a = A[size-1-i];
            v2.push_back(a);
        }
        
    }
    if(v1==v2)
    return 1;
    
    return 0;
}
