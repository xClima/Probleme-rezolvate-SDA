{\rtf1\ansi\deff0\nouicompat{\fonttbl{\f0\fnil\fcharset0 Calibri;}}
{\*\generator Riched20 10.0.17134}\viewkind4\uc1 
\pard\sa200\sl276\slmult1\f0\fs22\lang9 #include<iostream>\par
#include<vector>\par
#include<algorithm>\par
\par
using namespace std;\par
\par
int smallest(int nr)\{\par
    int smallest=10,rez;\par
\par
    if(nr<=9)\{smallest=nr;\par
    \}else \{\par
        while (nr > 0) \{\par
            rez = nr % 10;\par
            if (rez < smallest) \{\par
                smallest = rez;\par
            \}\par
            nr /= 10;\par
        \}\par
    \}\par
    return smallest;\par
\}\par
\par
int highest(int nr)\{\par
    int highest=0,rez;\par
\par
    if(nr<=9)\{highest=nr;\par
    \}else \{\par
        while (nr > 0) \{\par
            rez = nr % 10;\par
            if (rez > highest) \{\par
                highest = rez;\par
            \}\par
            nr /= 10;\par
        \}\par
    \}\par
    return highest;\par
\}\par
\par
bool sortare(int nr1, int nr2)\{\par
    int smallest_nr1=smallest(nr1);\par
    int smallest_nr2=smallest(nr2);\par
    int highest_nr1=highest(nr1);\par
    int highest_nr2=highest(nr2);\par
\par
    if(nr1>nr2)\{return nr1<nr2;\par
    \}else if(highest_nr1>highest_nr2)\{\par
        return highest_nr1<highest_nr2;\par
    \}else if(smallest_nr1>smallest_nr2)\{\par
        return smallest_nr1<smallest_nr2;\par
    \}\par
\}\par
\par
int main()\{\par
    int numere;\par
    vector<int>num;\par
    while(cin>>numere)\{\par
        num.push_back(numere);\par
    \}\par
\par
    sort(num.begin(),num.end(),sortare);\par
\par
    for(int i=0;i<num.size();i++)\{\par
        cout<<num[i]<<' ';\par
    \}\par
    \par
\}\par
}
 