#include <iostream>
#include <string>

int main () {
    //lei(primeira ou segunda)
    int lei;
    //valor de retorno
    std::string valor;
    //tensão (em volts)
    float V = 0;
    //corrente (em ampères)
    float I = 0;
    //resistência (em ohms)
    float R = 0;
    //resistividade do material
    float p = 0;
    //comprimento do fio
    float L = 0;
    //área de secção transversal
    float A = 0;
    
    std::cout << "===lei de ohm===\n";
    std::cout << "qual a lei que irá ser aplicada?(utilize 1 para a primeira lei e 2 para a segunda)\n";
    std::cin >> lei;
    
    if (lei == 1) {
       
       std::cout << "qual o valor que deve ser descoberto?(tensao, corrente, resistencia): ";
       std::cin >> valor;
    
       if (valor == "tensao") {
          std::cout << "insira o valor da resistência(em ohms): ";
          std::cin >> R;
       
          std::cout << "insira o valor da corrente(em ampères): ";
          std::cin >> I;
       
          V = R * I;
          std::cout << "a tensão é: " << V << std::endl;
       }
       else if (valor == "corrente") {
          std::cout << "insira o valor da tensão(em volts): ";
          std::cin >> V;
       
          std::cout << "insira o valor da resistência(em ohms): ";
          std::cin >> R;
       
          I = V / R;
          std::cout << "a corrente é: " << I << std::endl;
       }
       else if (valor == "resistencia") {
          std::cout << "insira o valor da tensão(em volts): ";
          std::cin >> V;
       
          std::cout << "insira o valor da corrente(em ampères): ";
          std::cin >> I;
       
          R = V / I;
          std::cout << "a resistência é: " << R << std::endl;
       }
       else {
          std::cout << "erro: valor a ser descoberto inválido.\n";
          std::cout << "================";
          return 1;
       }
    }
    else if (lei == 2) {
       std::cout << "qual o valor que deve ser descoberto?(resistencia, resistividade, comprimento, area): \n";
       std::cin >> valor;
       
       if (valor == "resistencia") {
          std::cout << "insira o valor da resistividade: ";
          std::cin >> p;
          
          std::cout << "insira o valor do comprimento: ";
          std::cin >> L;
          
          std::cout << "insira o valor da área: ";
          std::cin >> A;
          
          R = p * L / A;
          
          std::cout << "a resistência é: " << R << std::endl;
       }
       else if (valor == "resistividade") {
          std::cout << "insira o valor da resistência: ";
          std::cin >> R;
          
          std::cout << "insira o valor da área: ";
          std::cin >> A;
          
          std::cout << "insira o valor do comprimento: ";
          std::cin >> L;
          
          p = R * A / L;
          
          std::cout << "a resistividade é: " << p << std::endl;
       }
       else if (valor == "comprimento") {
          std::cout << "insira o valor da resistência: ";
          std::cin >> R;
          
          std::cout << "insira o valor da área: ";
          std::cin >> A;
          
          std::cout << "insira o valor da resistividade: ";
          std::cin >> p;
          
          L = R * A / p;
          
          std::cout << "o comprimento é: " << L << std::endl;
       }
       else if (valor == "area") {
          std::cout << "insira o valor da resistividade: ";
          std::cin >> p;
          
          std::cout << "insira o valor do comprimento: ";
          std::cin >> L;
          
          std::cout << "insira o valor da resistência: ";
          std::cin >> R;
          
          A = p * L / R;
          
          std::cout << "a área é: " << A << std::endl;
       }
       else {
          std::cout << "erro: input inválido.";
          return 1;
       }
    }
    else {
       std::cout << "erro: input inválido.";
       return 1;
    }
    
    std::cout << "================";
    return 0;
}
