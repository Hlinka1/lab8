// Лаб8-тн.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

    int main() // початок програми на С++
    {
        long X = 7; 
        long REZ; 
        _asm {
    
            lea EBX, REZ
            mov EAX, 5
            imul X
            sub EAX, 8
            mov EDI, EAX
            mov EAX, 6
            imul X
            imul X
            add EAX, 12
            cdq
            div EDI
            shr EDI, 1
            cmp EDI, EDX
            adc EAX, 0
            mov dword ptr[EBX], EAX
        } 
    }


