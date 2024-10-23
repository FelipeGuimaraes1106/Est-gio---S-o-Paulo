/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <fstream>
#include <nlohmann/json.hpp> // Inclua a biblioteca nlohmann/json

using json = nlohmann::json;
using namespace std;

// Função para calcular faturamento
void calcular_faturamento(const json& faturamento_json) {
    double menor_faturamento = 1e9; // Inicializa com um valor alto
    double maior_faturamento = -1; // Inicializa com um valor negativo
    double soma_faturamento = 0; // Para somar os valores de faturamento
    int dias_faturamento = 0; // Contador de dias com faturamento

    // Percorre os dias do faturamento
    for (auto& dia : faturamento_json["faturamento"].items()) {
        double valor = dia.value(); // Obtém o valor do faturamento
        if (valor > 0) { // Ignora dias sem faturamento
            // Atualiza o menor e maior faturamento
            if (valor < menor_faturamento) {
                menor_faturamento = valor;
            }
            if (valor > maior_faturamento) {
                maior_faturamento = valor;
            }
            soma_faturamento += valor; // Acumula o faturamento
            dias_faturamento++; // Incrementa o contador de dias
        }
    }

    // Calcula a média mensal
    double media_mensal = soma_faturamento / dias_faturamento;

    // Contar dias com faturamento acima da média
    int dias_acima_media = 0; // Contador de dias acima da média
    for (auto& dia : faturamento_json["faturamento"].items()) {
        double valor = dia.value(); // Obtém o valor do faturamento
        if (valor > media_mensal) {
            dias_acima_media++; // Incrementa se o valor for maior que a média
        }
    }

    // Exibir resultados
    cout << "Menor faturamento: R$ " << menor_faturamento << endl;
    cout << "Maior faturamento: R$ " << maior_faturamento << endl;
    cout << "Média mensal: R$ " << media_mensal << endl;
    cout << "Dias com faturamento acima da média: " << dias_acima_media << endl;
}

int main() {
    // Dados de faturamento em formato JSON
    const char* faturamento_json_str = R"({
        "faturamento": {
            "01": 1000,
            "02": 2000,
            "03": 3000,
            "04": 0,
            "05": 2500,
            "06": 0,
            "07": 0,
            "08": 4000,
            "09": 5000,
            "10": 1000,
            "11": 0,
            "12": 6000,
            "13": 0,
            "14": 7000,
            "15": 0,
            "16": 8000,
            "17": 9000,
            "18": 0,
            "19": 10000,
            "20": 0,
            "21": 11000,
            "22": 0,
            "23": 12000,
            "24": 0,
            "25": 13000,
            "26": 0,
            "27": 14000,
            "28": 15000,
            "29": 0,
            "30": 16000
        }
    })";

    // Parse JSON
    json faturamento_json = json::parse(faturamento_json_str);
    
    // Chama a função para calcular faturamento
    calcular_faturamento(faturamento_json);

    return 0;
}