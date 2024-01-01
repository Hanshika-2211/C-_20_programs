#include <iostream>

class Product {
public:
    std::string name;
    double price;
    int quantityInStock;
};

class ShoppingCart {
public:
    void addToCart(Product product, int quantity);
    double calculateTotalCost();
    void displayCartContents();

private:
    Product cart[10];
    int quantities[10];
    int itemCount = 0;
};

void ShoppingCart::addToCart(Product product, int quantity) {
    if (itemCount < 10) {
        cart[itemCount] = product;
        quantities[itemCount] = quantity;
        itemCount++;
    } else {
        std::cout << "Cart is full. Cannot add more items." << std::endl;
    }
}

double ShoppingCart::calculateTotalCost() {
    double totalCost = 0.0;
    for (int i = 0; i < itemCount; ++i) {
        totalCost += cart[i].price * quantities[i];
    }
    return totalCost;
}

void ShoppingCart::displayCartContents() {
    std::cout << "Cart Contents:" << std::endl;
    for (int i = 0; i < itemCount; ++i) {
        std::cout << "Name: " << cart[i].name << ", Quantity: " << quantities[i] << ", Price: $" << cart[i].price << std::endl;
    }
}

int main() {
    ShoppingCart cart;

    // Test case: Adding two products to the cart
    Product product1 = {"Laptop", 800.0, 2};
    Product product2 = {"Headphones", 50.0, 3};

    cart.addToCart(product1, 1);
    cart.addToCart(product2, 2);

    // Displaying cart contents and total cost
    cart.displayCartContents();
    std::cout << "Total Cost: $" << cart.calculateTotalCost() << std::endl;

    return 0;
}
