vector<string> Solution::fizzBuzz(int A) {
    vector<string> v(A,"");
    for(int i=1; i<=A; i++)
    {
        if(i%3==0 && i%5==0)
        {
            v[i-1]="FizzBuzz";
        }
        else if(i%3==0)
        {
            v[i-1] = "Fizz";
        }
        else if(i%5==0)
        {
            v[i-1] = "Buzz";
        }
        else
        {
            v[i-1] = to_string(i);
        }
    }
    return v;
}
