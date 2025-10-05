#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Conversion functions
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0/5.0) + 32.0;
}

double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0/9.0;
}

double fahrenheitToKelvin(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0/9.0 + 273.15;
}

double kelvinToCelsius(double kelvin) {
    return kelvin - 273.15;
}

double kelvinToFahrenheit(double kelvin) {
    return (kelvin - 273.15) * 9.0/5.0 + 32.0;
}

void displayMenu() {
    cout << "\n=== Temperature Converter ===" << endl;
    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Celsius to Kelvin" << endl;
    cout << "3. Fahrenheit to Celsius" << endl;
    cout << "4. Fahrenheit to Kelvin" << endl;
    cout << "5. Kelvin to Celsius" << endl;
    cout << "6. Kelvin to Fahrenheit" << endl;
    cout << "7. Convert all scales" << endl;
    cout << "8. Exit" << endl;
}

void convertAllScales(double temperature, char originalScale) {
    double c, f, k;
    
    cout << fixed << setprecision(2);
    
    switch(originalScale) {
        case 'C':
            c = temperature;
            f = celsiusToFahrenheit(temperature);
            k = celsiusToKelvin(temperature);
            break;
        case 'F':
            c = fahrenheitToCelsius(temperature);
            f = temperature;
            k = fahrenheitToKelvin(temperature);
            break;
        case 'K':
            c = kelvinToCelsius(temperature);
            f = kelvinToFahrenheit(temperature);
            k = temperature;
            break;
    }
    
    cout << "\nConversion Results:" << endl;
    cout << "Celsius: " << c << "°C" << endl;
    cout << "Fahrenheit: " << f << "°F" << endl;
    cout << "Kelvin: " << k << "K" << endl;
}

int main() {
    cout << "Welcome to the Temperature Converter!" << endl;
    
    while(true) {
        displayMenu();
        cout << "\nEnter your choice (1-8): ";
        
        string choice;
        cin >> choice;
        
        if(choice == "8") {
            cout << "Thank you for using the Temperature Converter. Goodbye!" << endl;
            break;
        }
        
        if(choice != "1" && choice != "2" && choice != "3" && 
           choice != "4" && choice != "5" && choice != "6" && choice != "7") {
            cout << "Invalid choice! Please enter a number between 1 and 8." << endl;
            continue;
        }
        
        double temperature;
        cout << "Enter temperature: ";
        
        if(!(cin >> temperature)) {
            cout << "Invalid temperature input! Please enter a valid number." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }
        
        cout << fixed << setprecision(2);
        
        if(choice == "7") {
            char scale;
            cout << "Enter original scale (C for Celsius, F for Fahrenheit, K for Kelvin): ";
            cin >> scale;
            
            if(scale != 'C' && scale != 'F' && scale != 'K') {
                cout << "Invalid scale! Please enter C, F, or K." << endl;
                continue;
            }
            
            convertAllScales(temperature, scale);
        } else {
            double result;
            string fromScale, toScale;
            
            switch(stoi(choice)) {
                case 1:
                    result = celsiusToFahrenheit(temperature);
                    fromScale = "Celsius";
                    toScale = "Fahrenheit";
                    break;
                case 2:
                    result = celsiusToKelvin(temperature);
                    fromScale = "Celsius";
                    toScale = "Kelvin";
                    break;
                case 3:
                    result = fahrenheitToCelsius(temperature);
                    fromScale = "Fahrenheit";
                    toScale = "Celsius";
                    break;
                case 4:
                    result = fahrenheitToKelvin(temperature);
                    fromScale = "Fahrenheit";
                    toScale = "Kelvin";
                    break;
                case 5:
                    result = kelvinToCelsius(temperature);
                    fromScale = "Kelvin";
                    toScale = "Celsius";
                    break;
                case 6:
                    result = kelvinToFahrenheit(temperature);
                    fromScale = "Kelvin";
                    toScale = "Fahrenheit";
                    break;
            }
            
            cout << "\n" << temperature << "°" << fromScale[0] << " = " << result;
            if(toScale == "Kelvin") {
                cout << "K" << endl;
            } else {
                cout << "°" << toScale[0] << endl;
            }
        }
    }
    
    return 0;
}