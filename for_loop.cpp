#include <iostream>
using namespace std;

int main() {
    int items;

    cout << "How many items do you want to add? (1-10) ";
    cin >> items;
    std::string basket; 
    std::string ask; 

    if(items !=0 && items<=10) {
        for(int i = 0; i < items; i++) {
            cout << "Which item do you want to add? (a-z or A-Z ) ";
            cin >> ask;
            if(items - 1 != i) {
                basket += ask + ", ";
            }
            else {
                basket += ask;
            }
        } 
        cout << "Your items are: " <<  basket;   
    }
        else {
            cout << "Wrong input. Try again(1-10)";
        }
    
    return 0;
}
