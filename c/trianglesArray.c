#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
You are given  triangles, specifically, their sides a, b and c. Print them in the same style but sorted by their areas from the smallest one to the largest one.
It is guaranteed that all the areas are different.
The best way to calculate a volume of the triangle is Heron's formula
Input Format
First line of each test file contains a single integer n. The lines follow with a,b and c on each separated by single spaces.
*/
struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
int my_area(triangle tr){
    int temp_p = (tr.a+tr.b+tr.c)/2;
    int area=sqrt(temp_p*(temp_p-tr.a)*(temp_p-tr.b)*(temp_p-tr.c));
    return area;
}

void sort_by_area(triangle* tr, int n) {
    for(int i=1;i<n;i++){
        int temp_area = my_area(tr[i]);
        int temp_a = tr[i].a;
        int temp_b = tr[i].b;
        int temp_c = tr[i].c;
        int j=i-1;
        while((temp_area<my_area(tr[j]))&&(j>=0)){
            tr[j+1].a = tr[j].a;
            tr[j+1].b = tr[j].b;
            tr[j+1].c = tr[j].c;
            j=j-1;
        }
        tr[j+1].a = temp_a;
        tr[j+1].b = temp_b;
        tr[j+1].c = temp_c;
   }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
