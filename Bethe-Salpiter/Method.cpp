#include<iostream>
#include<cmath>
#include <time.h> 
#include <cstdlib> 
int main(){

    srand (time(0));
    long double f ;
    long double b=3*(M_PI/2),a=M_PI;
    long long n=1000000;
    long double I=0; int k=0;
    do{
        long double r=(b-a)*(((double)(rand() % 100000000) + 1) / 100000001)+a;
        f=sin(r);
        I+=f*r; 
        k++;
    }
    while(k<=n);
    std:: cout<<(I/k);

}