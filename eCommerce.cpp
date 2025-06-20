#include<iostream>
using namespace std;

class User{
    protected:
        int userID;
        string name;

    public:
        User(int id, string n){
            userID = id;
            name = n;
        };
};

class OrderDetails{
    protected:
        string productName;
        int quantity;
        double unitPrice;

    public:
        OrderDetails(string productN, int quan, double unitP){
            productName = productN;
            quantity = quan;
            unitPrice = unitP;
        }
};

class Customer: public User, public OrderDetails{
    private:
        double discoutRate;
    
    public:
        Customer(int id, string n, string pN, int quant, double uP, double discoutR): User(id, n), OrderDetails(pN, quant, uP){
            discoutRate = discoutR;
        }

    void calculateTotal(){
        double total = quantity * unitPrice;
        double discount = 0.0;

        if(quantity > 10){
            discount = total * 0.10;
        }else {
            discount = total * discoutRate;
        }

        double finalAmount = total - discount;

        cout << "Customer ID: " << userID << endl;
        cout << "Name: " << name << endl;
        cout << "Product: " << productName << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Unit Price: " << unitPrice << " taka" << endl;
        cout << "Discount Applied: " << discount << " taka" << endl;
        cout << "Total Amount to Pay: " << finalAmount << " taka" << endl;
    }
};

int main(){
    Customer c1(130, "Sakib", "Shoes", 12, 500, 0.05);
    c1.calculateTotal();
}