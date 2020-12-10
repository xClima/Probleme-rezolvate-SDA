
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<map>

using namespace std;

int main(){
    string text;
    int lungime;
    string aux;
    map<int,string>m;
    vector<string>vec;
    while(cin>>text){
        transform(text.begin(),text.end(),text.begin(),::tolower);
        vec.push_back(text);
    }
    sort(vec.begin(),vec.end());
        for(int i=0;i<vec.size();i++){
        if(m.count(vec[i].size())>0){
            m.find(vec[i].size())->second+=' '+vec[i];
        }else{
        m[vec[i].size()]=vec[i];}
    }

    map<int, string>::iterator it;

    for ( it = m.begin(); it != m.end(); it++ )
    {
        std::cout << it->first  
                  << ": "
                  << it->second <<' '  
                  << std::endl ;
    }
    

}

