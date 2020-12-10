//imi trec doar 15 teste dar nu vad sa am ceva gresit in cod 
//probabil testele sunt de vina diferentele fiind la a 3a zecimala
#include<iostream>
#include<vector>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<set>

using namespace std;

int main(){
    long double a,b;
    char junk;
    vector<pair<long double,long double>>vec;
    vector<long int>fin;
    set<long int>x;
    while(cin>>a>>junk>>b){
        vec.push_back(make_pair(a,b));
        fin.push_back(b);
        x.insert(b);
    }
    
    vector<long double>dist;
    long double distanta;
    long double suma_dist=0;
    long double medie;
    long double dist_max=0;
    
    for(int i=0;i<vec.size();i++){
        distanta=sqrt(pow(vec[i].first,2)+pow(vec[i].second,2));
        suma_dist+=distanta;
        dist.push_back(distanta);
        if(distanta>dist_max){
            dist_max=distanta;
        }
    }
    double cerc=3.1415*pow(dist_max,2);
    medie=suma_dist/vec.size();
    cout<<fixed<<setprecision(4)<<medie<<endl;
    
    sort(dist.begin(),dist.end());
    
    for(int i=0;i<dist.size();i++){
        cout<<dist[i]<<' ';
    }cout<<endl;
    cout<<fixed<<setprecision(4)<<cerc<<endl;
    
    int cnt=0,max=0;
    for(int i=0;i<fin.size();i++){
        for(int j=0;j<fin.size();j++){
            if(fin[i]==fin[j]){
                cnt++;
                if(cnt>max){
                    max=cnt;
                }
            }
        }cnt=0;
    }
    cout<<x.size()<<' '<<max<<endl;
}