#include<iostream>
int main(){
    int n=0,a=4;
    double i=1;
    do {
        n++;
        i*=10;
        std::cout<<i<<" "<<n<<"\n";
    }
    while(i*2!=i);
    std :: cout<<"Number of zeros:"<<n<<"\n"<<"Machine infinity: "<<i<<"\n";

    std:: cout<<i+1<<"\n"; 
    
    std:: cout<<"Multiplying: "<< a*i<<std:: endl;
    std :: cout<<"Adding: "<< a+i;
}