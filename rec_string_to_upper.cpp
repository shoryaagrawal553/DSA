#include<iostream>
using namespace std;

void toUP(string& str, int n)
{
    if(n==-1) return;

    str[n] = (str[n]-'a') + 'A';
    toUP(str, n-1);
}

int main()
{
    string str;
    cout<<"enter a string: ";
    cin>>str;
    
    toUP(str, str.length()-1);
    cout<<str;

    return 0;
}