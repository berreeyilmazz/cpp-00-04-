#include "lib.h"

/*
int main(int ac, char **av) {
    if (ac < 2) {
        std::cout << "Missing parameter!" << std::endl;
        return (0);
    }
    std::string FileName = av[1];
    std::string outputFileName = FileName + ".replace";
    //av[1] açılıyor mu kontrol et, önden engelle
    std::ifstream File(FileName);
    File.open(FileName, std::ios::in);

    std::fstream Output(outputFileName, std::ios::out);
    Output.open(outputFileName, std::ios::out);              
    if (!File) {                        
        std::cout<<"File doesn’t exist.";          
    } 
    else { 
        std::string str;                     
        while (File >> str) {
            Output<< str << std::endl;                  
        }
    }
    File.close();  
    Output.close();                
    return 0;
}
*/

#include <iostream>
#include <fstream>
#include <string>

#include <stdio.h>
void replaceAndWrite(const std::string& filename, const std::string& s1, const std::string& s2) {
    std::ifstream inputFile(filename);
    std::string outputFilename = filename + ".replace";
    std::ofstream outputFile(outputFilename);
    if (!inputFile.is_open()) {
        std::cerr << "Error opening file: " << filename << std::endl;
        return; }
    if (!outputFile.is_open()) {
        std::cerr << "Error creating output file: " << outputFilename << std::endl;
        inputFile.close(); // dosyanın açılmasını takiben hemen kapatılmadığı durumlar, dosyaya yapılan değişikliklerin hemen disk 
							//	üzerine yazılmasını geciktirebilir. Bu durumda, close fonksiyonu dosyanın güncel haliyle diskteki depolama birimine yazılmasını sağlar.
        return; }
    std::string line;
    while (std::getline(inputFile, line)) {
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos) 
		{
			std::string before = line.substr(0, pos);
        	std::string after = line.substr(pos + s1.length());
        	line = before + s2 + after;
        	pos += s2.length();
        }
        outputFile << line << std::endl;
    }
    inputFile.close();
    outputFile.close();
    std::cout << "Replacement completed. Output written to: " << outputFilename << std::endl;
}

int main(int argc, char *argv[]) {
    if (argc != 4) {
        std::cerr << "Incompatible output! It should be like that: ./Replace <filename> <s1> <s2>" << std::endl;
        return 1;
    }
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    replaceAndWrite(filename, s1, s2);

    return 0;
}
