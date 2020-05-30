 #include <iostream>

using namespace std;
double traye(double t, double v)
{
    return v - 9.78*t;
}
double * runge(double t, double h, double v, double dt)
{
    double rk1 = traye(t, v)*dt;
    double rk2 = traye(t + dt/2, v)*dt;
    double rk3 = traye(t + dt/2, v)*dt;
    double rk4 = traye(t + dt, v)*dt;
    double * position = new double[2];
    position[0] = t + dt; 
    position[1] = h + (rk1 + 2*rk2 + 2*rk3 + rk4)/6;
    
    return position;
}