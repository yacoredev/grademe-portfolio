// point is provided as is. Keep both fields and their order.
typedef struct point
{
	int	x;
	int	y;
} point;

// point_distance2 returns the squared distance between a and b, widened to long
// before any subtraction and before any multiplication.
long	point_distance2(point a, point b)
{
	long	x_1 = (long)a.x;
	long	x_2 = (long)b.x;
	long	y_1 = (long)a.y;
	long	y_2 = (long)b.y;
	long	deff_x = (x_1 - x_2);
	long	deff_y = (y_1 - y_2);

	return (deff_x * deff_x + deff_y * deff_y);
}
