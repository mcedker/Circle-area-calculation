#include <iostream>
#include <math.h>

using namespace std;

float R;
float r;
float d;
float S;
float calc_r(float R, float d);
float calc_S(float r);

int main()
{
   cout << "Enter R and d "<<endl;
   cin >> R>>d;
   cout << "r=" ;
   r=calc_r(R,d);
   cout <<r<<endl;
   S=calc_S(r);
   cout <<"S="<<S<<endl;

}

float calc_r(float R, float d)
{
    float r=pow(R,2)-pow(d/2,2);
    return sqrt(r);
}

float calc_S(float r)
{
    float S=M_PI*pow(r,2);
    return S;
}
