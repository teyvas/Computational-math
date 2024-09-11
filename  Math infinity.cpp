#include<iostream>
int main(){
    int n=0,a=4;
    double i=1;
    do {
        n++;
        i*=10;
    }
    while(i*2!=i);
    std :: cout<<n<<"\n"<<i<<"\n";
    std:: cout<< a*i<<std:: endl;
    std :: cout<< a+i;
}