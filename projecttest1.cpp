#include <iostream>
#include <vector>
#include <string>

using namespace std;

/* =======================
   Toy Class
   ======================= */
class Toy {
private:
    string name;
    string type;
    double price;

public:
    // Constructor
    Toy(string n, string t, double p) {
        name = n;
        type = t;
        price = p;
    }

    // Display toy specifications
    void display() const {
        cout << name << " | " << type << " | $" << price << endl;
    }
};

/* =======================
   Inventory Class
   ======================= */
class Inventory {
private:
    vector<Toy> stock;
    vector<Toy> sold;

public:
    // Add toy to stock
    void addToy(const Toy& toy) {
        stock.push_back(toy);
    }

    // Show toys in stock
    void showStock() const {
        cout << "\n--- TOYS IN STOCK ---\n";
        if (stock.empty()) {
            cout << "No toys available.\n";
            return;
        }

        for (int i = 0; i < stock.size(); i++) {
            cout << i << ". ";
            stock[i].display();
        }
    }

    // Show sold toys
    void showSold() const {
        cout << "\n--- SOLD TOYS ---\n";
        if (sold.empty()) {
            cout << "No toys sold yet.\n";
            return;
        }

        for (const Toy& toy : sold) {
            toy.display();
        }
    }

    // Buy a toy (move from stock to sold)
    void buyToy(int index) {
        if (index < 0 || index >= stock.size()) {
            cout << "Invalid toy number!\n";
            return;
        }

        sold.push_back(stock[index]);          // add to sold list
        stock.erase(stock.begin() + index);    // remove from stock

        cout << "Toy purchased successfully!\n";
    }
};

/* =======================
   Main Program
   ======================= */
int main() {
    Inventory shop;

    // Add initial toys
    shop.addToy(Toy("Lego Set", "Building", 25.99));
    shop.addToy(Toy("Teddy Bear", "Plush", 15.50));
    shop.addToy(Toy("RC Car", "Electronics", 45.00));

    int choice;
    bool running = true;

    while (running) {
        cout << "\n===== TOY SHOP MENU =====\n";
        cout << "1. Show toys in stock\n";
        cout << "2. Buy a toy\n";
        cout << "3. Show sold toys\n";
        cout << "4. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;

        switch (choice) {
            case 1:
                shop.showStock();
                break;

            case 2: {
                shop.showStock();
                cout << "Enter toy number to buy: ";
                int toyIndex;
                cin >> toyIndex;
                shop.buyToy(toyIndex);
                break;
            }

            case 3:
                shop.showSold();
                break;

            case 4:
                running = false;
                cout << "Goodbye!\n";
                break;

            default:
                cout << "Invalid option!\n";
        }
    }

    return 0;
}