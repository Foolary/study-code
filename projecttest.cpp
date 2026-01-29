

#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string brand;
    string model;
    int year;
    double engine;
    int horsepower;

    void showSpecs() {
        cout << "\n--- Car Specs ---\n";
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Engine: " << engine << " L" << endl;
        cout << "Horsepower: " << horsepower << " HP" << endl;
    }
};

int main() {
    Car cars[] = {
        {"Toyota", "Corolla", 2020, 1.8, 139},
        {"Honda", "Civic", 2021, 2.0, 158},
        {"Tesla", "Model 3", 2022, 0.0, 283}
    };

    int choice;

    do { cout << "\nChoose a car:\n";
    for (int i = 0; i < 3; i++) {
        cout << i + 1 << ". " << cars[i].brand << " " << cars[i].model << endl;
    }
        cout << "4. Exit\n";


    cout << "Enter number: ";
    cin >> choice;

   
switch(choice) {
            case 1:
             cars[0].showSpecs();
                    break;

            case 2:
             cars[1].showSpecs();
                    break;

            case 3:
             cars[2].showSpecs();
                    break;

            case 4:
             cout << "Thanks for visiting!\n";
                    break;

            default: cout << "Invalid choice\n";
        
        }

    } while (choice !=4);
    

    
    return 0; }
