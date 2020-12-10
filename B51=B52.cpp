#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    int nr;
    vector<int>vec;
    vector<int>cauta;
    int cnt=0,aux=0;
    
    cin>>n;
    while(cin>>nr)
        {
        vec.push_back(nr);
    }
    
    while(n>=0){
        cauta.push_back(n);
        n--;
    }
    
    for(int i=0;i<cauta.size();i++){
        for(int j=0;j<vec.size();j++){
            if(cauta[i]==vec[j]){
                aux=1;
            }
            
        }
        if(aux==0){
            cnt++;
            
        }
        aux=0;
    }
    cout<<cnt;
}



//Varianta 2:

#include<iostream>
#include<set>
using namespace std;
int main(){
    int n,nr;
    cin>>n;
    set<int>s1;
    set<int>s2;
    while(cin>>nr){
        s1.insert(nr);
    }
    for(int i=0;i<=n;i++){
        s2.insert(i);
    }
    cout<<s2.size()-s1.size();
}