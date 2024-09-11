#include<iostream>
int main(){
    int n=0,a=4;
    int i=1;
    do {
        n++;
        std::cout<<i<<" "<<n<<"\n";
    }
    while(n<=49);
    

    std:: cout<<i+1<<"\n"; 
    std :: cout<<"Number of zeros:"<<n<<"\n"<<"Machine infinity: "<<i<<"\n";
    std:: cout<<"Multiplying: "<< a*i<<std:: endl;
    std :: cout<<"Adding: "<< a+i;
}