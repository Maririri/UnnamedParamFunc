int x1[3] = { 1, 2, 3 };
int x2[4] = { 1, 2, 3, 4 };
int x3[][1] = { 1, 2 };
int x4[] { 1, 2, 3, 4, 5 };
int x5[] ({ 1, 2, 3, 4, 5 });
char b0[] = { "foo" };
const char* b1[] = { "foo" };

void foo2(int x0[]) {
  auto t = (&x1);
  t = &x2; //Incompatible pointer types 'int const[3] *' and 'int const[4] *'
  t = &x0; //Incompatible pointer types 'int const[3] *' and 'int[] *'
  auto t2 = &x0;
  t2 = &x2; //Incompatible pointer types 'int[] *' and 'int const[4] *'
  t2 = &x1; //Incompatible pointer types 'int[] *' and 'int const[3] *'

  t2 = &x3; //Incompatible pointer types 'int[] *' and 'int const[2][1] *'
  t2 = &x4; //Incompatible pointer types 'int[] *' and 'int[5] *'
  t2 = &x5; //Incompatible pointer types 'int[] *' and 'int[5] *'

  t2 = &b0; //Incompatible pointer types 'int[] *' and 'char[4] *'
  t2 = &b1; //Incompatible pointer types 'int[] *' and 'char const *[1] *'
}