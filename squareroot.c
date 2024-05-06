int mySqrt(int x) 
{
    float sqrt=x/2;
    float temp=0;
    while(sqrt!=temp)
    {
        temp=sqrt;
        sqrt=((x/temp) + temp)/2;
    }
    
    if(x!=1)
    {
        return sqrt;
    }
    else
    {
        return 1;
    }
}
/*if i use float , around 4 testcases out of 1k+ are failing by one digit
And to corect that ,if i use int instead of float (for the variables sqrt and temp) it says time limit exceeded*/
