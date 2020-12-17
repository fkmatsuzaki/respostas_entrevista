#include <iostream>
#include <string>
#include <map>

//codigo de Felipe Kenndy Matsuzaki
using namespace std;

int main()
{
   string texto;
   string resposta;
   map<int,string> mapRespostas;
   string valor;
   
    resposta = "";
    //1 - calculando a resposta
    for(int i = 1; i <= 100; i++)
    {
        texto = "";
        if((i % 3) == 0)
        {
             texto += "Foo";   
        }
        if((i % 5) == 0)
        {
             texto += "Baa";
        }
        if(texto.length() == 0)
        {
            texto = std::to_string(i);
        }
        mapRespostas[i] = texto;
        texto += "\n";
        std::cout << texto;
        resposta += texto;
    }
    //2 - mas mais rapido/eficiente que calcular a resposta é ter a 
    //resposta pronta previamente e só exibir
    //std::cout << resposta;
    
    //3 - Ou mesmo as repostas podem ser incrementadas aos poucos e consultadas prontas
    //getline (std::cin, valor);
    //cout << mapRespostas[std::stoi(valor)];
}
