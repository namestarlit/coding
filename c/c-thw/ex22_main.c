#include "dbg.h"
#include "ex22.h"


const char *MY_NAME = "Paul J. John";

void scope_demo(int count)
{
	log_info("count is: %d", count);

	if (count > 10)
	{
		int count = 100; /* BAD! BUGS! */

		log_info("count in this scope is %d", count);
	}
	log_info("count in this scope %d", count);

	count = 3000;

	log_info("count after assign: %d", count);
}

int main(void)
{
	/* test out THE_AGE accessors */
	log_info("My name: %s, age: %d", MY_NAME, get_age());

	set_age(100);
	log_info("My age is now: %d", get_age());

	/* test out THE_SIZE extern */
	log_info("THE SIZE is: %d", THE_SIZE);
	print_size();

	THE_SIZE = 9;
	log_info("THE SIZE is now: %d", THE_SIZE);
	print_size();

	/* test the ratio function static */
	log_info("Ratio at first: %f", update_ratio(2.0));
	log_info("Ratio again: %f", update_ratio(10.0));
	log_info("Ratio once more: %f", update_ratio(300.0));

	/* test the the scope demo */
	int count = 4;

	scope_demo(count);
	scope_demo(count * 20);

	log_info("count after calling the scope_demo(): %d", count);

	return (0);
}
