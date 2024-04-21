#include <iostream>

using namespace std;

class Temperature {
public:
    Temperature() : tempKelvin(0.0) {}

    double getTempKelvin() const;
    double getTempFahrenheit() const;
    double getTempCelsius() const;

    void setTempKelvin(double kelvin);           
    void setTempFahrenheit(double fahrenheit);
    void setTempCelsius(double celsius);

private:
    double tempKelvin;
};

int main() {
    Temperature temp;

    temp.setTempKelvin(300.0);               // Function to set temperature in Kelvin

    cout << "Temperature in Kelvin: " << temp.getTempKelvin() << " K" << endl;           // Get and display temperature in Kelvin

    temp.setTempFahrenheit(68.0);            // Set temperature in Fahrenheit

    cout << "Temperature in Fahrenheit: " << temp.getTempFahrenheit() << " ¢XF" << endl;  // Get and display temperature in Fahrenheit and Celsius
    cout << "Temperature in Celsius: " << temp.getTempCelsius() << " ¢XC" << endl;

    temp.setTempCelsius(25.0);               // Set temperature in Celsius

    cout << "Temperature in Kelvin: " << temp.getTempKelvin() << " K" << endl;           // Get and display temperature in Kelvin
    
    system("pause");
    return 0;
}

double Temperature::getTempKelvin() const {                // Function to get temperature in Kelvin
    return tempKelvin;
}

double Temperature::getTempFahrenheit() const {            // Function to get temperature in Fahrenheit
    double celsius = tempKelvin - 273.15;
    return (celsius * 9.0 / 5) + 32;
}

double Temperature::getTempCelsius() const {               // Function to get temperature in Celsius
    return tempKelvin - 273.15;
}

void Temperature::setTempKelvin(double kelvin) {           // Function to set temperature in Kelvin
    tempKelvin = kelvin;
}

void Temperature::setTempFahrenheit(double fahrenheit) {   // Function to set temperature in Fahrenheit
    double celsius = (5.0 / 9) * (fahrenheit - 32);
    tempKelvin = celsius + 273.15;
}

void Temperature::setTempCelsius(double celsius) {         // Function to set temperature in Celsius
    tempKelvin = celsius + 273.15;
}