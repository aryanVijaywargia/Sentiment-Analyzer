int Solution::lengthOfLastWord(const string A) {
    if(A.size() == 0)
    return 0;
    int l=0,r=0,ch=0;
    for(int i=A.size()-1; i>=0; i--){
        if(isalpha(A[i]))
         {ch++;}
         else if(A[i]!=isalpha(A[i]) && ch!=0)
         {return ch;}
    }
    return ch;
}
