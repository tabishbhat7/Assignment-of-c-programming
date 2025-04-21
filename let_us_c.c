#include<stdio.h>

int main() {

// (a)
float basic, da, hra, gross;
scanf("%f", &basic);
da = 0.4 * basic;
hra = 0.2 * basic;
gross = basic + da + hra;
printf("%f\n", gross);

// (b)
float km;
scanf("%f", &km);
printf("%f\n", km * 1000);
printf("%f\n", km * 3280.84);
printf("%f\n", km * 39370.1);
printf("%f\n", km * 100000);

// (c)
int a, b, c, d, e, total;
float per;
scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
total = a + b + c + d + e;
per = total / 5.0;
printf("%d\n", total);
printf("%f\n", per);

// (d)
float f, cel;
scanf("%f", &f);
cel = (f - 32) * 5 / 9;
printf("%f\n", cel);

// (e)
float l, br, r;
scanf("%f%f%f", &l, &br, &r);
printf("%f\n", l * br);
printf("%f\n", 2 * (l + br));
printf("%f\n", 3.14 * r * r);
printf("%f\n", 2 * 3.14 * r);

// (f)
int c1, d1, temp;
scanf("%d%d", &c1, &d1);
temp = c1;
c1 = d1;
d1 = temp;
printf("%d %d\n", c1, d1);

// (g)
int n, sum = 0;
scanf("%d", &n);
sum += n % 10; n /= 10;
sum += n % 10; n /= 10;
sum += n % 10; n /= 10;
sum += n % 10; n /= 10;
sum += n;
printf("%d\n", sum);

// (h)
int num, rev = 0;
scanf("%d", &num);
rev = rev * 10 + num % 10; num /= 10;
rev = rev * 10 + num % 10; num /= 10;
rev = rev * 10 + num % 10; num /= 10;
rev = rev * 10 + num % 10; num /= 10;
rev = rev * 10 + num;
printf("%d\n", rev);

// (i)
int n4, first, last;
scanf("%d", &n4);
last = n4 % 10;
first = n4 / 1000;
printf("%d\n", first + last);

// (j)
int pop = 80000;
int men = 0.52 * pop;
int literate = 0.48 * pop;
int literate_men = 0.35 * pop;
int illiterate_men = men - literate_men;
int illiterate_women = pop - literate - illiterate_men;
printf("%d\n", illiterate_men);
printf("%d\n", illiterate_women);

// (k)
int amt, h, f1, t1;
scanf("%d", &amt);
h = amt / 100;
amt %= 100;
f1 = amt / 50;
amt %= 50;
t1 = amt / 10;
printf("%d %d %d\n", h, f1, t1);

// (l)
float sp, profit, cp;
scanf("%f%f", &sp, &profit);
cp = (sp - profit) / 15;
printf("%f\n", cp);

// (m)
int m, d1, d2, d3, d4, d5;
scanf("%d", &m);
d5 = m % 10; m /= 10;
d4 = m % 10; m /= 10;
d3 = m % 10; m /= 10;
d2 = m % 10; m /= 10;
d1 = m;
d1 = (d1 + 1) % 10;
d2 = (d2 + 1) % 10;
d3 = (d3 + 1) % 10;
d4 = (d4 + 1) % 10;
d5 = (d5 + 1) % 10;
printf("%d%d%d%d%d\n", d1, d2, d3, d4, d5);

}