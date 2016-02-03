//pe12-2a.h
#define METRIC 0
#define US 1
int set_mode(int * m);
void get_info(int mode,double * distance,double * consume);
void show_info(int mode,double distance,double consume);