string commonP(string s1, string s2) 
{ 
    string result; 
    int n1 = s1.length(), n2 = s2.length(); 

    for (int i=0, j=0; i<=n1-1&&j<=n2-1; i++,j++) 
    { 
        if (s1[i] != s2[j]) 
            break; 
        result.push_back(s1[i]); 
    } 

    return (result); 
} 

string Solution::longestCommonPrefix(vector<string> &A) {
        string prefix = A[0]; 
        int n = A.size();

    for (int i=1; i<=n-1; i++) 
        prefix = commonP(prefix, A[i]); 

    return (prefix); 
}



 
