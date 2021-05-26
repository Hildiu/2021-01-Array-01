//
// Created by MARIA HILDA BERMEJO RIOS on 5/26/21.
//

#ifndef MULTIPLOS_UFUNCIONES_H
#define MULTIPLOS_UFUNCIONES_H

#include <iostream>
#include <iomanip>
using namespace std;

using TEntero = unsigned long int;

TEntero  * dimensionarArray(TEntero n);
void llenarAleatoriamente(TEntero *pA, TEntero n, TEntero* mul5, TEntero *mul7);
void  imprimirArray(TEntero  *pA, TEntero  n);
void llenarMultiplos(TEntero *pA, TEntero n, TEntero *pAMul, TEntero multiplo);
void liberarMemoria(TEntero  * &pA);

#endif //MULTIPLOS_UFUNCIONES_H
