#include <string.h>
#include <iostream>
 
using namespace std;
 
int main() {
 
char p1[30], p2[30], p3[30];

scanf("%s", &p1);
scanf("%s", &p2);
scanf("%s", &p3);


if (p1 == "vertebrado" && p2 == "ave"){
	if (p3 == "carnivoro"){
		printf("aguia\n");
	}else{
		printf("pomba\n");
	}
}
else if (p1 == "vertebrado" && p2 == "mamifero"){
	if (p3 == "onivoro"){
		printf("homem\n");
	}else{
		printf("vaca\n");
	}
}
else if (p1 == "invertebrado" && p2 == "inseto"){
	if (p3 == "hematofago"){
		printf("pulga\n");
	}else{
		printf("lagarta\n");
	}
}
else if (p1 == "invertebrado" && p2 == "anelideo"){
	if (p3 == "hematofago"){
		printf("sanguessuga\n");
	}else{
		printf("minhoca\n");
	}
} 
    return 0;
}

