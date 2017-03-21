#include <stdio.h>
#include <string.h>
#include "ctypes.h"

extern int Place_Order(table_index_type Table,
                       seat_index_type Seat,
                       struct order_type Order);

extern int Clear_Table(table_index_type Table);

extern float Get_Check_Total(table_index_type Table);

extern void Add_Included_Dessert(struct order_type* Order);

int main()
{
  struct order_type order;
  int Total;
  int done;

  char line[10];

  done=0;
    while(!done)
    {
	  printf("C=ChickenOrder, P=FreePieOrder, K=FreeCakeOrder, G=Get_Check_Total, Z=Clear/Zero Table, Q=Quit : ");
	  scanf("%s",line);

	  switch (line[0])
	  {
		case 'c': case 'C':
		  order.Entree = CHICKEN;
		  Place_Order(1, 1, order);
		  break;
		case 'p': case 'P':
		  order.Entree = STEAK;
		  order.Salad = CAESAR;
		  order.Beverage = MIXED_DRINK;
		  Place_Order(1, 1, order);
		  break;
		case 'k': case 'K':
		  order.Entree = LOBSTER;
		  order.Salad = GREEN;
		  order.Beverage = WINE;
		  Place_Order(1, 1, order);
		  break;
		case 'g': case 'G':
		  Total = Get_Check_Total(1);
		  printf("The Total is %d\n", Total);
		  break;
		case 'z': case 'Z':
		  Clear_Table(1);
		  break;
		case 'q': case 'Q':
		  done = 1;
		  break;
	  }
    }
	  

  return 0;
}
