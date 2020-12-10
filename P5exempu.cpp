#include<iostream>
#include<set>
#include<string.h>
#include<algorithm>
int main(){
    std::string s,x;
    std::set<std::string>qwe;
    while(std::cin>>s){
       std::transform(s.begin(), s.end(), s.begin(), ::tolower);
        qwe.insert(s);
    }
    std::cout<<qwe.size();
}