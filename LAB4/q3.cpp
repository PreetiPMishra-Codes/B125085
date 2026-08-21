#include <iostream>
using namespace std;

class Camera {
private:
    string brand;
    string model;
    int megapixels;
    int storageCapacity;

public:
    void input() {
        cout << "Enter brand: ";
        cin >> brand;

        cout << "Enter model: ";
        cin >> model;

        cout << "Enter megapixels: ";
        cin >> megapixels;

        cout << "Enter storage capacity (GB): ";
        cin >> storageCapacity;
    }

    friend void compareCamera(Camera c1, Camera c2);
};

void compareCamera(Camera c1, Camera c2) {

    Camera better;

    if (c1.megapixels > c2.megapixels) {
        better = c1;
    }
    else if (c2.megapixels > c1.megapixels) {
        better = c2;
    }
    else {
        // Same megapixels, compare storage
        if (c1.storageCapacity >= c2.storageCapacity)
            better = c1;
        else
            better = c2;
    }

    cout << "\n----- Better Camera -----" << endl;
    cout << "Brand: " << better.brand << endl;
    cout << "Model: " << better.model << endl;
    cout << "Megapixels: " << better.megapixels << " MP" << endl;
    cout << "Storage Capacity: "
         << better.storageCapacity << " GB" << endl;
}

int main() {

    Camera c1, c2;

    cout << "Enter details of Camera 1:\n";
    c1.input();

    cout << "\nEnter details of Camera 2:\n";
    c2.input();

    compareCamera(c1, c2);

    return 0;
}
