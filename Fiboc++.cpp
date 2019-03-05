#include <iostream>
#include <typeinfo>
using namespace std;

// signed char, desde –128 hasta 127
// se desborda en fib(12)
char fib2(int n) {
  if (n==0) return 0;
  else if (n==1) return 1;
  char prev = 0;
  char curr = 1;
    for (int i=1; i<n; i++){
      int next = prev + curr;
      prev = curr;
      curr = next;
    }
    return(curr);
  }

// unsigned char, desde 0 hasta 255
// se desborda en fib(14)
unsigned char fib3(int n) {
  if (n==0) return 0;
  else if (n==1) return 1;
  char prev = 0;
  char curr = 1;
    for (int i=1; i<n; i++){
      int next = prev + curr;
      prev = curr;
      curr = next;
    }
    return(curr);
  }

// signed short int, desde –32,768 hasta 32,767
// se desborda en fib(24)
short int fib4(int n) {
  if (n==0) return 0;
  else if (n==1) return 1;
  int prev = 0;
  int curr = 1;
    for (int i=1; i<n; i++){
      int next = prev + curr;
      prev = curr;
      curr = next;
    }
    return(curr);
  }


// unsigned short int, desde 0 hasta 65,535
// se desborda en fib(25)
unsigned short int fib5(int n) {
  if (n==0) return 0;
  else if (n==1) return 1;
  int prev = 0;
  int curr = 1;
    for (int i=1; i<n; i++){
      int next = prev + curr;
      prev = curr;
      curr = next;
    }
    return(curr);
  }

// signed int, desde –2,147,483,648 hasta 2,147,483,647
// se desborda en fib(47)
int fib(int n) {
  if (n==0) return 0;
  else if (n==1) return 1;
  int prev = 0;
  int curr = 1;
    for (int i=1; i<n; i++){
      int next = prev + curr;
      prev = curr;
      curr = next;
    }
    return(curr);
  }


// unsigned int, desde 0 hasta 4,294,967,295
// se desborda en fib(48)
unsigned int fib1(int n) {
  if (n==0) return 0;
  else if (n==1) return 1;
  int prev = 0;
  int curr = 1;
    for (int i=1; i<n; i++){
      int next = prev + curr;
      prev = curr;
      curr = next;
    }
    return(curr);
  }


// signed long long, desde –9,223,372,036,854,775,808 hasta 9,223,372,036,854,775,807
// se desborda en fib(93)
long long fib6(int n) {
  if (n==0) return 0;
  else if (n==1) return 1;
  long long prev = 0;
  long long curr = 1;
    for (int i=1; i<n; i++){
      long long next = prev + curr;
      prev = curr;
      curr = next;
    }
    return(curr);
  }


// unsigned short int, desde 0 hasta 18,446,744,073,709,551,615
// se desborda en fib(94)
unsigned long long fib7(int n) {
  if (n==0) return 0;
  else if (n==1) return 1;
  long long prev = 0;
  long long curr = 1;
    for (int i=1; i<n; i++){
      long long next = prev + curr;
      prev = curr;
      curr = next;
    }
    return(curr);
  }


int main() {

  int n;
  cin>>n;

  if (n<12)
    printf("Calculado con signed char:         %d \n", fib2(n));
  else {
    printf("%-37s" , "signed char se desborda en el: ");
    printf("12th termino.\n");
  }

  if (n<14)
    printf("Calculado con unsigned char:       %d \n", fib3(n) );
  else {
    printf("%-37s" , "unsigned char se desborda en el: ");
    printf("14th termino.\n");
  }

  if (n<24)
    cout<<"Calculado con signed short int:    "<<fib4(n)<<endl;
  else {
    printf("%-37s" , "signed short int se desborda en el: ");
    printf("24th termino.\n");
  }

  if (n<25)
    cout<<"Calculado con unsigned short int:  "<<fib5(n)<<endl;
  else {
    printf("%-37s" , "unsigned short int se desborda en el: ");
    printf("25th termino.\n");
  }

  if (n<47)
    cout<<"Calculado con signed int:          "<<fib(n)<<endl;
  else {
    printf("%-37s" , "signed int se desborda en el: ");
    printf("47th termino.\n");
  }

  if (n<48)
    cout<<"Calculado con unsigned int:        "<<fib1(n)<<endl;
  else {
    printf("%-37s" , "unsigned int se desborda en el: ");
    printf("48th termino.\n");
  }

  if (n<93)
    cout<<"Calculado con signed long long:    "<<fib6(n)<<endl;
  else {
    printf("%-37s" , "signed long long se desborda en el: ");
    printf("93th termino.\n");
  }

  if (n<94)
    cout<<"Calculado con unsigned long long:  "<<fib7(n)<<endl;
  else {
    printf("%-37s" , "unsigned long long se desborda en el: ");
    printf("94th termino.\n");
  }

}
