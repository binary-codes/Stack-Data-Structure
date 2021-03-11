
//Program to check Balanced Parenthses of a string, e.g. {[()]} this is balanced while }(){ is not.

#include <bits/stdc++.h>
using namespace std;

bool matching(char a, char b){
    return ((a=='(' && b==')') || (a=='[' && b==']') || (a=='{' && b=='}'));
}

bool isBalance(string s){
    stack<char> st; 
    int n=s.length();
    for(int i=0;i<n;i++){
        if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
            st.push(s[i]);
        }
        else{
            if(st.empty()==true) //if stack is empty, return false( if there is no opening braces in the string).
               return false;
            else if(matching(st.top(),s[i])==false)
               return false;
            else{
                st.pop();
            }
        }
    }
    return (st.empty()==true);
}



int main() {
	// your code goes here
	
	string str;
	cout<<"Enter a string: ";
	cin>>str;
	cout<<isBalance(str);
	return 0;
}
