#include<bits/stdc++.h>
using namespace std;
char s[400];
int top = -1;
void push(char c){
    s[++top] = c;
}

char pop(){
    if(top == -1)
        return -1;
    else
        return s[top--];
}

int precedence(char ch){
	if(ch == '(')
        return 1;
    else if(ch=='+' or ch=='-')
        return 2;
    else if(ch=='*' or ch=='/' or ch=='%')
        return 3;
    else if(ch=='^')
        return 4;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
    char infix[400],postfix[400];
    int t;
    for(cin>>t;t--;)
    {
    char ch, x;
    int i=0,j=0;
    cin>>infix;
    while((ch=infix[i++]) != '\0'){
        if(isalnum(ch)){
            postfix[j++]=ch;
        }else if(ch == '('){
            push(ch);
        }else if(ch == ')'){
            while((x=pop()) != '(')
                postfix[j++]=x;
        }else{
            while(precedence(s[top])>=precedence(ch) and top!=-1) {
                postfix[j++] =pop();
            }
            push(ch);
        }
    }
    while(top!=-1) {
        postfix[j++] = pop();
    }
    postfix[j]='\0';
    cout<<postfix<<endl;
}
return 0;
}


