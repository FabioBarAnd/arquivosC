#include <stdio.h>

int dentro_ret (int, int, int, int, int, int);

int main(){
	int x0, y0, x1, y1, x, y;
	int denfor;
	
	scanf("%d %d %d %d %d %d", &x0, &y0, &x1, &y1, &x, &y);
	
	denfor = dentro_ret (x0, y0, x1, y1, x, y);
	
	if(denfor == 1) printf("INTERNO");
	else printf("EXTERNO");
	
	return 0;
}

int dentro_ret (int x0, int y0, int x1,int y1,int x,int y){
	if((x>=x0 && x<=x1) && (y>=y0 && y<=y1)) return 1;
	else return 0;
}
