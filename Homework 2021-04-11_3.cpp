#include <iostream>
#include <cstdlib> /* 亂數相關函數 */
#include <ctime>   /* 時間相關函數 */
int main(){
  /* 固定亂數種子 */
  srand( time(NULL));

  /* 產生亂數 */
  double x = (double) rand();
  double y = (double) x / (RAND_MAX + 1.0);
  for(int i =0;i<100;i++){
  x = (double) rand();
  y = (double) x / (RAND_MAX + 1.0);
  std::cout << "x = " << x << std::endl;
  std::cout << "y = " << y << std::endl;
  std::cout << "RAND_MAX  = " << RAND_MAX  << std::endl;}
  return 0;
}
