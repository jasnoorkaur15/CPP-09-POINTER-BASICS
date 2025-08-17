//Jasnoor Kaur
//24070123049
//Batch: A2

#include <iostream>
using namespace std;

int main() {
    int m = 60;
    int *mptr = &m;

    float n = 3.67;
    float *nptr = &n;
    
    bool a = 20;
    bool *aptr = &a;
    
    double b = 44;
    double *bptr = &b;

    cout<<m<<"\n";
    cout<<"Address of original pointer: "<<mptr<<"\n";
    mptr++;
    cout<<m+1<<"\n";
    cout<<"Address of incremented pointer: "<<mptr<<"\n";
    
    cout<<"\n";
    
    cout<<n<<"\n";
    cout<<"Address of original pointer: "<<nptr<<"\n";
    nptr++;
    cout<<n+1<<"\n";
    cout<<"Address of incremented pointer: "<<nptr;
    
    cout<<"\n\n";
    
    cout<<a<<"\n";
    cout<<"Address of original pointer: "<<aptr<<"\n";
    aptr++;
    cout<<a+1<<"\n";
    cout<<"Address of incremented pointer: "<<aptr;
    
    cout<<"\n\n";
    
    cout<<b<<"\n";
    cout<<"Address of original pointer: "<<bptr<<"\n";
    bptr++;
    cout<<b+1<<"\n";
    cout<<"Address of incremented pointer: "<<bptr;
   
     
    return 0;
}

## SAMPLE OUTPUT:
60
Address of original pointer: 0x7ffe2355bc8c
61
Address of incremented pointer: 0x7ffe2355bc90

3.67
Address of original pointer: 0x7ffe2355bc88
4.67
Address of incremented pointer: 0x7ffe2355bc8c

1
Address of original pointer: 0x7ffe2355bc87
2
Address of incremented pointer: 0x7ffe2355bc88

44
Address of original pointer: 0x7ffe2355bc78
45
Address of incremented pointer: 0x7ffe2355bc80

=== Code Execution Successful ===
