#include <iostream>
#include <stdlib.h>
using namespace std;

// 
class user_input {
    public:
        string output = "This program works!";
    void print_out(){
        cout << output << endl;
    }
};


int main(int argc, char *argv[]) {
    user_input input;
    input.print_out();
    return 0;
}