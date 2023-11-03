#include <iostream>

int main() {
    int num1; //declare num1 as variable
    int num2; //declare num1 as variable
    double total; // declare total as new variable that can save value num1 and num2
    char opt, user; // declare opt and user to input arithmetic charachter (+,-,*,/)
  
    begin:
    std::cout << "****** Calculator ******\n";
  
    std::cout << "Input your first number :"; // tell user to input the first number
    std::cin >> num1;
    std::cout << "Input your second number :"; // tell user to input the second number
    std::cin >> num2; 
    std::cout << "Input your Operator (+,-,*,/):"; // tell user to input the operator
    std::cin >> opt;    

    switch (opt) // using switch case to calculate the arithmetic operation
    {
    case '+':
        total = num1 + num2;
        std::cout << "Total " << num1 << '+' << num2 << ':' << total << '\n';
        break;
    
    case '-':
        total = num1 - num2;
        std::cout << "Total " << num1 << '-' << num2 << ':' << total << '\n';
        break;

    case '*':
        total = num1 * num2;
        std::cout << "Total " << num1 << '*' << num2 << ':' << total << '\n';
        break;
    
    case '/':
        total = num1 / num2;
        std::cout << "Total " << num1 << '/' << num2 << ':' << total << '\n';
        break;
    
    default:
        std::cout << "Please enter the operator correctly (+ - * /) :";
        break;
    }
    
    std::cout << "Continue? (Y/N) : "; // tell user if user wants to continue or no
    std::cin >> user;

    while(user == 'Y' || user == 'y'){ // if user wants to continue then program will loop to begin
        goto begin;
    }
    std::cout << "***END***"; // if user doesn't want to continue then program ends
        
    return 0;
}
