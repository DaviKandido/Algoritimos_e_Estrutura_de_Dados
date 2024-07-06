
#include <iostream>
#include <string> 
#include <algorithm> 

int calcularHamming(int x, int y) {
  std::string numero1, numero2;


  while (x > 0) {
    numero1 += (x % 2) + '0'; 
    x /= 2;
  }
  while (y > 0) {
    numero2 += (y % 2) + '0'; 
    y /= 2;
  }

  std::reverse(numero1.begin(), numero1.end());
  std::reverse(numero2.begin(), numero2.end());

  int diferencaTamanho = numero1.length() - numero2.length();
  if (diferencaTamanho > 0) {
    numero2.insert(0, diferencaTamanho, '0'); 
  } else if (diferencaTamanho < 0) {
    numero1.insert(0, -diferencaTamanho, '0');
  }


  int diferencas = 0;
  for (int i = 0; i < numero1.length(); i++) {
    if (numero1[i] != numero2[i]) {
      diferencas++;
    }
  }

  return int(diferencas);
}

int main() {
  int x, y;
  std::cin >> x >> y;
  std::cout << calcularHamming(x, y);
  return 0;
}