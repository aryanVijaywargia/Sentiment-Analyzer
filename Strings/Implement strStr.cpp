int Solution::strStr(const string A, const string B) {
    int index=-1;
    if(A.empty() || B.empty())
    return index;
    for(auto i=0; i<A.length(); i++){
        if(A[i] == B[0])
        { index =i;
        int j=0;
            while(j<B.length()){
                if(A[i]==B[j] && j<B.length()){
                    ++i;++j;
                }
                else {
                    index =-1;
                    i-=j;
                    break;
                }
            }
                   if (j==B.length())
                return index;        }
    }
    return index;
}
