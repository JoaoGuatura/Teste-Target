#include <iostream>
#include <iomanip>  

int main() {
    double sp = 67836.43;
    double rj = 36678.66;
    double mg = 29229.88;
    double es = 27165.48;
    double outros = 19849.53;

    double total = sp + rj + mg + es + outros;

    double sp_percent = (sp / total) * 100;
    double rj_percent = (rj / total) * 100;
    double mg_percent = (mg / total) * 100;
    double es_percent = (es / total) * 100;
    double outros_percent = (outros / total) * 100;

    std::cout << std::fixed << std::setprecision(2);  

    std::cout << "Percentual de representação por estado:" << std::endl;
    std::cout << "SP: " << sp_percent << "%" << std::endl;
    std::cout << "RJ: " << rj_percent << "%" << std::endl;
    std::cout << "MG: " << mg_percent << "%" << std::endl;
    std::cout << "ES: " << es_percent << "%" << std::endl;
    std::cout << "Outros: " << outros_percent << "%" << std::endl;

    return 0;
}
