#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iomanip>
using namespace std;
int main()
{
    int b,n;
    cin>>b; // nr elemente din baza de date
    cin>>n; // nr produse achizitionate de client
    int i,j;
    struct Prod {
                    char cod_bare[10];
                    char pc[1]; // p=produs sau c=card
                    float valoare; // val produs sau reducere data de card 
                }   v[100];
                
    for(i=0;i<b;i++)
    {
        cin>>v[i].cod_bare>>v[i].pc>>v[i].valoare;
    }
    
    struct Produse{
                    char produs[10];
                  } a[50];
                
    for(j=0;j<n;j++)
    {
        cin>>a[j].produs;
        //cout<<a[i].produs<<" ";
    }
    //--------------------------------------------------------------------------------
    float reducere=0,suma=0;
    for(i=0;i<b;i++)
    {
        for(j=0;j<n;j++)
        {
            if(strcmp(v[i].cod_bare,a[j].produs)==0)
            {
                //cout<<v[i].cod_bare<<" ";
               if(strcmp(v[i].pc,"c")==0)
                {   
                    reducere=reducere+v[i].valoare;
                    //cout<<reducere;
                }
         
               if(strcmp(v[i].pc,"p")==0)
               {
                    suma=suma+v[i].valoare;
               }
            }
        }
    }
    float final=0;
    final=suma-((reducere/100)*suma);
    cout<<fixed<<setprecision(2)<<final<<endl;
   
}
