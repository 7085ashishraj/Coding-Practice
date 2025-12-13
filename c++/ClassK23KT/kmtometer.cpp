#include <iostream>
using namespace std;
class km_to_m {
private:
  int km, m;

public:
  km_to_m() { km = m = 0; }
  void get_data() { cin >> km >> m; }
  operator int() {
    return km * 1000 + m;
  }
};
int main() {
  int meters;
  km_to_m K1;
  cout << "\n Enter the number of km and meters: ";
  K1.get_data();
  meters = K1;
  cout << "\n Total Meters =" << meters;
}