#include <iostream>
using namespace std;
int main(){

    /*Estructura de control: bucles for
    Desarrolla un programa que imprima los números pares del 2 al 20
    */
   
    for (size_t i = 2; i <=20; i++){
        
        if(i%2==0){
            cout<<i<<" "<<endl;
        }
    }
    
    
    return 0;
}