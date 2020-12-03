#include <stdio.h>

int main(void) {
	// khai bao bien DT,CV,R kieu Double
double DT, CV, R;
//gan R=1.5
R = 1.5; 
//khai bao hang kieu double
const double PI = 3.14;
// tinh chu vi va dien cua hinh tron
CV = 2 * R * PI;
DT = R * R * PI;
printf("CV = 2 * R * PI = %0.2f\n",CV);
printf("DT = R * R * PI = %0.3f\n",DT);
//Hienthi R, CV, DT theo 2 hàng, 3 cot
printf("R   |  CV  |   DT\n");
printf("1.5 | CV = 2 * R *PI | DT = R * R * PI");
  return 0;
}
