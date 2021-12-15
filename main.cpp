#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{

    unsigned short num;
    int N, total1, X;
    int num1, num2, entero;
    bool primo = true;
    long double N1,N2;
    long long pot=0,i=1;
    float pi=3.1416;
    int n,cont=0;

    cout << "Ingrese el numero del problema a ejecutar: ";
    cin >> num;

    switch (num) {
      case 1:
        cout << "ingrese primer numero: ";
        cin >> num1;
        cout << "ingrese segundo numero: ";
        cin >> num2;
        cout << "El residuo de la divion es: " << num1%num2  << endl;

      break;

 //----------------------------------------------------------
      case 2:
        cout << "Ingrese un numero: ";      //Solo imprime
        cin >> N;                           //Solo recibe datos
        if (N%2==0) cout << "Es par ";
        else cout << "Es impar ";

      break;
//----------------------------------------------------------
      case 3:

          cout << "Ingrese un primer numero: ";
          cin >> num1;
          cout << "Ingrese un segundo  numero: ";
          cin >> num2;
          if (num1 > num2) cout << "El numero mayor es: " << num1;
          else cout << "El numero mayor es: " << num2;
          cout <<  endl;

      break;
//----------------------------------------------------------
      case 4:
        cout << "Ingrese un primer numero: ";
        cin >> num1;
        cout << "Ingrese un segundo  numero: ";
        cin >> num2;
        if (num1 > num2) cout << "El numero menor es: " << num2;
        else cout << "El numero menor es: " << num1;
        cout <<  endl;

      break;
//----------------------------------------------------------
      case 5:

        float a, b, total;
        //float decimal;
        cout << "Ingrese un primer numero: ";
        cin >> a;
        cout << "Ingrese un segundo  numero: ";
        cin >> b;
        total = int((a/b)+0.5);
        cout   << "El total de la diviosn es: " << total;
        cout <<  endl;

       break;
//----------------------------------------------------------
    case 6:

           int A,B;
           cout << "Ingrese el primer Numero";
           cin>>A;
           cout << "Ingrese el Segundo Numero";
           cin>>B;
           pot=A;

           if (B==0 && A<0) cout << A<<"**"<<B<<"="<<-1<< endl;
           else if (B==0) cout << A<<"**"<<B<<"="<<1<< endl;
           else if (B==-1) cout << A<<"**"<<B<<"="<<(1/A)<< endl;
           else {
           while (i<B){//Ciclo para calcular la potencia de el numero A a la B
             pot *= A;
            i+=1;
           }
           cout << A<<"**"<<B<<"="<<pot<< endl;
           }

      break;
//----------------------------------------------------------
      case 7:
        int conta, resultado, L;
        conta = 1;
        resultado = 0;
        cout << "Ingrese el numero N: ";
        cin >> L;
            while (conta <= L ) {
                resultado += conta;
                conta++;
            }
        cout  << "La sumatoria desde 0 hasta el "<< L <<  " es: " << resultado;
        cout <<  endl;


       break;
//----------------------------------------------------------
    case 8:

          cout << "Ingrese un Numero";

          cin>>n;

          pot=1;

          if (n<0) cout << "NO es posible calcular"<< endl;
          else {
              while (i<=n){
               pot *= i;
               i+=1;
               }
            cout << n<<"!"<< "="<<pot <<endl;
          }

         break;
//----------------------------------------------------------

       case 9:
        float radio;
        float Pi, perimetro, area;
        Pi = 3.1416;
        cout << "Ingrese el radio: ";
        cin >> radio;
        perimetro = (2*Pi*radio);
        area = (Pi*(radio*radio));
        cout  << "Perimetro es : " << perimetro << endl;
        cout  << "Area es  :" << area  <<  endl;

        break;
//----------------------------------------------------------
      case 10:
        cout << "Ingrese un numero: ";
        cin >> N;

        for (unsigned short i=1;N*i<=100 ;i=i+1 ) {
            cout << N*i << endl;
        }

       break;
//----------------------------------------------------------
      case 11:
        int numero;
        cout << "Ingrese un numero: "; cin >> numero;

        for (int i=1;i<=10 ;i++ ) {
            cout << numero << "X" << i << "=" << numero*i << endl;

        }

      break;
//----------------------------------------------------------
    case 12:

          cout << "Ingrese un Numero";
          cin>>n;
          pot=n;
          B=1; //potencias y a al vez condicion del ciclo externo
          //for (unsigned short B=1;B==5;B++){
          while (B<=5){

          while (i<B){ //Ciclo para calcular la potencia de el numero n a la B(1,2,3,4,5)
            pot *= n;
           i+=1;
          }
          cout << n<<"**"<<B<<"="<<pot<< endl;
          B+=1;
          }

     break;
//----------------------------------------------------------
      case 13:
        int divisor, c;
        c=0;
        cout << "Ingrese un numero: "; cin >> divisor;
        cout << "Sus divisores son: "<< endl;
        for (int i=1; i<=divisor; i++ ) {
            if(divisor%i==0){cout << i << " " << endl;
                c++;
                }

        }
       break;
//----------------------------------------------------------
    case 14:

       //for(1;50;1){
          while (i<=50){
           cout <<i<<"   "<<50-(i-1)<<endl;
           i+=1;
       }

          break;
//----------------------------------------------------------

      case 15:
        int  suma;
        suma = 0;
        do {
            cout << "Ingresa numero entero ";
            cin >> entero;
            suma = suma + entero;

        } while (entero != 0);
         cout << "El resultado de la sumatoria es : " << suma << endl;

      break;
 //----------------------------------------------------------
     case 16:
         N=0; //Switche para detener el ciclo xd
        i=0;
         cout<<"Ingrese Numeros y para terminar ingrese el 0 (cero)."<<endl;

         while (N==0){

             cin>>n;
             pot+=n;

         if (n==0) N=1;
         else {
             i+=1;
             }
         }
         if (i==0) cout<<"No se ingresaron Numeros"<<endl;
         else{
         cout<<"El promedio es: "<<float(pot/i)<< endl;
             }

        break;
 //----------------------------------------------------------
    case 17:
        int max, min;
        min = 0;
        max = 0;
        do {
            cout << "Ingresa numero entero ";
            cin >> entero;
            if (entero > max )max = entero;
            else if(entero < min) min = entero;

        } while (entero != 0);
         cout << "El numero mayor fue : " << max << endl;
         cout << "El numero menor fue : " << min << endl;

    break;
//----------------------------------------------------------
    case 18:

        cout << "Ingrese un Numero";
        cin>>n;

        while(cont<=n){
            pot=cont;
            pot *=pot;
            if (pot==n){
            //cout<<pot<<"es un cuadrado perfecto y su raiz cuadrada es: "<<cont<<endl;
                cout <<n<< " es un cuadrado perfecto. "<<endl;
            break;
                  }

            cont+=1;
            if ((pot!=n & cont==n/2)){
                cout <<n<< " NO es un cuadrado perfecto. "<<endl;
            }
        }

       break;
//----------------------------------------------------------

     case 19:

        cout << "Ingresa numero entero ";
        cin >> entero;
        for (int i = 2; i < entero ; i++ ) {
            if(entero % i == 0) primo = false;

        }

        if (primo == true) cout << entero <<  " es un numero primo." << endl;
        else cout << entero <<  " NO es un numero primo." << endl;

     break;

        //----------------------------------------------------------
        case 20:
           A=1;
           B=0;
           cout<<"Ingrese el Numero"<<endl;
           cin>>n;
           N1=n;

           while (A>0){
           A= N1/10;
           B = (10*B)+(N1-(A*10));
           N1 = A;
        }
           if (B==n) cout <<n<<" es un numero palindromo."<<endl;

           else cout<<n<<" NO es un numero palindromo."<<endl;

           break;
       //----------------------------------------------------------


     case 21:
        unsigned char letra;
        cout << "ingrese letra: ";
        cin >> letra;
        if (letra >= 65 && letra <= 90) letra += 32;
        else if(letra >= 97 && letra <= 122) letra -= 32;
        cout << "Letra convertida: " << letra << endl;


       break;

        //----------------------------------------------------------
        case 22:

            cout<<"Ingrese la cantidad entera de Segundos"<<endl;
            cin>>n;

            int hh,mm,ss;
            hh=(n/3600);
            mm=((n%3600)/60);
            //ss=((n%3600)&60);
            ss=n-((hh*3600)+(mm*60));
            cout<<hh<<":"<<mm<<":"<<ss<<endl;

           break;
        //----------------------------------------------------------

       case 23:
        long n1, n2;
        long maximo;
        long i;

        cout << "Ingrese numero: ";
        cin >> n1;
        cout << "Ingrese numero: ";
        cin >> n2;

        maximo = n1;

        if ( n2 > maximo )
            maximo = n2;

        i = maximo;
        while ((i % n1 != 0) || (i % n2 != 0))
            i++;

        cout << i << endl;

        break;

       case 24:
         cout << "Ingrese la dimension del lado del cuadrado: ";
         cin >> N;
         for (unsigned short fil=0;fil<N ;fil=fil+1 ) {
             for (unsigned short col=0; col<N ; col=col+1 ) {
                 if(fil == 0 || col == 0 ||fil == N-1 || col == N-1 ) cout << "+"; // El signo || es un or en phyton
                 else cout <<  " ";

             }
             cout <<  endl;

         }

        break;

       case 25:
        X = 0;
        cout << "Ingrese Numero: ";
        cin >> N;
        total1 = N;
        while (total1 != 0) {
            total1 = total1 / 10;
            X++;

        }
        cout << N << " tiene " << X << " digitos." << endl;

        break;

        //----------------------------------------------------------
        case 26:

            unsigned int aa,bb,cc;
            cout << "Ingrese el Primer Numero"<<endl;
            cin>>aa;
            cout << "Ingrese el Segundo Numero"<<endl;
            cin>>bb;
            cout << "Ingrese el Tercer Numero"<<endl;
            cin>>cc;

            if ((aa+bb>cc) || (aa+cc>bb) || (bb+cc>aa)) cout<<"Las longitudes ingresadas no forman un triangulo."<<endl;
            else if (aa==bb && aa==cc) cout << "Se forma un triangulo equilatero."<<endl;
            else if ((aa==bb && aa!=cc) || (aa==cc && aa!=bb) || (bb==cc && cc!=aa)) cout << "Se forma un triangulo isosceles."<<endl;
            else if ((aa!=bb && aa!=cc && bb!=cc)) cout << "Se forma un triangulo escaleno."<<endl;


           break;
        //----------------------------------------------------------

       case 27:
        char operador;
        cout << "Ingrese primer numero: ";
        cin >> num1;
        cout << "Ingrese operador: ";
        cin >> operador;
        cout << "Ingrese segundo numero: ";
        cin >> num2;
        if(operador == 43) cout << "La suma es: " << num1 + num2 << endl;
        else if(operador == 45) cout << "La resta es: " << num1 - num2 << endl;
        else if(operador == 42) cout << "La multiplicacion es: " << num1 * num2 << endl;
        else if(operador == 47) cout << "La division es: " << num1 / num2 << endl;

       break;

        //----------------------------------------------------------
            case 28:
            pi=0;
            cout << "Ingrese el Numero de terminos";
            cin>>n;

            for(short i=0;i<n;i++){
                if(i%2==0) pi += 1.0/(2*i+1);
                else pi -= 1.0/(2*i+1);
            }
            cout <<"pi es aproximadamente:"<<4*pi<< endl;

           break;
         //----------------------------------------------------------

       case 29:
        int max1, min1, num3;
        char compara;
        max1 = 101;
        min1 = 1;


        do {
            srand(time(NULL));
            num3 = min1+rand()%(max1-min1);
            cout << "Digite si el numero es Mayor, Menor o Igual a: " << num3 << endl;
            cin >> compara;
            if (compara == 62) min1 = num3;
            else if (compara == 60) max1 = num3;

        } while (compara != 61);

        cout << "Su numero es: " << num3 << endl;



       break;

        //----------------------------------------------------------
           case 30:
           cout<<"Ingrese un Numero"<<endl;
           cin>>n;

           int valor;
           bool adi = false;
           valor = rand() % 100;
           //cout<<valor<<endl;

           while (adi==false){

               if(n==valor){
                   cout<<"!!ADIVINASTE!! "<<"El numero era "<<valor<<endl;
                   cout<<i<<"Intentos"<<endl;
                   adi=true;
                   }
               else if(n<valor){
                   cout<<n<<" Es MENOR que el Numero a adivinar"<<endl;
                   cout<< "ingrese otro Numero"<<endl;
                   cin>>n;
                   }
               else if(n>valor){
                   cout<<n<<" Es MAYOR que el Numero a adivinar"<<endl;
                   cout<< "ingrese otro Numero"<<endl;
                   cin>>n;
                   }
           i+=1;
           }


            break;
           //----------------------------------------------------------

      }

    return 0;
}
