#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <string>
#include <typeinfo>

 
using namespace std;

 
double In(const char* t)
{
    setlocale(LC_ALL, "Rus");
    
    float r,s;
    string a_s;
    
    float fraction = .0;    
    
    cout << t;
    
    cin >> a_s;
    
    replace(a_s.begin(), a_s.end(), ',', '.');
    float x{std::stof(a_s.c_str())};

    
    r = x / 2 / 3.14;
    s = 3.14 * r * r;
    printf("R of circle:%f\n", r);
    printf("S of circle:%f\n", s);
    printf("L of circle:");
    return x;

}
 
int main() {
    
    cout << In("Write L of circle:\n") << endl;
    system("Pause");  
    
}
