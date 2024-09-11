#include<iostream>
int main(){
    int n=0,a=4;
    double e=1;
    do {
        n++;
        e/=10;
    }
    while(1+e!=1);
    std :: cout<<n<<"\n"<<e<<"\n";
    std:: cout<< a+e;
}