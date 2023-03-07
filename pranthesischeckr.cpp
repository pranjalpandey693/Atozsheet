#include<bits/stdc++.h>
using namespace std;
int checker(string a)
{    
    int b=0;
    for (int i=0;i<a.length();i++)
    {   if(a[i]=='(')
        {
            b++;
        }
        else if (a[i]==')')
        {
            b--;
        }

    } 
    if(b==0)
    return 0;
    else return 1;

}
int main()
{  
    string a="(()))";
    int b= checker(a);
   cout << b;

    
}