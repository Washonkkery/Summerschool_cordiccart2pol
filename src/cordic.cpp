
#include "cordiccart2pol.h"
#include<math.h>
void cordiccart2pol(data_t x, data_t y, data_t * r,  data_t * theta)
{
	double o;
	*r = sqrt(x * x + y * y);
	o =  atan(x / y);
	*theta = (o * 180) / 3.1415926;
}
 