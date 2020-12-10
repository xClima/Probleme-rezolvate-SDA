#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

bool sortare(string s1, string s2){
    
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    
    return s1==s2;
}

int main(){
    string cuvant;
    int verificare=0;
    vector<string>cuv;
    
    while(cin>>cuvant){
        cuv.push_back(cuvant);
    }
    
    for(int i=0;i<cuv.size();i++){
        verificare=0;
        for(int j=0;j<cuv.size();j++){
            
            
                if (sortare(cuv[i], cuv[j])) {
                    verificare ++;
                    
                }
            
        }
        if(verificare==1){
           cout<<cuv[i]<<' ';
        }
    }
    
    
}