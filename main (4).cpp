/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;

// Definição da classe Estado
class Estado {
public:
    // Atributos com valores de faturamento
    float SP, RJ, MG, ES, Outros;

    // Construtor para inicializar os valores
    Estado() {
        SP = 67836.43;
        RJ = 36678.66;
        MG = 29229.88;
        ES = 27165.48;
        Outros = 19849.53;
    }

    // Método para calcular o faturamento total
    float faturamento_total() {
        return SP + RJ + MG + ES + Outros;
    }

    // Método para calcular o percentual de um estado em relação ao total
    float calcular_percentual(float estado, float total) {
        return (estado / total) * 100;
    }

    // Método para exibir os percentuais de todos os estados
    void exibir_percentuais() {
        float total = faturamento_total();
        cout << "Percentual de SP: " << calcular_percentual(SP, total) << "%" << endl;
        cout << "Percentual de RJ: " << calcular_percentual(RJ, total) << "%" << endl;
        cout << "Percentual de MG: " << calcular_percentual(MG, total) << "%" << endl;
        cout << "Percentual de ES: " << calcular_percentual(ES, total) << "%" << endl;
        cout << "Percentual de Outros: " << calcular_percentual(Outros, total) << "%" << endl;
    }
};

int main() {
    // Criação do objeto da classe Estado
    Estado estado;

    // Exibe o faturamento total
    cout << "O faturamento total é: R$ " << estado.faturamento_total() << endl;

    // Exibe os percentuais de cada estado
    estado.exibir_percentuais();

    return 0;
}
