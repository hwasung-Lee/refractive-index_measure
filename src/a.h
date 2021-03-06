#include <termios.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define height 15.5 //height : 15.5cm
#define max_buf 128
#define sin_45 0.85090352453//sin(M_PI/2)

int measure_arc(int fd, double* angle, double* index);
int measure(int fd, double* dis);

int save_csv(int cnt, double* indexs, double* angles);
double avg(double* value, int n);
