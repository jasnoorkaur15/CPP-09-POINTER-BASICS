//Jasnoor Kaur
//24070123049
//Batch:A2

#include <iostream>
using namespace std;

int main() {
    char str[] = "Mishree";
    
    char *ptr = str;
    
    while(*ptr !='\0'){
        cout<<*ptr;
        ptr++;
    }

    return 0;
}

## SAMPLE OUTPUT

Mishree
