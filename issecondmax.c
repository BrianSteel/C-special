#include <stdio.h>

int main(void) {
	int a[50];
	int i, size;
	int eins, zwei;

	printf("\nEnter the size of array [max 50] : ");
	scanf("%d", &size);


	if (size>50 || size<1){
        printf("\nProvide the right size...\n");
        return 0;
	}

	printf("\n");

	for (i=0;i<size;i++){
        printf("Provide the Element %d : ",i+1);
        scanf("%d",&a[i]);
    }
	for (i = 0; i < size; i++){
		if(a[i] > eins){
			zwei = eins;
			eins = a[i];
		}
		else if(a[i] > zwei && a[i] < eins){
			zwei = a[i];
		}
	}
	printf("\nThe Second MAX is =  %d\n", zwei);

	return 0;

}