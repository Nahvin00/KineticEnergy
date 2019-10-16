#include <iostream>
using namespace std;
int main()
{
    double m,v,ke;
        cout<<"Input the object's mass(kg): ";
        cin>>m;
        cout<<"Input the object's velocity(m/s): ";
        cin>>v;
        ke=0.5*m*v*v;
        cout<<"The kinetic energy(Joules): "<<ke<<endl;

    return 0;
}
