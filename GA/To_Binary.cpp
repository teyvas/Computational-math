#include <iostream>
#include<vector>
#include<algorithm>
int main(){
    double dec;
    std:: vector<int> whole;
    std:: vector <int> frac;
    std:: cin>>dec;
    int count=0;
    int n;
    std:: cin>>n;
    int decw=dec;
    double decf=dec-decw;
    //std:: cout<<decw<<" "<<decf<<"\n";
    if(decw==0){
        whole.push_back(0);
    }
    else{
        while (decw>0){
            whole.push_back(decw%2);
            decw/=2;
           
        }
    }
    reverse(whole.begin(), whole.end());
    std:: cout<<"Whole part: ";
    for(int e : whole){
        std:: cout<<e;
    }
    std::cout<<"\n";

    bool b=true;
    int zeros=0, ones=0;

    while(decf>0 and count<n){
        decf*=2; 
        if(decf<1){
            frac.push_back(0);
            zeros++;
        }
        else{
            frac.push_back(1);
            decf-=1;
            ones++;
        }
        count++;
        if(count==n and frac.back()==0){
            count--;
        }
    }








    std:: cout<<"Fraqonal part: ";
    for(int e : frac){
        std:: cout<<e;
    }
    
}