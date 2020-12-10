#include <iostream>
#include <string>
using namespace std;

int main(){
    string aux;
    string p;
   std::cin>>p;
    while(std::cin>>aux){
        if(p.compare(aux)>0){p=aux;     
            
        }
    }
    cout<<p;
    return 0;
}


Alta rezolvare:
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    vector<string>text;
    string aux;
    string out;
    
    while(cin>>aux){
        text.push_back(aux);
    }
    out=text[0];
    for(int i=0;i<text.size();i++){
        if(out>text[i]){
            out=text[i];
        }
    }
    cout<<out;

}
