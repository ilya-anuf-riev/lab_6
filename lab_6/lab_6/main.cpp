
#include <iostream>
using namespace std;


int main() {
    int c = 0;
    int x;
    cout<<"Введите число = ";
    cin>>x;
    
    if(x==1) {
        cout<<"Один"<<endl;
        c+=1;
    }
    if(x==2) {
        cout<<"Два"<<endl;
        c+=1;
    }
    if(x==3) {
        cout<<"Три"<<endl;
        c+=1;
    }
    try{
        if(x<1){
            throw "Некорректное значение";
        }
        if(x>3){
            throw "Некорректное значение";
        }
    }
    catch(const char* s){
        cout<<s<<endl;
    }
    
    cout<<"-------------------------------------------------------------------------------"<<endl;
    
    int g;
    cout<<"Введите год своего рождения = ";
    cin>>g;
    if(g>1850 & g<=2022){
        c+=1;
    }
    try{
        if(g<1850 & g>0)
        {
            throw "Что-то не верится...";
        }
        if(g>2022)
        {
            throw "Вы ещё не родились";
        }
        if(g<0)
        {
            throw "Вы ввели отрицательное число";
        }
    }
    catch(const char* m){
        cout<<m<<endl;
    }
    cout<<"-------------------------------------------------------------------------------"<<endl;
    if(c==2)
    {
        cout<<"Спасибо"<<endl;
    }
    return 0;
}
