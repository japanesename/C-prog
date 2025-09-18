#include<stdio.h>
void main(){
int x,n1,n2,n3,n4,n5;
printf("\n Input all 5 grade with s[ace:");
scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);
x = (n1+n2+n3+n4+n5)/5;
if (x >= 80){
printf("\n You got distinction\n");
}
else if (x >= 60 && x <= 79){
printf("\n You got first class\n");
}
else if (x >= 40 && x <= 59){
printf("\n You got second class\n");
}
else printf("\nYou failed\n");

}
