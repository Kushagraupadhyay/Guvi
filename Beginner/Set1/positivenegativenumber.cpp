//program to check if a number is positive or negative
#include <iostream>
using namespace std;
int main() {
	int x;
	scanf("%d",&x);
	if(x>0)
	printf("Positive");
	else if (x==0)
	printf("Zero");
	else if(x<0)
	printf("Negative");
	else 
        printf("Invalid Input")
	return 0;
}
