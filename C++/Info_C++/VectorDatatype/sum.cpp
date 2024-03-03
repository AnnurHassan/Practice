#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> numbers = {2, 4, 3, 6, 1, 9};
    int length = numbers.size();
    int even_sum = 0;
    int odd_sum = 1;

    for (int i = 0; i < length; i++) {

        if (numbers[i] % 2 == 0) {
            even_sum = even_sum + numbers[i];
        }
        else {
            odd_sum = odd_sum * numbers[i];
        }

    }

    cout << "Sum of even numbers is " << even_sum << "\n";
    cout << "Product of odd numbers is " << odd_sum << "\n";


}