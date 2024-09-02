#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    /*
    //ejercicio 1
    int a,b;
    float c;
    cout <<"Ingrese el numero A\n";
    cin>>a;

    cout <<"Ingrese el numero B\n";

    cin>>b;

    c = a%b;
    cout <<"El residuo de la division es "<< c;

    return 0;
    */

    /*
    //ejercicio 2
    int a;

    cout<<"Ingrese un numero: ";
    cin>>a;

    if (a%2 == 0){
        cout<<a<<" es par";
    }
    else{
        cout<<a<<" Es impar";
    }

    return 0;
    /*

    //ejercicio 3
    float a,b;

    cout<<"Ingrese 2 numeros:\n";
    cout<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;

    if (a>b){
        cout<<a;
    }
    else{
        cout<<b;
    }
    return 0;
    */

    /*

    //ejercicio 4
    float a,b;

    cout<<"Ingrese 2 numeros:\n";
    cout<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;

    if (a>b){
        cout<<b;
    }
    else{
        cout<<a;
    }
    return 0;
    */

    //Ejercicio 6
    /*
    int a,b,c;
    cout<<"Ingrese la base a elevar: ";
    cin>>a;
    cout<<"Ingrese el exponente: ";
    cin>>b;

    if((a==0)&(b==0)){
        cout<<"0^0 es una indeterminacion intente de nuevo";
    }
    else if(b==0){
        c=1;
        cout<<a<<"^"<<b<<"es igual a "<<c;
    }
    else if(b<0){
        b=b*-1;
        c=a;
        for (int i = 1; i < b; i ++){
            c=c*a;
        }
        cout<<a<<"^"<<"-"<<b<<" es igual a "<<"1/"<<c;

    }
    else{
        c=a;
        for (int i = 1; i < b; i ++){
            c=c*a;
        }
        cout<<a<<"^"<<b<<"es igual a "<<c;

    }

    return 0;
    */

    /*
    //Ejercicio 7
    int n,s;
    cout<<"Ingrese un numero: ";
    cin>>n;
    s=(n*(n+1))/2;
    cout<<"La suma desde 0 hasta "<<n<<" es:"<<s;


    return 0;
    */

    //Ejercicio 8
    /*
    int a,b;
    cout<<"Ingrese un numero: ";
    cin>>a;
    b=1;
    for (int i=a; i>=1; i--){
        b=b*i;

    }
    cout<<b;
    */


    //Ejercicio 9
    /*
    float n,p,ar,pi;
    cout<<"Ingrese el radio del circulo: ";
    cin>>n;
    pi=3.1416;
    p=2*pi*n;
    ar=pi*n*n;
    cout<<"El area es "<<ar<<" y el perimetro es "<<p;
    */



    //Ejercicio 10
    /*
    int n,m;
    cout<<"Ingrese un numero: ";
    cin>>n;

    if (n>100 or n<0){
        cout<<"Ingrese un dato valido.";
    }
    else{
        cout<<"Multiplos de "<<n<<" menores que 100 \n";
        for (int i =1;i<100;i++){
            m = n*i;
            if (m > 100){
                i= 101;
            }
            else{
                cout<<m<<"\n";
            }
        }
    }
    */



    //Ejercicio 11
    /*
    int n;
    cout<<"Ingrese un numero: ";
    cin>>n;
    for (int i=1; i<=10; i++){
        cout<<i<<"x"<<n<<"= "<<i*n<<"\n";
    }
    */

    //Ejercicio 12

    /*
     int n,m;
  cout<<"Digite un numero: ";
  cin>>n;
  m=1;
  for (int i=1; i<=5;i++){
      m=m*n;
      cout<< n<<"^"<<i<<"="<<m<<"\n";
  }
    */

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

    int n, divi = 0;
    cout<<"Ingrese un numero: ";
    cin>>n;

    for (int i = 1; i<=n; i ++){
        if (n%i == 0){
            divi++
        }
    }

    if(divi == 2){
        cout<<n<<" Es un numero primo";
    }
    else{
        cout<<n<<" No es un numero primo";
    }

    */


    /*
    //Ejercicio 20

    int n, original = 0, digito = 0,r = 0;
    cout<<"Ingrese un numero:";
    cin>>n;
    original = n;

    while(n>0){
        digito = n % 10;
        r = r*10 + digito;
        n = n /10;
    }

    if(r==original){
        cout<<original<<" es un numero palindromo."<<endl;
    }
    else{
        cout<<original<<" no es un numero palindromo."<<endl;
    }

    */

    /*
    //Ejercicio 21

    char c ;
    cout<<"Ingrese un caracter:"<<endl;
    cin>>c;

    if ((c >= 'A')&&(c <= 'Z')){
        c = c + 32;
    }
    else{
        c = c - 32;
    }
    cout<<"Letra convertida:"<<c;
    */

    /*
    //Ejercicio 22

    int segundos;

    cout << "Ingrese la cantidad de segundos: ";
    cin >> segundos;

    int horas = segundos / 3600;
    int minutos = (segundos % 3600) / 60;
    int seg = segundos % 60;

    cout << horas << ":" << minutos << ":" << seg << endl;
    */

    /*
    //Ejercicio 23

    int A,B,a,b,aux,mcm = 0;
    cout << "Ingrese el primer número: ";
    cin >> a;
    cout << "Ingrese el segundo número: ";
    cin >> b;
    A = a;
    B = b;
    int prod = a*b;

    while (b != 0) {
        aux = b;
        b = a % b;
        a = aux;
    }

    mcm = prod/a;

    cout << "El MCM de " << A << " y " << B << " es: " << mcm << endl;
    */

    /*
    //Ejercicio 24

int main() {
    int tamaño;

    cout << "Ingrese el tamaño del cuadrado: ";
    cin >> tamaño;

    for (int i = 0; i < tamaño; ++i) {
        cout << "+";
    }
    cout << endl;

    for (int i = 0; i < tamaño - 2; ++i) {
        cout << "+";
        for (int j = 0; j < tamaño - 2; ++j) {
            cout << " ";
        }
        cout << "+" << endl;
    }

    if (tamaño > 1) {
        for (int i = 0; i < tamaño; ++i) {
            cout << "+";
        }
        cout << endl;
    }

    */

    /*

    //Ejercicio 25

    int main() {
    int N;

    cout << "Ingrese un número: ";
    cin >> N;

    if (N == 0) {
        cout << "0 tiene 1 dígito." << endl;
        return 0;
    }

    int numero = N;
    int digitos = 0;

    while (numero != 0) {
        numero /= 10;
        digitos++;
    }

    cout << N << " tiene " << digitos << " dígitos." << endl;
    */

    /*
    //Ejercicio 26

int a, b, c;

    cout << "Ingrese el primer lado: ";
    cin >> a;
    cout << "Ingrese el segundo lado: ";
    cin >> b;
    cout << "Ingrese el tercer lado: ";
    cin >> c;

    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        // Determinar el tipo de triángulo
        if (a == b && b == c) {
            cout << "Se forma un triángulo equilátero." << endl;
        } else if (a == b || b == c || a == c) {
            cout << "Se forma un triángulo isósceles." << endl;
        } else {
            cout << "Se forma un triángulo escaleno." << endl;
        }
    } else {
        cout << "Las longitudes ingresadas no forman un triángulo." << endl;
    }
    */

    /*
    //Ejercicio 27

    float a = 0, b = 0, c = 0;
    char car = 0;
    cout << "ingrese el primer valor, el signo de la operacion (+, -, /, *) y  el valor B" << endl;
    cin >> a >> car >> b;

    if(car == '*'){
        c = a * b;
        cout << a << "*" << b << "=" << c << endl;
    }

    else if(car == '+'){
        c = a + b;
        cout << a << "+" << b << "=" << c << endl;
    }

    else if(car == '-'){
        c = a - b;
        cout << a << "-" << b << "=" << c << endl;
    }

    else if(car == '/'){
        c = a / b;
        cout << a << "/" << b << "=" << c << endl;
    }
    else{
        cout << "valor/caracter no valido" << endl;
    }
    */

    /*
    //Ejercicio 28

    int n;
    double pi = 0.0;
    int denominador = 1;
    bool signo = false;

    cout << "Ingrese el numero de elementos usados en la aproximacion: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        if (signo) {
            pi -= 4.0 / denominador;
        } else {
            pi += 4.0 / denominador;
        }
        denominador += 2;
        signo = !signo;
    }

    cout << "pi es aproximadamente: " << pi << endl;
    */

    /*
    //Ejercicio 29

    int main() {
    int min = 0;   // Límite inferior del rango
    int max = 100; // Límite superior del rango
    int ad;      // El número que el programa adivina
    char respuesta;  // Respuesta del usuario ('>', '<', '=')

    cout << "Piensa en un número entre 0 y 100." << endl;

    while (true) {
        ad = (min + max) / 2;
        cout << "¿Es " << ad << " tu número? (responde con '>', '<', '='): ";
        cin >> respuesta;

        if (respuesta == '=') {
            cout << "¡He adivinado tu número! Es " << ad << "." << endl;
            break; // Salir del bucle, se ha adivinado el número
        } else if (respuesta == '>') {
            min = ad + 1; // Si el número es mayor, ajustar el límite inferior
        } else if (respuesta == '<') {
            max = ad - 1; // Si el número es menor, ajustar el límite superior
        } else {
            cout << "Entrada no válida. Por favor, usa '>', '<', o '='." << endl;
        }
    */

    /*
    //Ejercicio 30

int numero = rand() % 101;
    int intento;
    int contador = 0;

    cout << "Adivina el número (entre 0 y 100):" << endl;

    do {
        cin >> intento;
        contador++;

        if (intento > numero) {
            cout << "El número es menor." << endl;
        } else if (intento < numero) {
            cout << "El número es mayor." << endl;
        } else {
            cout << "Adivinaste el número en " << contador << " intentos." << endl;
        }
    } while (intento != numero);

    */


    /*
    //Problema 1
    
    char letra;
    
    cout<<"Ingrese un caracter: ";
    cin>>letra;
    
    if(((letra>='A')&&(letra<='Z'))||(letra>='a')&&(letra<='z')){
        
        if ((letra == 'a') || (letra == 'e') || (letra == 'i') ||
            (letra == 'o') || (letra == 'u')||(letra == 'A') || (letra == 'E') || (letra == 'I') ||
            (letra == 'O') || (letra == 'U')){
            
            cout<<letra<<" es una vocal";
        }
        else{
            cout<<letra<<" es una consonante";
        }
    }
    else{
        cout<<letra<<" no es una letra.";
    }
    */
    

    /*
    //Problema 2
    
    int dinero,residuo,divi;
    cout<<"Ingrese una cantidad de dinero: ";
    cin>>dinero;

    divi =dinero/50000 ;
    cout<<"50000:"<<divi<<endl;
    residuo = dinero%50000;
    divi = residuo/20000;
    cout<<"20000:"<<divi<<endl;
    residuo = dinero%20000;
    divi = residuo/10000;
    cout<<"10000:"<<divi<<endl;
    residuo = dinero%10000;
    divi = residuo/5000;
    cout<<"5000:"<<divi<<endl;
    residuo = dinero%5000;
    divi = residuo/2000;
    cout<<"2000:"<<divi<<endl;
    residuo = dinero%2000;
    divi = residuo/1000;
    cout<<"1000:"<<divi<<endl;
    residuo = dinero%1000;
    divi = residuo/500;
    cout<<"500:"<<divi<<endl;
    residuo = dinero%500;
    divi = residuo/200;
    cout<<"200:"<<divi<<endl;
    residuo = dinero%200;
    divi = residuo/100;
    cout<<"100:"<<divi<<endl;
    residuo = dinero%100;
    divi = residuo/50;
    cout<<"50:"<<divi<<endl;
    divi=dinero%50;
    cout<<"faltante: "<<divi;
    */


    /*
    //Problema 3

    int mes,dia;

    cout<<"Ingrese un dia: ";
    cin>>dia;
    cout<<"Ingrese un mes: ";
    cin>>mes;

    if(mes>12 || mes < 1){
        cout<<mes<<" Es un mes in valido."<<endl;
    }
    else if((mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) && ((dia>=1 )&&(dia <=31 ))){
        cout<<dia<<"/"<<mes<<" Es una fecha valida."<<endl;
    }
    else if((mes == 4 || mes == 6 || mes == 9 || mes == 11) && (dia >= 1 && dia <= 30)){
        cout<<dia<<"/"<<mes<<" Es una fecha valida."<<endl;
    }
    else if((mes == 2)&&(dia>=1 && dia <=28)){
        cout<<dia<<"/"<<mes<<" Es una fecha valida."<<endl;
    }
    else if ((mes == 2)&&(dia == 29) ){
        cout<<dia<<"/"<<mes<<" Es valida en bisiesto."<<endl;
    }
    else{
        cout<<dia<<"/"<<mes<<" Es una fecha invalida."<<endl;
    }
    */

    /*
    //Problema 5

    int n;
    cout << "Ingresa un numero impar: ";
    cin >> n;

    for (int i = 1; i <= n; i += 2) {
        for(int j = 0; j < (n - i) / 2; j++) {
            cout << " ";
        }
        for(int k = 0; k < i; k++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int q = n - 2; q > 0; q -= 2) {
        for(int r = 0; r < (n - q) / 2; r++) {
            cout << " ";
        }
        for(int t = 0; t < q; t++) {
            cout << "*";
        }
        cout << endl;
    }
    */


    /*
    //Problema 6

    float factorial ( int num ){
        int b;
        b=1;
        for (int i=num; i>=1; i--){
            b=b*i;

        }
        return b;
    }

    int main()
    {

        float e = 0;
        float fact,n;

        cout<<"Ingrese un numero: ";
        cin >>n;
        for (int i = 0;i<=n-1;i++){
            e = e + 1/ factorial(i);
        }

        cout<< "e es aproximadamente:" << e;

        return 0;
    }
    */

    /*
    //Problema 7

    int tercer,n,primer = 1,seg = 1, sum = 0;
    cout<<"Ingrese un numero:";
    cin>>n;

    while(true){

        tercer = primer + seg;
        if(tercer>=n){
            break;
        }
        if(tercer%2 == 0){
            sum = sum + tercer;
        }
        primer = seg;
        seg = tercer;
    }

    cout<<"El resultado de la suma es:"<<sum;
    return 0;
    */

    /*
    //Problema 8

    int suma,a,b,c;
    cout<<"Ingrese un numero a: "<<endl;
    cin>>a;
    cout<<"Ingrese un numero b: "<<endl;
    cin>>b;
    cout<<"Ingrese un numero c: "<<endl;
    cin>>c;

    for (int i = a; i < c;i+=a ){
        suma = suma + i;
    }

    for (int j =b; j<c;j += b ){
        if(j%a != 0){
            suma = suma + j;
        }
    }
    cout << "El resultado de la suma es: " << suma;

    */

    /*

    //Problema 9

    int potencia(int num){

        int resultado = num;

        for(int i = 1; i< num;i++){
            resultado = num*resultado;
        }
        return resultado;
    }


    int main()
    {
        int digito,n,suma = 0;
        cout<<"Ingresa un numero: ";
        cin>>n;

        while(n>0){
            digito = n % 10;
            suma = suma + potencia(digito);
            n = n /10;
        }

        cout << "El resultado de la suma es: " << suma << endl;
        return 0;
    }
    */

    /*
    //Problema 10
    int primo(int n){
        int divi = 0;
        for (int i = 1; i<=n; i ++){
            if (n%i == 0){
                divi++;
            }
        }

        if(divi == 2){
            return true;
        }
        else{
            return false;
        }
    }
    int main()
    {
        int n,cont = 0,i = 0;
        cout<<"Ingrese un numero:"<<endl;
        cin>>n;

        while (true){
            if(primo(i)){
                cont ++;
            }
            if (cont == n){
                cout<<"El primo numero " <<n<<" es: "<<i;
                break;
            }
            i ++;
        }
    */

    /*
    
    //Problema 11

    int MCD(int a, int b){
        int aux = 0;
        while(b!=0){
            aux = b;
            b = a % b;
            a = aux;
        }
        return a;
    }

    int MCM(int a, int b){
        return (a*b)/MCD(a,b);
    }


    int main()
    {
        int mcm = 1,n;

        cout<<"Ingrese un numero:";
        cin>>n;

        for(int i = 2 ; i<=n;i++){
            mcm = MCM(mcm, i);
        }

        cout << "El minimo comun multiplo es: " << mcm << endl;

        return 0;
    }

    */

    /*
    //Problema 12
    int n,mayor = 0;
    cout<<"Ingrese un numero:";
    cin>>n;

    for (int i = 1;i < n; i ++){
        if((n%i == 0)&&(i > mayor)){
            mayor = i;
        }
    }
    cout<<"El mayor factor primo de "<<n<<" es:" <<mayor;

    */

    /*
     //Problema 13

bool primo(int a){
    int cont = 0;
    for (int j =1 ; j<= a; j ++){
        if (a % j == 0){
            cont += 1;
        }
    }
    if(cont!=2){
        return false;
    }
    else{
        return true;
    }
}
int main()
{
    int n,sum = 0;
    cout<<"Ingrese un numero:";
    cin >>n;

    for(int i = 0;i<n;i ++){
        if(primo(i)== true){
            sum = sum + i;
        }
    }

    cout<<"El resultado de la suma es:"<<sum;

    return 0;
}
*/

    /*
    //Problema 16

    int len(int n) {
        int longitud = 1;
        while (n != 1) {
            if (n % 2 == 0) {
                n = n / 2;
            } else {
                n = 3 * n + 1;
            }
            longitud++;
        }
        return longitud;
    }

    void imprimir(int n) {
        while (n != 1) {
            cout << n << ", ";
            if (n % 2 == 0) {
                n = n / 2;
            } else {
                n = 3 * n + 1;
            }
        }
        cout << "1" << endl;
    }

    int main() {
        int k;
        cout << "Ingrese un número k: ";
        cin >> k;

        int max = 0;
        int semilla = 0;

        for (int j = 1; j < k; j++) {
            int longitudActual = len(j);
            if (longitudActual > max) {
                max = longitudActual;
                semilla = j;
            }
        }


        cout << "La serie más larga es con la semilla: " << semilla << ", teniendo " << max << " términos." << endl;
        cout << "La serie es: ";
        imprimir(semilla);

        return 0;
    */

    /*
    //Problema 17

    int contarDivisores(int n) {
        int count = 0;
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                count ++;
            }
        }
        return count;
    }

    int main() {
        int k;
        cout << "Ingrese un número k: ";
        cin >> k;

        int n = 1;
        int numeroTriangular = 0;
        while (true) {
            numeroTriangular = n * (n + 1) / 2;
            int divisores = contarDivisores(numeroTriangular);

            if (divisores > k) {
                break;
            }
            n++;
        }

        cout << "El primer número triangular con más de " << k << " divisores es: " << numeroTriangular << endl;

        return 0;
    }
    */

    return 0;
}
