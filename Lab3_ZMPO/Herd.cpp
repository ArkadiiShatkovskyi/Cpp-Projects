#include "Herd.h"
#include <string>
#include <iostream>
#include <list>
#include <cstring>

Herd::Herd(){
    this->voice="";
}

Herd::Herd(std::string voice){
    this->voice=voice;
}

std::string Herd::get_voice(){
    return voice;
}

Herd operator +(Herd a,Herd b){
    std::string s=a.get_voice()==""?b.get_voice():a.get_voice()+" "+b.get_voice();
    return Herd(s);
}

Herd operator+(Herd a,Cat* b){
    std::string s=a.get_voice()==""?b->get_voice():a.get_voice()+" "+b->get_voice();
    return Herd(s);
}

Herd operator+(Herd a,Dog* b){
    std::string s=a.get_voice()==""?b->get_voice():a.get_voice()+" "+b->get_voice();
    return Herd(s);
}
       
Herd operator+(Herd a,Sheep* b){
    std::string s=a.get_voice()==""?b->get_voice():a.get_voice()+" "+b->get_voice();
    return Herd(s);
}
       
Herd operator+(Herd a,Crow* b){
    std::string s=a.get_voice()==""?b->get_voice():a.get_voice()+" "+b->get_voice();
    return Herd(s);
}
       
Herd operator+(Herd a,Cow* b){
    std::string s=a.get_voice()==""?b->get_voice():a.get_voice()+" "+b->get_voice();
    return Herd(s);
}

Herd operator-(Herd a,Herd b){
    if(a.get_voice()==b.get_voice()){
        return Herd();
    }
    else{
       std::string words_a[15];
       std::string words_b[15];
       std::string a1=a.get_voice();
       std::string b1=b.get_voice();
       
       std::string hl="";//pomocniczy string
       char* s1=new char[a1.size()+1];
       std::copy(a1.begin(),a1.end(),s1);
       s1[a1.size()] = '\0';
       int index=0;
       for(int i=0;i<a1.size();i++){
           if(s1[i]==' ' && hl!=""){
               words_a[index]=hl;
               ++index;
               hl="";
           }
           else{
               hl+=s1[i];
           }     
       }
       delete[] s1;
       
       hl="";
       char* s2=new char[b1.size()+1];
       std::copy(b1.begin(),b1.end(),s2);
       s2[b1.size()] = '\0';
       index=0;
       for(int i=0;i<b1.size();i++){
           if(s2[i]==' '){
               words_b[index]=hl;
               ++index;
               hl="";
           }
           else{
               hl+=s2[i];
           }     
       }
       
       delete[] s2;
       
       for(int i=0;i<15;i++){
           for(int j=0;j<15;j++){
               if(words_a[i]==words_b[j]){
                   words_a[i]="0";
               }
           }
       }
       std::string result="";
       for(int i=0;i<15;i++){
           if(words_a[i]!="0")
             result+=words_a[i]+" ";
       }
       return Herd(result);
    }
}

Herd operator-(Herd a,Cat* b){
    if(a.get_voice()==b->get_voice()){
        return Herd();
    }
    else{
       std::string words_a[15];
       std::string a1=a.get_voice();
       
       std::string hl="";//pomocniczy string
       char* s1=new char[a1.size()+1];
       std::copy(a1.begin(),a1.end(),s1);
       s1[a1.size()] = '\0';
       int index=0;
       for(int i=0;i<a1.size();i++){
           if(s1[i]==' ' && words_a[index]!=""){
               ++index;
           }
           else if(s1[i]!=' '){
               words_a[index]+=s1[i];
           }    
       }
       delete[] s1;  
       
       int element_to_delete=-1;
       for(int i=0;i<15;i++){
           if(words_a[i]==b->get_voice()){
               element_to_delete=i;
           }
       }
       if(element_to_delete!=-1)
           words_a[element_to_delete]="0";
       
       std::string result="";
       for(int i=0;i<15;i++){
           if(words_a[i]!="0")
             result+=words_a[i]+" ";
       }
       return Herd(result);
    }
}

Herd operator-(Herd a,Crow* b){
    if(a.get_voice()==b->get_voice()){
        return Herd();
    }
    else{
       std::string words_a[15];
       std::string a1=a.get_voice();
       
       std::string hl="";//pomocniczy string
       char* s1=new char[a1.size()+1];
       std::copy(a1.begin(),a1.end(),s1);
       s1[a1.size()] = '\0';
       int index=0;
       for(int i=0;i<a1.size();i++){
           if(s1[i]==' ' && words_a[index]!=""){
               ++index;
           }
           else if(s1[i]!=' '){
               words_a[index]+=s1[i];
           }    
       }
       delete[] s1;  
       
       int element_to_delete=-1;
       for(int i=0;i<15;i++){
           if(words_a[i]==b->get_voice()){
               element_to_delete=i;
           }
       }
       if(element_to_delete!=-1)
           words_a[element_to_delete]="0";
       
       std::string result="";
       for(int i=0;i<15;i++){
           if(words_a[i]!="0")
             result+=words_a[i]+" ";
       }
       return Herd(result);
    }
}

Herd operator-(Herd a,Dog* b){
    if(a.get_voice()==b->get_voice()){
        return Herd();
    }
    else{
       std::string words_a[15];
       std::string a1=a.get_voice();
       
       char* s1=new char[a1.size()+1];
       std::copy(a1.begin(),a1.end(),s1);
       s1[a1.size()] = '\0';
       int index=0;
       for(int i=0;i<a1.size();i++){
           if(s1[i]==' ' && words_a[index]!=""){
               ++index;
           }
           else if(s1[i]!=' '){
               words_a[index]+=s1[i];
           }    
       }
       delete[] s1;  
       
       int element_to_delete=-1;
       for(int i=0;i<15;i++){
           //std::cout<<"[i:"<<i<<" "<<words_a[i]<<"]";
           if(words_a[i]==b->get_voice()){
               element_to_delete=i;
           }
       }
       if(element_to_delete!=-1)
           words_a[element_to_delete]="0";
       
       std::string result="";
       //std::cout<<"\n";
       for(int i=0;i<15;i++){
          // std::cout<<"[i:"<<i<<" "<<words_a[i]<<"]";
           if(words_a[i]!="0")
             result+=words_a[i]+" ";
       }
       return Herd(result);
    }
}

Herd operator-(Herd a,Sheep* b){
    if(a.get_voice()==b->get_voice()){
        return Herd();
    }
    else{
       std::string words_a[15];
       std::string a1=a.get_voice();
       
       std::string hl="";//pomocniczy string
       char* s1=new char[a1.size()+1];
       std::copy(a1.begin(),a1.end(),s1);
       s1[a1.size()] = '\0';
       int index=0;
       for(int i=0;i<a1.size();i++){
           if(s1[i]==' ' && words_a[index]!=""){
               ++index;
           }
           else if(s1[i]!=' '){
               words_a[index]+=s1[i];
           }    
       }
       delete[] s1;  
       
       int element_to_delete=-1;
       for(int i=0;i<15;i++){
           if(words_a[i]==b->get_voice()){
               element_to_delete=i;
           }
       }
       if(element_to_delete!=-1)
           words_a[element_to_delete]="0";
       
       std::string result="";
       for(int i=0;i<15;i++){
           if(words_a[i]!="0")
             result+=words_a[i]+" ";
       }
       return Herd(result);
    }
}

Herd operator-(Herd a,Cow* b){
    if(a.get_voice()==b->get_voice()){
        return Herd();
    }
    else{
       std::string words_a[15];
       std::string a1=a.get_voice();
       
       std::string hl="";//pomocniczy string
       char* s1=new char[a1.size()+1];
       std::copy(a1.begin(),a1.end(),s1);
       s1[a1.size()] = '\0';
       int index=0;
       for(int i=0;i<a1.size();i++){
           if(s1[i]==' ' && words_a[index]!=""){
               ++index;
           }
           else if(s1[i]!=' '){
               words_a[index]+=s1[i];
           }    
       }
       delete[] s1;  
       
       int element_to_delete=-1;
       for(int i=0;i<15;i++){
           if(words_a[i]==b->get_voice()){
               element_to_delete=i;
           }
       }
       if(element_to_delete!=-1)
           words_a[element_to_delete]="0";
       
       std::string result="";
       for(int i=0;i<15;i++){
           if(words_a[i]!="0")
             result+=words_a[i]+" ";
       }
       return Herd(result);
    }
   }
    
    Herd operator*(Herd a,int b){
        if(b<=0){
            return a;
        }
        else{
       std::string words_a[15];
       std::string a1=a.get_voice();
       std::string hl="";//pomocniczy string
       char* s1=new char[a1.size()+1];
       std::copy(a1.begin(),a1.end(),s1);
       s1[a1.size()] = '\0';
       int index=0;
       for(int i=0;i<a1.size();i++){
           if(s1[i]==' ' && words_a[index]!=""){
               ++index;
           }
           else if(s1[i]!=' '){
               words_a[index]+=s1[i];
           }    
       }
       delete[] s1;
       
       std::string r;
       for(int i=0;i<15;i++){
           for(int j=0;j<b;j++)
            r+=words_a[i]+" ";
       }
       return Herd(r);
      }
    }
    
    
    void Herd::set_voice(std::string s){
        this->voice=s;
    }
    
    Herd operator*(Herd a,double b){
        int r=(int)b;
        if(b<=0){
            return a;
        }
        else{
           std::string words_a[15];
           for(int i=0;i<15;i++){
               words_a[i]="0";
           }
           std::string a1=a.get_voice();
           std::string hl="";//pomocniczy string
           char* s1=new char[a1.size()+1];
           std::copy(a1.begin(),a1.end(),s1);
           s1[a1.size()] = '\0';
           int index=0;
           for(int i=0;i<a1.size();i++){
             if(s1[i]==' ' && words_a[index]!=""){
               ++index;
             }
             else if(s1[i]!=' '){
               if(words_a[index]=="0")
                   words_a[index]=s1[i];
               else
               words_a[index]+=s1[i];
             }    
           }
           delete[] s1;
           
           std::string s;
           for(int i=0;i<15;i++){
               if(words_a[i]!="0")
                 s+=words_a[i]+" ";
           }
           return Herd(s+s);
        }
    }

