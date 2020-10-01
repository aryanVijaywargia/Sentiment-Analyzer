 string Solution::convertToTitle(int n) {
    string ans="";
    while(n){
        int rem=n%26;
        cout<<"rem.............."<<rem<<endl;
        if(rem){
            char c=rem-1+'A';
            //cout<<"c............"<<c<<endl;
            string s;
            s.push_back(c);
            ans.insert(0,s);
            n=n/26;
        }
        else{
            ans.insert(0,"Z");
            n=n/26-1;
        }
    }
    return ans;
}