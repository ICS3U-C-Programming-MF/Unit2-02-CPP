// copyright maximiliano fairman

// created by maximiliano fairman
// Date: september 26th
// this program ask the user for the radius
// and then displayes the circumfrience using TAN

#include <iostream>

int main() {
    // Declare constant
    const float TAU = 6.28f;

    // Declare variables
    float radius, circumference;

    // Get the radius
    std::cout << "Enter radius (mm): ";
    std::cin >> radius;

    // Calculate the circumference
    circumference = TAU * radius;

    // Output the result
    std::cout << "\nCircumference = " << circumference << " mm" << std::endl;

    return 0;
}