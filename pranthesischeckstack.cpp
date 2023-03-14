class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string exp)
    {
        // Your code here 
       stack<char> stk; 
char x; 
for (int i=0; i<exp.length(); i++) 
{ 
if (exp[i]=='('||exp[i]=='['||exp[i]=='{') 
{ 
stk.push(exp[i]); 
continue; 
} 
if (stk.empty()) 
return false; 
switch (exp[i]) 
{ 
case ')': 
x = stk.top(); 
stk.pop(); 
if (x=='{' || x=='[') 
return false; 
break; 
case '}': 
x = stk.top(); 
stk.pop(); 
if (x=='(' || x=='[') 
return false; 
break; 
case ']': 
x = stk.top(); 
stk.pop(); 
if (x =='(' || x == '{') 
return false; 
break; 
} 
} 
return (stk.empty());
    }

};