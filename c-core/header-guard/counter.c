#include "counter.h"

void	counter_reset(counter *item)
{
	item->value = 0;
}

void	counter_add(counter *item, int amount)
{
	item->value = item->value + amount;
}

int	counter_value(const counter *item)
{
	return (item->value);
}

/*
#include <stdio.h>
int main(void)
{
	counter c = { 7 };

	printf("Before Add: %d\n", counter_value(&c));
	counter_add(&c, 5);
	printf("After Add: %d\n", counter_value(&c));
	counter_reset(&c);
	printf("Reset Value: %d\n", counter_value(&c));
}
*/