#include <iostream>
#include <string>
#include <math.h>
#include <stdio.h>
using namespace std;

int start_num = 23;
float real_num = 23.3333;

int main() {
int total = 0;
for ( int i = 0; i < 1000; i++ ) {
if ( i % 3 == 0 || i % 5 == 0 ) {
printf( " %i ", i );
total = total + i;
}
}
printf( "\nTotal: %i\n", total );
return 0;
}