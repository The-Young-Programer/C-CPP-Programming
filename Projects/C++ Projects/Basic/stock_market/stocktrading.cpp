#include <iostream>
#include <vector>
#include <string>
using namespace std;
class stock {
public:
  string symbol;
  double price;

  stock(string symbol, double price) {
    this->symbol = symbol;
    this->price = price;
  }
};

int main() {
  vector<stock> stocks = {
    {"AAPL", 150.50},
    {"TSLA", 720.25},
    {"GOOG", 2850.00}
  };
  double balance = 10000.00; 
  while (true) {
    cout << "Current Balance: $" << balance << endl;
    cout << "------- Stocks -------" << endl;
    for (int i = 0; i < stocks.size(); i++) {
      cout << i + 1 << ". " << stocks[i].symbol << " - $" << stocks[i].price << endl;
    }
    cout << endl << "1. Buy Stock" << endl;
    cout << "2. Sell Stock" << endl;
    cout << "3. View Portfolio" << endl;
    cout << "4. Exit" << endl;
    int c;
    cin >> c;
    if (c == 1) {
      int stockIndex;
      int quantity;
      cout << "Enter stock number (1-" << stocks.size() << "): ";
      cin >> stockIndex;
      if (stockIndex <= 0 || stockIndex > stocks.size()) {
        cout << "Invalid stock selection." << endl;
        continue;
      }
      cout << "Enter quantity: ";
      cin >> quantity;
      if (quantity * stocks[stockIndex - 1].price > balance) {
        cout << "Insufficient funds." << endl;
        continue;
      }
      balance -= quantity * stocks[stockIndex - 1].price;
      cout << "Bought " << quantity << " shares of " << stocks[stockIndex - 1].symbol << endl;
    } 
    else if (c == 2) {
      int stockIndex;
      int quantity;
      cout << "Enter stock number to sell (1-" << stocks.size() << "): ";
      cin >> stockIndex;
      if (stockIndex <= 0 || stockIndex > stocks.size()) {
        cout << "Invalid stock selection." << endl;
        continue;
      }
      cout << "Enter quantity to sell: ";
      cin >> quantity;
      balance += quantity * stocks[stockIndex - 1].price;
      cout << "Sold " << quantity << " shares of " << stocks[stockIndex - 1].symbol << endl;
    } 
    else if (c == 3) {
      cout << "Your portfolio:" << endl;
    } 
    else {
      cout << "Invalid choice." << endl;
    }
  }

  cout << "Exiting application." << endl;

  return 0;
}