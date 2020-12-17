#include <iostream>
#include <string>

//codigo de Felipe Kenndy Matsuzaki
using namespace std;
//------------------------------------------------------
string ConcatERemove(string s, string t, int k) 
{
    int i, j, l;
   
    //se o k foi maior iguala soma dos comprimentos 
    //das duas strings é só remover toda e depois adicionar a outra
    if( k >= ((int)s.size() + (int)t.size()) )
    {
        return "sim";
    }
    //verifica os outros casos
    //inicializa variaveis
    i = j = 0;
    //percore ambas strings verificando quando os char são diferentes
    for(; ((i < (int)s.size()) && (j < (int)t.size())); i++, j++)
    {
        if(s[i] != t[j])
        {
            break;
        }
    }
    //quanto é necessario remover e adicionar?
    l = ((int)s.size() - i) + ((int)t.size() - j);
    //se o necessario for menor ou igual ao K é possivel
    //mas também é necesario verificar se a diferença entre o necessário e o disponível é par
    //dessa forma é possivel retira e recolocar uma letra até bater o k
    if((l <= k) && (((k - l) % 2)== 0) )
    {
        return "sim";
    }
    
    return "não";
}
//------------------------------------------------------
bool StringValida(string a) 
{
    //verifica comprimento
    if((a.length() < 1) || (a.length() > 100))
    {
        return false;
    }
    //verifica intervalo dos char
    for(int i = 0; i < (int)a.size(); i++)
    {   //verifica se é uma letra minuscula entre a e z
       if(!(a[i] <= 'z' && a[i] >= 'a'))
       {
           return false;
       }
    }
    
    return true;
}
//------------------------------------------------------
bool KValido(int a) 
{
    bool retorno;
    //verifica se o k esta entre as limitacoe
    retorno = ((a >= 1) && (a <= 100));
    
    return retorno;
}
//------------------------------------------------------
int ObtemK(int &k, string nome) 
{
    bool valido = false;
    string valor;
  
    //obtem a string 
    cout << "Qual o inteiro " << nome <<" ?\n";
    //fica perguntando até o usuario acertar
    while (!valido)
    { 
        getline (std::cin, valor);
        //verifica se o usuario cansou de tentar e mandou um vazio.
        if(valor.empty())
        {
            cout << "Cancelado.\n";
            return -1;
        }
        valido = KValido(std::stoi(valor));
        if(!valido)
        {
            cout << "k inválido, digite novamente um numero entre 1 e 100.\n";
        }
    }
    
    return 0;
}
//------------------------------------------------------
int ObtemString(string &s, string nome) 
{
    bool valido = false;
    
    //obtem a string 
    cout << "Qual a string " << nome <<" ?\n";
    //fica perguntando até o usuario acertar
    while (!valido)
    { 
        getline (std::cin, s);
        //verifica se o usuario cansou de tentar e mandou um vazio.
        if(s.length() == 0)
        {
            cout << "Cancelado.\n";
            return -1;
        }
        valido = StringValida(s);
        if(!valido)
        {
            cout << "String inválida, digite novamente usando somente letras minúsculas.\n";
        }
    }
    
    return 0;
}
//------------------------------------------------------
int main()
{
    string s, t, resposta;
    int k = -1;
    
    
    
    //obtem a string s
    if(ObtemString(s, "s") < 0)
    {
        return 0;
    }
    //obtem a string t
    if(ObtemString(t, "t") < 0)
    {
        return 0;
    }
    //obtem o inteiro k
    if(ObtemK(k, "k") < 0)
    {
        return 0;
    }
    //verifica
    resposta = ConcatERemove(s,t,k);
    cout << resposta;
    
    return 0;
}

