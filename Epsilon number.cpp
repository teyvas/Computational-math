#include<iostream>
#include <limits>
#include <iomanip>
int main(){
    int n=0,a=4;
    float pi = 22.0/7.0;
    std:: cout<<std:: fixed<<std:: setprecision(std::
                numeric_limits<double>::max_digits10) << pi<<"\n";
    double e=1;
    std:: cout<<"Size of float: "<<sizeof(float)<<"\n";
    bool check=false;
    do {
        n++;
        e/=10.0;
        std:: cout<<n<<" "<<e;
        std::cout<< std::endl;
        if(1+e==1) check=1;
        else check=0;
        std:: cout<< check<<"\n";
    }
    while(1+e!=1);
    std :: cout<<"Number of zeros: "<<n<<"\n"<<"Epsilon: "<<e<<"\n";
    std:: cout<<"Evidience:"<< a+e;
}