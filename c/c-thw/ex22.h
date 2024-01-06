#ifndef __EX22_H__
#define __EX22_H__

/* make THE_SIZE in ex22.c available to other .c files */
extern int THE_SIZE;

/* gets and sets an internal static variable in ex22.c */
int get_age();
void set_age(int age);

/* update static variable that's inside update_ratio */
double update_ratio(double ratio);
void print_size();

#endif /* --EX22_H__ */
