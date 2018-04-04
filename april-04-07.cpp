#include<iostream>
using namespace std;
int main()
{
    int radious;
    float volume_sphere;

    cout << " \n\n Calculate the volume of a sphere : \n";
    cout << "---------------------------------------\n";

    cout << " Input the radius of a sphere : ";
    cin  >> radious;

    volume_sphere = ( 4 * 3.14 * radious * radious * radious ) / 3 ;

    cout << " The volume of a sphere is : " << volume_sphere << endl;
    cout << endl;

    return 0;
}
