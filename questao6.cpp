
#include <iostream>

using namespace std;
//codigo feito por Felipe Kenndy Matsuzaki
//--------------------------------------------------------------------------
int NumeroChar(string s)
{
    int n_char;
    
    for(n_char = 0; s[n_char] != '\0'; n_char++)
    {
        //encontrou o fim da string    
    }
    
    return n_char;
}
//--------------------------------------------------------------------------
int main()
{
    string s;
    int numero_char = -1;
    
    cout<<"Digite a string que deseja saber o tamanho\n";
    getline (std::cin, s);
    //percorre o string ateh o fim
    numero_char = NumeroChar(s.c_str());
    cout<<"O número de caracteres da string é: " << numero_char;
    
    
    return 0;
}