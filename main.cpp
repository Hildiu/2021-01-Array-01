#include "UFunciones.h"

int main()
{
 TEntero *pA= nullptr;

 TEntero *pAM5= nullptr;
 TEntero *pAM7= nullptr;
 TEntero n,mul5,mul7;

 srand(time(nullptr));

  do{
    cout << "Numero de elementos :";
    cin>>n;
  }while(n<=10);

  pA = dimensionarArray(n);
  llenarAleatoriamente(pA,n,&mul5,&mul7);
  imprimirArray(pA,n);
  pAM5 = dimensionarArray(mul5);
  pAM7 = dimensionarArray(mul7);
  llenarMultiplos(pA,n,pAM5,5);
  llenarMultiplos(pA,n,pAM7,7);
  imprimirArray(pAM5,mul5);
  imprimirArray(pAM7,mul7);
  //-- liberamos memoria del Heap
  liberarMemoria(pA);
  liberarMemoria(pAM5);
  liberarMemoria(pAM7);
  return 0;
}


/*----------Para practicar----
 * incluya en el programa el codigo necesario para:
 * 1. Hallar cual es el mayor de todos los numeros del array pA
 * 2. Contar las veces que el mayor dato se encuentra en el array pA
 */