#include <iostream>
#include <string>

std::string intToRoman(int num) {
    std::string roman;
    // arrays for the Roman numerals and their corresponding integers
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    std::string numerals[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    // loop through the arrays and add the Roman numeral to the string
    for (int i = 0; i < 13; i++) {
        while (num >= values[i]) {
            roman += numerals[i];
            num -= values[i];
        }
    }

    return roman;
}
int main() {
    int num = 3999
	;
    std::cout << num << " in Roman numerals is " << intToRoman(num) << std::endl;
    return 0;
}

