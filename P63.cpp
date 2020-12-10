#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<map>

using namespace std;

int main(){
    string anim;
    int n,i;
    string def;
    vector<pair<string,string>>v;
    map<string,string>m;
    cin>>n;
    getline(cin,def);

    for(i=0;i<n;i++){
        getline(cin,anim,',');
        getline(cin,def);
        m[anim]=def;
    }


    map<string, string>::iterator it;

    for ( it = m.begin(); it != m.end(); it++ )
    {
         anim=it->first;
         def=it->second;
        v.push_back(make_pair(anim,def));
    }

    sort(v.begin(),v.end());
    for(i=0;i<v.size();i++){
        cout<<v[i].first<<": "<<v[i].second<<endl;
    }

}
