#include<iostream>
int main(){
    int n=0,a=4;
    double z=1;
    do {
        n++;
        z/=10;
    }
    while(2*z>z);
    std :: cout<<n<<"\n"<<z<<"\n";
    std:: cout<< a*z;
}