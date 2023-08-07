#include <iostream>
#include <string>
#include <vector>

// Product Class
class Product {
private:
    int productID;
    std::string name;
    double price;
    int stockQuantity;

public:
    // Constructor
    Product(int productID, std::string name, double price, int stockQuantity)
        : productID(productID), name(name), price(price), stockQuantity(stockQuantity) {}

    // Getter functions
    int getProductID() const { return productID; }
    std::string getName() const { return name; }
    double getPrice() const { return price; }
    int getStockQuantity() const { return stockQuantity; }

    // Setter functions
    void setPrice(double newPrice) { price = newPrice; }
    void setStockQuantity(int newStockQuantity) { stockQuantity = newStockQuantity; }

    // Display product information
    void display() const {
        std::cout << "Product ID: " << productID << "\n";
        std::cout << "Name: " << name << "\n";
        std::cout << "Price: $" << price << "\n";
        std::cout << "Stock Quantity: " << stockQuantity << "\n";
    }
};

// StockManagement Class
class StockManagement {
private:
    std::vector<Product> products;

public:
    // Add a product to the stock
    void addProduct(const Product& product) {
        products.push_back(product);
    }

    // Remove a product from the stock based on productID
    void removeProduct(int productID) {
        for (auto it = products.begin(); it != products.end(); ++it) {
            if (it->getProductID() == productID) {
                products.erase(it);
                return;
            }
        }
        std::cout << "Product with ID " << productID << " not found.\n";
    }

    // Search for a product based on productID
    Product* searchProduct(int productID) {
        for (auto& product : products) {
            if (product.getProductID() == productID) {
                return &product;
            }
        }
        return nullptr;
    }

    // Display all products' information
    void displayAllProducts() const {
        for (const auto& product : products) {
            product.display();
            std::cout << "---------------------\n";
        }
    }
};

int main() {
    StockManagement stock;

    // Adding products
    stock.addProduct(Product(1, "Widget", 12.99, 50));
    stock.addProduct(Product(2, "Gadget", 24.95, 30));

    // Display all products
    stock.displayAllProducts();

    // Search for a product by ID
    int productID = 1;
    Product* foundProduct = stock.searchProduct(productID);
    if (foundProduct != nullptr) {
        std::cout << "Product with ID " << productID << " found:\n";
        foundProduct->display();
    } else {
        std::cout << "Product with ID " << productID << " not found.\n";
    }

    // Remove a product
    int productToRemove = 2;
    stock.removeProduct(productToRemove);

    return 0;
}
