#include <stdio.h>

int main(void) {

  int n = 5, m = 2;
  int t = 1, f = 0;

  //math operator
  printf("%d + %d = %d\n", n, m, n+m);
  printf("%d - %d = %d\n", n, m, n-m);
  printf("%d * %d = %d\n", n, m, n*m);
  printf("%d / %d = %d\n", n, m, n/m);
  printf("%d %% %d = %d\n", n, m, n%m);

  //bit operator
  printf("%d | %d = %d\n", n, m, n|m);
  printf("%d & %d = %d\n", n, m, n&m);
  printf("~%d = %d\n", n, ~n);
  printf("%d<<%d = %d\n",n, m, n<<m);
  printf("%d>>%d = %d\n",n, m, n>>m);

  //logic operator
  printf("%d && %d = %d\n", t, f, t&&f);
  printf("%d || %d = %d\n", t, f, t||f);
  printf("!%d = %d", t, !(t));
  
  return 0;
}
