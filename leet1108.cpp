/* leet code question 1108
Given a valid (IPv4) IP address, return a defanged version of that IP address.
A defanged IP address replaces every period "." with "[.]".
Example 1:
Input: address = "1.1.1.1"
Output: "1[.]1[.]1[.]1"
Example 2:
Input: address = "255.100.50.0"
Output: "255[.]100[.]50[.]0"        */

#include <iostream>
using namespace std;

string defangIPaddr(string addr) 
{
    string ans="";
    int n= addr.size();
    for(int i=0; i<n; i++)
    {
        if(addr[i]=='.')
        {
            ans+="[.]";
        }
        else
        {
            ans+= addr[i];
        }
    }

    return ans;
}

int main()
{
    return 0;
}