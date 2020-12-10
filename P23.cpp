#include <iostream>
#include <string>
#include <cmath>
using namespace std;
class Complex{float real; float imaginar;
public:

Complex(float r,float i){
    real=r;
    imaginar=i;
}
float getReal(){return real;}
float getImaginar(){return imaginar;};
Complex(){
    real=0;
    imaginar=0;
}
double norm(){
    return sqrt((real*real)+(imaginar*imaginar));
}

};

int main(){
    int n,i;
    scanf("%d",&n);
    float x,y;
    float  modulMinim=1000;
    Complex nr;
    for(i=0;i<n;i++){scanf("%f, %f", &x , &y);
    Complex p(x,y);
    
    if(p.norm()<modulMinim){
        modulMinim=p.norm();
        nr=p;
    }}
    printf("%.1f %.1f",nr.getReal(),nr.getImaginar());
    return 0;
    
    }
