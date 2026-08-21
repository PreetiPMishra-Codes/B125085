#include <iostream>
using namespace std;

class Weather {
private:
    string cityName;
    float temperature;
    string weatherCondition;

public:
    void input() {
        cout << "Enter city name: ";
        cin >> cityName;

        cout << "Enter temperature (C): ";
        cin >> temperature;

        cout << "Enter weather condition: ";
        cin >> weatherCondition;
    }

    friend void generateReport(Weather w);
};

void generateReport(Weather w) {
    cout << "\n----- Weather Report -----" << endl;
    cout << "City: " << w.cityName << endl;
    cout << "Temperature: " << w.temperature << " C" << endl;
    cout << "Weather Condition: " << w.weatherCondition << endl;

    if (w.temperature > 35)
        cout << "Category: Very Hot" << endl;
    else if (w.temperature >= 20)
        cout << "Category: Pleasant" << endl;
    else
        cout << "Category: Cool" << endl;
}

int main() {
    Weather w;

    w.input();
    generateReport(w);

    return 0;
}
