#include <stdio.h>
int main(void) {
	double pc=1.50 , ps=2.00 , pca=1.00 , pw=1.25;
	double money;
	int choice;
	printf("VENDING MACHINE \n 1. Chips   - $1.50 \n 2. Soda    - $2.00 \n 3. Candy   - $1.00 \n 4. Water   - $1.25 \n Choose an item (1-4): ");
	scanf("%d" , &choice);
	printf("enter amount : ");
	scanf("%lf" , &money);
	if (money<=0){
		printf("please enter a valid amount . ");
		return 0;
		}
	switch(choice) {
		case 1 :
			if (money==pc) 
				printf("you bought chips of $ %.2f . \n" , pc);
			else if (money > pc) {
				printf("you bought chips of $ %.2f . \n" , pc);
				printf("change : $ %.2f \n" , money-pc );
				}
			else 
				printf("extra $ %.2f is needed . " , pc-money);
			break;
		case 2 :
			if (money==ps) 
				printf("you bought soda of $ %.2f . " , ps);
			else if (money > ps) {
				printf("you bought soda of $ %.2f . \n" , ps);
				printf("change : $ %.2f \n" , money-ps );
				}
			else 
				printf("extra $ %.2f is needed . " , ps-money);
			break;	
		case 3 :
			if (money==pca) 
				printf("you bought candy of $ %.2f . " , pca);
			else if (money > pca) {
				printf("you bought candy of $ %.2f . \n" , pca);
				printf("change : $ %.2f \n" , money-pca );
				}
			else 
				printf("extra $ %.2f is needed . " , pca-money);
			break;
		case 4 :
			if (money==pw) 
				printf("you bought water of $ %.2f . " , pw);
			else if (money > pw) {
				printf("you bought water of $ %.2f . \n" , pw);
				printf("change : $ %.2f \n" , money-pw );
				}
			else 
				printf("extra $ %.2f is needed . " , pw-money);
			break;
		default :
			printf("invalid choice . \n");
		}
	return 0;
	}