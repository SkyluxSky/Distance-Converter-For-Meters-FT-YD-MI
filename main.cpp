//Created by Cameron Cowan 
//8/21/2019

#include <iostream>

using namespace std;

int main() {
    
    cout << "-----------Meters Converter------------" << endl;
    cout << "\nPlease enter in a length in meters: ";
    
    double amount_of_meters {0};
    cin >> amount_of_meters;
    cout << "\nDistance entered (in meters): "<< amount_of_meters << endl;
    
    //Converter's
    
    //inches
    const double inches_measurement {39.3701};
    double result_inches {0};
    result_inches = amount_of_meters * inches_measurement;
    cout << "\ninch: "<< result_inches << " in" << endl;
    
    //feet
    const double foot_measurement {3.28084};
    double result_feet {0};
    result_feet = amount_of_meters * foot_measurement;
    cout << "\nfeet: "<< result_feet << " ft" << endl;
    
    //yards
    const double yard_measurement {1.09361};
    double result_yard {0};
    result_yard = amount_of_meters * yard_measurement;
    cout << "\nyards: "<< result_yard << " yd" << endl;
    
    //miles
    const double miles_measurement {1609.344};
    long double result_miles {0};
    result_miles = amount_of_meters / miles_measurement;
    cout << "\nmiles: "<< result_miles << " mi" << endl;
    
    //nautical miles
    const int nautical_mi_measurement {1852};
    long double result_nauticalmi {0};
    result_nauticalmi = amount_of_meters / nautical_mi_measurement;
    cout << "\nnautical miles: "<< result_nauticalmi << " nmi" << endl;
    
    cout << endl;
    return 0;
}