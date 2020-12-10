

#include<stack>
#include<iostream>
#include<cctype>
#include<cstdio>
using namespace std;

using std::stack;

void printStack(stack<char>s){
    while(!s.empty()){
        printf("%c",s.top());
        s.pop();
    }
}

bool vocala(char ch){
    ch=tolower(ch);
    switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': return true;
        default: return false;
    }
}

int main(){
    char ch;
    stack<char>c;
    stack<char>v;
    while(EOF!=scanf("%c",&ch)){
        if(!isalpha(ch))continue;
        if(vocala(ch)) v.push(ch);
        else c.push(ch);
    }
    while(!v.empty()&&!c.empty()){
        printf("%c%c",v.top(),c.top());
        
        c.pop();
        v.pop();
        
    }
    
    printStack(v);
    printStack(c);
    return 0;
}