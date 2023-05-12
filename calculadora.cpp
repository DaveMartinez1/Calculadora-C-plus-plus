#include <iostream>

int main(){
    int n1, n2, op, resultado;
    std::cout<<"\t--Bienvenidx a la calculadora--\n";
    std::cout<<"\nIngresa el primer numero: ";std::cin>>n1;
    std::cout<<"\nIngresa el segundo numero: ";std::cin>>n2;
    reopcion:
    std::cout<<"\tElige una operacion:\n"<<"\n1. Suma"<<"\n2. Resta";
    std::cout<<"\n3. Multiplicacion"<<"\n4. Division"<<"\n5. Salir";
    std::cout<<"\n: ";std::cin>>op;
    switch (op){
        case 1:
            resultado=n1+n2;
            std::cout<<"\nEl resultado de la suma es "<<resultado<<std::endl;
            break;
        case 2:
            resultado=n1-n2;
            std::cout<<"\nEl resultado de la resta es "<<resultado<<std::endl;
            break;
        case 3:
            resultado=n1*n2;
            std::cout<<"\nEl resultado de la multiplicacion es "<<resultado<<std::endl;
            break;
        case 4:
            resultado=n1/n2;
            std::cout<<"\nEl resultado de la division es "<<resultado<<std::endl;
            break;
        case 5:
            break;
        default:
            std::cout<<"\nError! Opcion invalida"<<std::endl;
            goto reopcion;
            break;
    }
    return 0;
}