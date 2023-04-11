#include <iostream>
#include <cmath>

using namespace std;

double volume(float,float); //procedure statement

//main program
int main()
{
    float r; //radius of the celyndrical tank
    float ht; //height of the celyndrical tank
    float h; //liquid level
    float vliq;

    r=1;
    ht=2*r;
    
    //while(true){
    // for (;;){
    while(1) {
        cout << "Give the level of the liquid in meters" << endl;
        cin >> h ;
    
        if ((h<=0) || (h>ht)){
                cout << "The value is out of limits." << endl;
        }
        
        if ((h>0) && (h<ht)) {
        break;
        }
    }

    vliq=volume(r,h); //calling the function
    cout << "The volume of the liqud is " << vliq << " m**3" << endl;

return 0;
}

//external function
double volume(float r, float h) {

//local variables
float pi=4*atan(1);
float result; 

result = pi*(r*r)*h/3;

return result;
}
    
