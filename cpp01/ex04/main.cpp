#include "lib.h"


int main(int ac, char **av) {
    if (ac < 2) {
        std::cout << "Missing parameter!" << std::endl;
        return (0);
    }
    std::string FileName = av[1];
    std::string oput = FileName + ".replace";
    //av[1] açılıyor mu kontrol et, önden engelle
    std::ifstream File(FileName);
    File.open(FileName, std::ios::in);

    std::fstream Output(oput, std::ios::out);
    Output.open(oput, std::ios::out); /*             
    if (!File) {                        
        std::cout<<"File doesn’t exist.";          
    } 
    else { */
        std::string str;                     
        while (File >> str) {
            Output<< str << std::endl;                  
        }
   // }
    File.close();  
    Output.close();                
    return 0;
}