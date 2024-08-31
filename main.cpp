#include <iostream>

using namespace std;

int main()
{
    /*
    //Ejercicio 13
    int n;
    cout << "Ingrese un numero: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        if((n%i)==0){
            cout<<i<<endl;
        }
    }
    */

    /*

    //Ejercicio 14

    for(int i =1;i<=50;i++){
        cout<<i<<"     "<<51-i<<endl;
    }

    */

    /*
    //Ejercicio 15


    int n ,sum = 0;

    do{
        cout<<"Ingrese un numero: ";
        cin>>n;
        sum = sum + n;
    }
    while(n != 0);

    cout<<"El resulta de la sumatoria es: "<<sum;

    */

    /*
    //Ejercicio 16

    int n , cont  = -1;
    float prom = 0 ;

    do{
        cout<<"Ingrese un numero: ";
        cin>>n;

        prom = prom + n;
        cont ++;
    }
    while(n != 0);
    cout<<prom<<"  "<<cont;
    prom = prom / cont;

    cout<<" El promedio de los numeros es: "<<prom;

    */


    /*
    //Ejercicio 17

    int n,max=0;

    while (true){
        cout<<"Ingrese un numero: ";
        cin>>n;
        if(n>max){
            max = n;
        }
        else if(n == 0){
            break;
            }

    }
    cout<<"El numero mayor fue: "<<max;

    */


    /*
    //Ejercicio 18

    int n;
    bool c = false;
    cout<<"Ingrese un numero: ";
    cin>>n;
    for(int i = 1;i<=n;i++){
        if(i*i == n){
            cout<<n<<" es un cuadrado perfecto";
            c = true;
        }
    }
    if (c == false ){
        cout<<n<<" no es un cuadrado perfecto";
    }

    */


    /*
    //Ejercicio 19

    int n, div = 0;
    cout<<"Ingrese un numero: ";
    cin>>n;

    for (int i = 1; i<=n; i ++){
        if (n%i == 0){
            div++
        }
    }

    if(div == 2){
        cout<<n<<" Es un numero primero";
    }
    else{
        cout<<n<<" Es un numero primero";
    }

    */


    //Ejercicio 20
    return 0;
}
