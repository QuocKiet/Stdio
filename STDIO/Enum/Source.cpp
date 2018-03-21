 #include <stdio.h>


enum  Direc
{
	up,
	down,
	left,
	right
};
enum Bool
{
	//right,
	wrong
};

#define ADD(a,b) ((a)+(b))
#define MUL(a,b) ((a)*(b))

int Sum(int a, int b)
{
	return (a + b);
}


int main()
{
	/*int t = MUL(ADD(3, 4), 2);
	printf("%d", t);*/

	int (*p)(int, int);
	p = &Sum;
	int a = p(1, 2);
	printf("\n%d",a);
	while (true);
	return 0;
} 