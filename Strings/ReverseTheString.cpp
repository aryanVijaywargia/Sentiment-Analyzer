string Solution::solve(string A) {
stringstream s(A);
A="";
string temp;
while(s>>temp)
A = temp + " " +A;
A.pop_back();
return A;
}