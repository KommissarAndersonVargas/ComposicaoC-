// ComposicaoC++.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <vector>

using namespace std; 

class Contract {

public: 
    double time;
    string tcontract;
   
    Contract(double t, string ct) 
    {
        time = t;
        tcontract = ct;
    }

};
class Employee {

public:
    string name;
    double salary;
    vector<Contract> ct;

    Employee(string n, double s, Contract ct1) {

        name = n;
        salary = s; 
        ct.push_back(ct1);
    }


};
int main()
{
    vector<Employee> vemp;
    Contract c1(12, "clt");
    Employee e1("Jose", 1000.0, c1);
    
    vemp.push_back(e1);
    std::cout << vemp[0].name << endl;
    cout << vemp[0].salary << endl;
    cout << vemp[0].ct[0].tcontract << endl;
    cout << vemp[0].ct[0].time << endl;

}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
