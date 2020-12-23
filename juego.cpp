#include <iostream>
#include <bits/stdc++.h> 
#include <time.h> 
using namespace std;

int selectRandom(int x)  
{  
    static int res; 
    static int count = 0; 
  
    count++;
  
    if (count == 1)  
        res = x;  
    else
    {  
        int i = rand() % count;  
  
        if (i == count - 1)  
            res = x;  
    }  
    return res;  
}  

int juego(int eleccionUsuario, int puntuacionActual) {
    int stream[] = {1, 2, 3, 4};  
    int n = sizeof(stream) / sizeof(stream[0]);  
    int eleccionBot;
  
    srand(time(NULL));  
    for (int i = 0; i < n; ++i)  
    {
        eleccionBot = selectRandom(stream[i]);
    }

    if (eleccionUsuario > eleccionBot) {
        cout << "\nHas ganado!" << endl;
        return 1;
    } else if (eleccionUsuario == eleccionBot) {
        cout << "\nHas empatado!" << endl;
        return 0;
    } else {
        cout << "\nHas perdido!" << endl;
        if (puntuacionActual == 0) {
            return 0;
        }
        return -1;
    }
}