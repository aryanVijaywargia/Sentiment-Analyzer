int Solution::isPower(int A) {
    
    if(A==1)
    return 1;
    for(int i=2; i<=(int)(sqrt(A)); i++)
    {
        for(int j=2; j<=(int)(sqrt(A)); ++j){
            if(pow(i,j)==A)
            return 1;
            else if(pow(i,j)>A)
            break;
        }
    }
    return 0;
}
