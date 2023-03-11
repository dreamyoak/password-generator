#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

int main() {
    const char list[] = "0123456789"
                        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                        "abcdefghijklmnopqrstuvwxyz"
                        "()?!.#%@^=+-'№&*`~;:<>{}";
    while (true){
      int length = sizeof(list) - 1;
      srand(time(0));
      std::string random;
      for(int m = 0; m < 12; m++) {
        random += list[rand() % length];
      }
      std::cout << "Your password: " << random << "\n";
      std::string again;
      std::cout << "again? (y/n) >: ";
      std::cin >> again;
      if (again == "y"){
      } else if (again == "n"){
         break;
      }
    }
}
