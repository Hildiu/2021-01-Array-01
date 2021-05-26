//
// Created by MARIA HILDA BERMEJO RIOS on 5/26/21.
//

#include "UFunciones.h"

TEntero  * dimensionarArray(TEntero n)
{
  return (new TEntero[n]);
}

void llenarAleatoriamente(TEntero *pA, TEntero n, TEntero* mul5, TEntero *mul7)
{//----------------------------------------------------------------------------
  *mul5=0;
  *mul7=0;
  for(TEntero i=0; i<n;i++) {
    pA[i] = rand() % 1000;
    if (pA[i] % 5 == 0)
      *mul5 = *mul5 + 1;
    if (pA[i] % 7 == 0)
      *mul7 = *mul7 + 1;
  }
}

void  imprimirArray(TEntero  *pA, TEntero  n)
{//------------------------------------------
  cout << "\n";
  for(TEntero i=0; i<n; i++)
    cout << setw(5) << pA[i];
}

void llenarMultiplos(TEntero *pA, TEntero n, TEntero *pAMul, TEntero multiplo)
{//---------------------------------------------------------------------------
  TEntero inuevo=0;
  for(TEntero i=0; i<n; i++)
    if(pA[i]%multiplo==0)
      pAMul[inuevo++]=pA[i];
}

void liberarMemoria(TEntero  * &pA)
{
  delete []pA;
  pA = nullptr;
}