#include <iostream>
#include <string>

std::string divideEvenParts(int weight);

int main() {
    int weight;
    
    std::cin >> weight;  // Read watermelon weight
    std::cout << divideEvenParts(weight);
    
    return 0;
}


/*
    Check that the weight is even and that is divisible in a equal
    number of parts such that the weight of each one is even.
*/
std::string divideEvenParts(int weight) {
    std::string result = "";
    bool isEvenlyDivisible = false;
    for (int numParts = 2; numParts < weight; ++numParts) {
        if (weight % 2 == 0 && (weight / numParts) % 2 == 0) {
            result = "YES";
            isEvenlyDivisible = true;
            break;
        }
    }
    if (!isEvenlyDivisible) {
        result = "NO";
    }
    return result;
}