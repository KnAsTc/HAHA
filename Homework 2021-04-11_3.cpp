#include <iostream>
#include <cstdlib> /* �üƬ������ */
#include <ctime>   /* �ɶ�������� */
int main(){
  /* �T�w�üƺؤl */
  srand( time(NULL));

  /* ���Ͷü� */
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
