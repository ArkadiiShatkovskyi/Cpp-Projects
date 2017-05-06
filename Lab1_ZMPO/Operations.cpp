#include "Operations.h"
#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <strstream>

using namespace std;

Operations::Operations(char* licz1){
        readN1=licz1;
}

void Operations:: sum(char* liczb2){
        bool root=false;
        char* readN2=liczb2;
        std:: cout << "\nDodawanie: " << endl;
        
        int x=strlen(readN1);
        int y=strlen(readN2);
        
        int i,j;
        for(i=0,j=0;i<x,j<y;i++,j++){
            if(readN1[i]=='p' || readN2[j]=='p'){
                root=true;
                std:: cout << "Nie ma mozliwosci dodania pierwiastkow!"<<endl;
            }
        }
        
        if(!root){
            
        int* number1=new int[x];
        int* number2=new int[y];
        
        int size=x>y?x+1:y+1;
        //jaka dlugosc wyniku
        int* result=new int[size];//indeks na ostatni element 
        
        for(int i=0;i<x;i++){     //odwracamy liczby 
            number1[x-i-1]=readN1[i]-48;
        }
        for(int i=0;i<y;i++){
            number2[y-i-1]=readN2[i]-48;
        }
        
        //dopisujemy zera jezeli jezeli zakas liczba wieksza
        if(x>y){
            number1[x]=0;
            while(x>y){
                number2[y]=0;
                ++y;
            }
        }
        else{
            number2[y]=0;
            while(y>x){
                number1[x]=0;
                ++x;
            }
        }
        
        for(int i=0;i<(x+1);i++){
            if((number1[i]+number2[i])<10){
                result[i]=number1[i]+number2[i];
            }
            else{
                result[i]=(number1[i]+number2[i])%10;
                number1[i+1]+=1;
            }
        }
        
        std::cout << "Wynik: ";
        bool flag =false;
        for(int n=size;n>=0;--n){
            if(result[n]!=0)
                flag=true; 
            if(flag)
                std:: cout << result[n];
        }
        if(!flag)
            cout << 0;
        }
}

void Operations:: subst(char* liczb2){
        bool root=false;
        char* readN2=liczb2;
        std:: cout << "\nOdejmowanie: " << endl;
        
        int x=strlen(readN1);
        int y=strlen(readN2);
        
        int i,j;
        for(i=0,j=0;i<x,j<y;i++,j++){
            if(readN1[i]=='p' || readN2[j]=='p'){
                root=true;
                std:: cout << "Nie ma mozliwosci odejmowania pierwiastkow!"<<endl;
            }
        }
        
        if(!root){
        int* number1=new int[x];
        int* number2=new int[y];
    
        for(int i=0;i<x;i++){     //odwracamy liczby 
            number1[x-i-1]=readN1[i]-48;
        }
        for(int i=0;i<y;i++){
            number2[y-i-1]=readN2[i]-48;
        }
        
        //dopisujemy zera jezeli jezeli ktoras liczba wieksza
        if(x>y){
            number1[x]=0;
            while(x>y){
                number2[y]=0;
                ++y;
            }
        }
        else if(y>x){
            number2[y]=0;
            while(y>x){
                number1[x]=0;
                ++x;
            }
        }
        
        bool sign=false;        //znak wyniku true - ujemna licz.
        if(x==y){
            for(int i=0;i<x;i++){
                if(number1[x-i]-number2[y-i]>0)
                    sign=false;
                if(number1[x-i]-number2[y-i]<0)
                    sign=true;
            }
        }
        
        int size=x>y?x+1:y+1;
        //jaka dlugosc wyniku
        int* result=new int[size];//indeks na ostatni element 
        int k=size-1;
        int i,j;
        if(!sign){ //jezeli wynik dodatni
                for(i=0,j=0;i<x,j<y;i++,j++){
                   if((number1[i]-number2[j])>=0){
                      result[k]=number1[i]-number2[j];
                   }
                   else{
                      result[k]=(number1[i]+10)-number2[j];
                      number1[i+1]-=1;
                      //result[k+1]+=1;
                   }
                --k;
               }
        }
        else{
                for(i=0,j=0;i<x,j<y;i++,j++){
                   if((number2[j]-number1[i])>=0){
                      result[k]=number2[j]-number1[i];
                   }
                   else{
                      result[k]=(number2[j]+10)-number1[i];
                      number2[j+1]-=1;
                      //result[k+1]+=1;
                   }
                --k;
               } 
        }
        std::cout << "Wynik: ";
        
        if(sign){ std:: cout << "-";}
        bool flag =false;
        for(int n=0;n<size;n++){
            if(result[n]!=0)
                flag=true; 
            if(flag)
                std:: cout << result[n];
        }
        if(!flag)
            cout << 0;
        }
}

void Operations:: multipl(char* liczb2){
        bool root=false;
        bool root2=false;  //flaga jezeli dwie liczby sa pierwiaski
        char* readN2=liczb2;
        std:: cout << "\nMnozenie: " << endl;
        
        int x=strlen(readN1);
        int y=strlen(readN2);
        
        int w,s;
        for(w=0,s=0;w<x,s<y;w++,s++){
            if((readN1[w]=='p' && readN2[s]!='p') || (readN1[w]!='p' && readN2[s]=='p')){
                root=true;
                std:: cout << "Nie ma mozliwosci mnozenie liczby razy pierwiastek!"<<endl;
            }
            if(readN1[w]=='p' && readN2[s]=='p')
                    root2=true;
        }
        
        if(!root){
        int* number1=new int[x];
        int* number2=new int[y];
        int size=x+y+1;
        int* result=new int[size];
        
        int a=0;//indeksy dla dwoch liczb
        int b=0;
        int p=x;
        int q=y;
        
        if(root2){
            for(int i=0;i<x;i++){
               if((readN1[i]-48)=='p')
                   readN1[i]=0;
            }
            for(int i=0;i<y;i++){
                if((readN2[i]-48)=='p')
                   readN2[i]=0;
            }
        }
        
        for(int i=0;i<x;i++){
            //if((readN1[i]-48)!='p'){
               number1[x-i-1]=readN1[i]-48;
               ++a;
            //}
        }
       
        for(int i=0;i<y;i++){
            if((readN2[i]-48)!='p'){
               number2[y-i-1]=readN2[i]-48;
               ++b;
            }
        }
        //zapelniamy result zerami
        for(int i=0;i<size;i++){
            result[i]=0;
        }
        
        int ind=0;
        
        for(int i=0;i<y;i++){
            for(int j=0;j<x;j++){
                result[j+ind]+=number1[j]*number2[i];
            }
            ++ind;
        }
        
        //uzupelniamy
        for(int i=0;i<size;i++){
            int a=result[i]%10;
            int b=result[i]/10;
            if(b>=1){
                //std::cout<<"[i: "<<i<<", b: "<<b<<", a: "<<a<<" ]";
               result[i]=a;
               result[i+1]+=b;
            }
        }
        
        std::cout << "Wynik: ";
        if(root2){
            std::cout<<"p: ";
        }
        bool flag =false;
        for(int n=size-1;n>=0;--n){
            if(result[n]!=0)
                flag=true; 
            if(flag)
                std:: cout << result[n];
        }  
        }
}





