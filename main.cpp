#include <iostream>
#include "funciones.h"

using namespace std;

int main(){
    double t = 0; 
    double h = 8.5;
    double v = 20;
    double dt = 0.01; 
    double * t_pos = new double[2];
    t_pos[0] = 0; 
    t_pos[1] = h;
    for(int i = 0; i <= 10000; i = i + 1){
        cout << t_pos[0] << ',' << t_pos[1] << endl;
        h = t_pos[1];
        t = t_pos[0];
        t_pos = runge(t, h, v, dt);
        if (h < 0) {break;}
    }
}