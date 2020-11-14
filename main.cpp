#include <iostream>
using namespace std;

int main() {
  double lungimeaKM, lungimeaMile;
  
  cout << "Introduceti lungimea in mile: ";
  cin >> lungimeaMile;

  lungimeaKM = lungimeaMile * 1.609344;

  cout << "Lungimea in km este: " << lungimeaKM;
}