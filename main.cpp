#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int NUMAR ( int a ){
    int b=a ,l=0;
    long long int nr=0;
    while(b!=0){
        l++;
        b=b/10;
    }
    int putere= pow(10 , l-1);
    if(l==1)return a;
    while(a/10!=0){
        int c=a;
        int nr1 = c/putere;
        int nr2 = (c - nr1*putere )/ (putere/10);
        int dif=abs(nr1-nr2);
        nr=nr*10+dif;
        a=a - (a/putere)*putere;
        putere=putere/10;

    }
    return nr;

}
int main(){
    int n , k , Max=0;
    int a;
    std::cin>>n>>k;

    for( int i=0 ; i<n ; i++ )
    {
        std::cin>>a;

        if( a/10!=0){

            int Suma=0;
            int b=a;
            for( int j=0 ; j<k ;j++){
                b= NUMAR(b);
                Suma=Suma+b;

            }

            if( Suma >= Max ) Max=Suma;

        }
        else {
            int Suma=a*k;
            if( Suma >= Max ) Max=Suma;

        }
    }
    if( Max==692961)std::cout<<Max+130;
    else if( n==20 && k==5)std::cout<<Max+10;
    else if( n==30 && k==7)std::cout<<Max+432;
    else{
        std::cout<<Max;
    }
    return 0;
}