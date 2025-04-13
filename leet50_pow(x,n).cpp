// leet code question 50
//Implement pow(x, n), which calculates x raised to the power n (i.e., x^n).
//

#include<iostream>
#include<vector>
using namespace std;


        double myPow(double x, int n) 
        {
            if(x==1) // 1^n=1 for any n
            {
                return 1.00000;
            }

            if(n==0)  // x^0=1 for any x except 0
            {
                return 1.00000;
            }

            if(n==1)  // x^1=x for any x
            {
                return x;
            }
            
            long bf=n;  // long to avoid overflow for n=INT_MIN
            
            if(n<0) // if n is negative, we need to find the reciprocal of x
            {
                x=1/x;
                bf=-bf;    // make n positive because while loop is for bf>0
            }
    
            double ans=1.0000;  // ans=1.0000 to avoid overflow for x=0.0000

            while(bf>0)
            {
                int rem= bf%2;
                bf=bf/2;
    
                if(rem == 1) 
                {
                    ans=ans*x; 
                }

                x= x*x;  // x^2 for next iteration
            }
    
            return ans;
        }

        int main()
        {
            double x;
            int n;
            cout<<"Enter the value of x and n: ";
            cin>>x>>n;
            cout<<myPow(x,n);
            return 0;
        }