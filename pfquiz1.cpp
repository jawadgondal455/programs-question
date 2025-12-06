#include <iostream>
using namespace std;

int main() {
    int n;
    float price;
     float total = 0;

    cout << "Enter number of items: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << "Enter price of item " << i+1 << ": ";
        cin >> price;
        total += price;
    }

    if(total > 150) {
        total = total - (total * 0.10); // 10% discount
    }

    cout << "Final Bill = " << total << endl;

    return 0;
}
