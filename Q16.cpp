#include <iostream>
#include <string>
using namespace std;

class Product
{
public:
    int product_id;
    string product_name;
    float product_price;
    int quantity;

    Product()
    {
        product_id = 0;
        product_name = " ";
        product_price = 0.00;
        quantity = 0;
    }
    Product(int i, int q, string n, float p) // Parameterised constructor is similar to a function call
    {
        product_id = i;
        product_name = n;
        quantity = q;
        product_price = p;

        cout << "The name of the product is: "<<product_name <<endl;
        cout << "The product id of the desired product is: " << product_id << endl;
        cout << "The available quantity of the desired product is: " << quantity << endl;
        cout << "The price of the desired product is: " << product_price << endl;
    }
};

int main()
{
    int choice;
    Product p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16;
    
        cout << "List of items: " << endl;
        cout << "1.Grains: " << endl;
        cout << "2.Chips & Biscuits: " << endl;
        cout << "3.Chocolates: " << endl;
        cout << "4.Dispenseries: " << endl;
        cout << "Enter your choice(1,2,3,4): " << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "List of grains: " << endl;
            cout << "1.Rice" << endl;
            cout << "2.Wheat" << endl;
            cout << "3.Jowar" << endl;
            cout << "4.Barley" << endl;

            break;

        case 2:
            cout << "List of Chips & Biscuits: " << endl;
            cout << "5.Lays" << endl;
            cout << "6.Oreo" << endl;
            cout << "7.Too Yumm" << endl;
            cout << "8.Hide&Seek" << endl;

            break;

        case 3:
            cout << "List of Chocolates: " << endl;
            cout << "9.KitKat" << endl;
            cout << "10.DairyMilk" << endl;
            cout << "11.Galaxy" << endl;
            cout << "12.Munch" << endl;

            break;

        case 4:
            cout << "List of Dispenseries: " << endl;
            cout << "13.Washing Powder" << endl;
            cout << "14.Soaps" << endl;
            cout << "15.Phenyl" << endl;
            cout << "16.Air Freshener" << endl;

            break;
        }
        while (true)
    {
        if (choice == 0){
            break;
        }

        cout << "Enter the  serial number of the product: " << endl;
        cin>>choice;

        switch (choice)
        {
        case 1:
            Product(1, 100, "Rice", 218);
            break;
        case 2:
            Product(2, 100, "Wheat", 45);
            break;
        case 3:
            Product(3, 100, "Jowar", 60);
            break;
        case 4:
            Product(4, 150, "Barley", 20);
            break;
        case 5:
            Product(5, 120, "Lays", 20);
            break;
        case 6:
            Product(6, 150, "Oreo", 10);
            break;
        case 7:
            Product(7, 70, "Too Yumm", 20);
            break;
        case 8:
            Product(8, 115, "Hide&Seek", 20);
            break;
        case 9:
            Product(9, 100, "KitKat", 20);
            break;
        case 10:
            Product(10, 105, "DairyMilk", 10);
            break;
        case 11:
            Product(11, 65, "Galaxy", 45);
            break;
        case 12:
            Product(12, 162, "Munch", 20);
            break;
        case 13:
            Product(13, 100, "Washing Powder", 345.45);
            break;
        case 14:
            Product(14, 100, "Soaps", 27.77);
            break;
        case 15:
            Product(15, 100, "Phenyl", 77.96);
            break;
        case 16:
            Product(16, 150, "Air Freshener", 114.08);
            break;
        default:
            cout << "Invalid product chosen..." << endl;
            continue; 
        }

    }

    return 0;

}