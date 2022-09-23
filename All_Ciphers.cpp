/*
FCAI – Programming 1 – 2022 - Assignment2; 
Program Name: All_Ciphers.cpp
Program Description: 10 Different Cipher &  Decipher Algorithms  
Last Modification Date: 21/03/2022
Purpose: Learn ciphering tecnique.
*/
#include <bits/stdc++.h>

//Code ID 0
std::map<std::string, int> dic0{{"A",0},{"B",1},{"C",2},{"D",3},
                        {"E",4},{"F",5},{"G",6},{"H",7},
                        {"I",8},{"J",9},{"K",10}, {"L",11},
                        {"M",12},{"N",13},{"O",14},{"P",15},
                        {"Q",16},{"R",17},{"S",18},{"T",19},
                        {"U",20},{"V",21},{"W",22},{"X",23},
                        {"Y",24},{"Z",25} };
void encryption0(std::string text);

void decryption0(std::string text);


//Code ID 1
void encyption1(std::string text, int shift);

void decryption1(std::string text, int shift);


//Code ID 2
std::map<std::string, std::string> dic2{{"A","Z"},{"B","Y"},{"C","X"},{"D","W"},
                        {"E","V"},{"F","U"},{"G","T"},{"H","S"},
                        {"I","R"},{"J","Q"},{"K","P"}, {"L","O"},
                        {"M","N"}};
void encrypt_decrypt2(std::string text);


//Code ID 3
std::map<char, int> dic3{{'A',0},{'B',1},{'C',2},{'D',3},
                    {'E',4},{'F',5},{'G',6},{'H',7},
                    {'I',8},{'J',9},{'K',10}, {'L',11},
                    {'M',12},{'N',13},{'O',14},{'P',15},
                    {'Q',16},{'R',17},{'S',18},{'T',19},
                    {'U',20},{'V',21},{'W',22},{'X',23},
                    {'Y',24},{'Z',25} };
void encryption3(std::string text,std::string key);

void decryption3(std::string text,std::string key);

std::string upper3(std::string &txt);

bool check_input3(std::string text, std::string key);


//Code ID 4
void encryption4(std::string text);

void decryption4(std::string text);


//Code ID 5
std::map<char, char> dic5{{'a','*'},{'b','*'},{'c','*'},{'d','*'},
                {'e','*'},{'f','*'},{'g','*'},{'h','*'},
                {'i','*'},{'j','*'},{'k','*'}, {'l','*'},
                {'m','*'},{'n','*'},{'o','*'},{'p','*'},
                {'q','*'},{'r','*'},{'s','*'},{'t','*'},
                {'u','*'},{'v','*'},{'w','*'},{'x','*'},
                {'y','*'},{'z','*'} };
void encryption5(std::string text);

void decryption5(std::string text);
// Change values of chracters in map according to key
void dic_change5(std::string key);
// Change text to lower case
void to_lower5(std::string &text);

//Code ID 6
char table[6][6] = {{'0','1','2','3','4','5'},
                {'1','A','B','C','D','E'},
                {'2','F','G','H','I','K'},
                {'3','L','M','N','O','P'},
                {'4','Q','R','S','T','U'},
                {'5','V','W','X','Y','Z'}};
void keys_table6();

void encryption6(std::string text);

void decryption6(std::string text);


//Code ID 7
std::map<std::string, std::string> dic7{{"A",".-"},{"B","-..."},{"C","-.-."},{"D","-.."},
                    {"E","."},{"F","..-."},{"G","--."},{"H","...."},
                    {"I",".."},{"J",".---"},{"K","-.-"}, {"L",".-.."},
                    {"M","--"},{"N","-."},{"O","---"},{"P",".--."},
                    {"Q","--.-"},{"R",".-."},{"S","..."},{"T","-"},
                    {"U","..-"},{"V","...-"},{"W",".--"},{"X","-..-"},
                    {"Y","-.--"},{"Z","--.."} };

void encryption7(std::string text);

void decryption7(std::string text);


//Code ID 8
int hex_to_dec8(std::string hex);

void encryption8(std::string text, char secretKey);

void decryption8(std::string text, char secretKey);


//Code ID 9
void encryption9(std::string text);

void decryption9(std::string& text);


int main(){
    std::string text, key; int option,option2, count = 0, shift;
    std::string Enctext, Dectext; 
    bool flag = true;
    char secretKey; int character;
    while(true){
        std::cout << "\n---------------------------------" <<
            "\nAhlan yaa habibi\n" <<
            "What Cipher do you like?\n" <<
            "1- Affine Cipher.\n" <<
            "2- Caesar Cipher.\n" <<
            "3- Abatsh Cipher.\n" 
            "4- Vignere Cipher\n" 
            "5- Baconian Cipher..\n" 
            "6- Simple Substitution Cipher.\n" 
            "7- Polybius Square Cipher.\n" 
            "8- Morse Cipher.\n"
            "9- Xor Cipher.\n" 
            "10- Rail Fence cipher.\n" 
            "11- Exit."<< std::endl;

            std::cout << "Choose an option: ";
            std::cin >> option;
            std::cin.ignore();

        if (option > 0 && option <= 10){
            switch(option){
                case 1:
                    while(true){
                    std::cout << "\n---------------------------------" <<
                        "\nAffine Cipher.\n" <<
                        "What do you like to do today?\n" <<
                        "1- Cipher a message.\n" <<
                        "2- Decipher a message.\n" <<
                        "3- Exit." << std::endl;
                        std::cout << "Choose an option: ";
                        std::cin >> option2;
                        std::cin.ignore();
                        if (option2 == 1){
                            std::cout<< "Plain text:\n";
                            std::getline(std::cin,text);
                            for(int i = 0; i < text.length(); i++){
                                if (text[i]>= 'a' && text[i] <='z')
                                    text[i]-=32;
                            }
                            encryption0(text);
                        }
                        else if(option2 ==  2){
                            std::cout << "Cipher text:\n";
                            std::getline(std::cin,text);
                            for(int i = 0; i < text.length(); i++){
                                if (text[i]>= 'a' && text[i] <='z')
                                    text[i]-=32;
                            }
                            decryption0(text);
                        }else{break;};
                    }

                    break;

                case 2:

                    while(true){
                    std::cout << "\n---------------------------------" <<
                        "\nCaesar Cipher\n" <<
                        "What do you like to do today?\n" <<
                        "1- Cipher a message.\n" <<
                        "2- Decipher a message.\n" <<
                        "3- Exit." << std::endl;
                        std::cout << "Choose an option: ";
                        std::cin >> option2;
                        std::cin.ignore();

                        if (option2 == 1){
                            std::cout << "Plain text:\n";
                            std::getline(std::cin,text);
                            for(int i = 0; i < text.length();i++){
                                if(text[i] >= 'a' && text[i] <='z'){
                                    text[i] -= 32;
                                }     
                            }
                            std::cout << "Enter shift:\n";
                            std::cin >> shift;
                            std::cout << "Cipher text:\n";
                            encyption1(text,shift);
                        }
                        else if (option2 == 2){
                            std::cout << "Cipher text:\n";
                            std::getline(std::cin,text);
                            for(int i = 0; i < text.length();i++){
                                if(text[i] >= 'a' && text[i] <='z'){
                                    text[i] -= 32;
                                }     
                            }
                            std::cout << "Enter shift:\n";
                            std::cin >> shift;
                            std::cout << "Plain text:\n";
                            decryption1(text,shift);
                        }
                        else{break;};
                    }

                    break; 

                case 3:

                    while(true){
                        std::cout << "\n---------------------------------" <<
                            "\nAbatsh Cipher.\n" <<
                            "What do you like to do today?\n" <<
                            "1- Cipher a message.\n" <<
                            "2- Decipher a message.\n" <<
                            "3- Exit." << std::endl;
                            std::cout << "Choose an option: ";
                            std::cin >> option2;
                            std::cin.ignore();
                            if (option2 == 1){
                            std::cout << "Plain text:\n";
                            std::getline(std::cin,text);
                            for (int i = 0; i < text.length(); i++){
                                if (text[i]>='a' && text[i] <= 'z')
                                    text[i]= text[i]-32;
                            }
                            std::cout << "Cipher text\n";
                            encrypt_decrypt2(text);
                            }
                            else if(option2 == 2){
                            std::cout << "Cipher text:\n";
                            getline(std::cin,text);
                            for (int i = 0; i < text.length(); i++){
                                if (text[i]>='a' && text[i] <= 'z')
                                    text[i]= text[i]-32;
                            }   
                            std::cout << "Plain text\n";
                            encrypt_decrypt2(text);       
                            }
                            else{break;};
                        };

                    break;

                case 4:
            
                    while(true){
                    std::cout << "\n---------------------------------" <<
                        "\nVignere Cipher\n" <<
                        "What do you like to do today?\n" <<
                        "1- Cipher a message.\n" <<
                        "2- Decipher a message.\n" <<
                        "3- Exit." << std::endl;
                        std::cout << "Choose an option: ";
                        std::cin >> option2;
                        std::cin.ignore();

                        if (option2 == 1){
                            std::cout << "Plain text: \n";
                            std::getline(std::cin,text);
                            upper3(text);
                            std::cout << "Key: \n";
                            std::cin >> key;
                            upper3(key);
                            if(check_input3(text,key) == false){
                                std::cout << "Too long Text or Key..";
                                continue;
                            }
                            std::cout << "Cipher text:\n";
                            encryption3(text,key);
                        }
                        else if (option2 == 2){
                            std::cout << "Cipher text: \n";
                            std::getline(std::cin,text);
                            upper3(text);
                            std::cout << "Key: \n";
                            std::cin >> key;
                            upper3(key);
                            if(check_input3(text,key) == false){
                                std::cout << "Too long Text or Key..";
                                continue;
                            }            
                            std::cout << "Plain text:\n";
                            decryption3(text,key);            
                        }
                        else{break;};
                    }

                    break;

                case 5:
        
                    while(true){
                   std::cout << "\n---------------------------------" <<
                        "\nBaconian Cipher\n" <<
                        "What do you like to do today?\n" <<
                        "1- Cipher a message.\n" <<
                        "2- Decipher a message.\n" <<
                        "3- Exit." << std::endl;
                        std::cout << "Choose an option: ";
                        std::cin >> option2;
                        std::cin.ignore();
                        if (option2 == 1){
                            std::cout << "Plain text:\n";
                            std::getline(std::cin,text);
                            for(int i = 0; i<text.length();i++){
                                if(text[i]>= 'a' && text[i] <= 'z')
                                text[i] -= 32;
                            }
                            encryption4(text);
                        }
                        else if (option2 == 2){
                            std::cout << "Cipher text:\n";
                            std::getline(std::cin,text);
                            decryption4(text);
                        }else{break;};
                    }

                    break;

                case 6:
                
                    while (true){
                        std::cout << "\n--------------------------"
                                "\nSimple Substitution Cipher.\n"
                                "What do you like to do today?\n"
                                "1- Cipher a message.\n"
                                "2- Decipher a message.\n"
                                "3- Exit." << std::endl;
                        std::cout << "Choose an option: ";
                        std::cin >> option2;
                        std::cin.ignore();
                        if (option2 == 1){
                            std::cout << "Plain text:\n";
                            std::getline(std::cin,text);
                            to_lower5(text);
                            std::cout <<"Enter key of 5 letters:\n";
                            std::cin >> key;
                            dic_change5(key);
                            encryption5(text);
                        }
                        else if (option2 == 2){
                            std::cout << "Cipher text:\n";
                            getline(std::cin,text);
                            to_lower5(text);
                            std::cout <<"Enter key of 5 letters:\n";
                            std::cin >> key;
                            dic_change5(key);
                            decryption5(text);  
                        }else{break;};
                    }


                    break;

                case 7:
                    
                    std::cout << "Note: J and I are in the same slot." << std::endl;
                    while (flag){
                        std::cout << "\n---------------------------------" <<
                                "\nPolybuis Square Cipher. \n" <<
                                "What do you like to do today?\n" <<
                                "1- Cipher a message.\n" <<
                                "2- Decipher a message.\n" <<
                                "3- Exit." << std::endl;
                        std::cout << "Choose an option: ";
                        std::cin >> option2; 
                        switch(option2){     
                            case 1:
                                std::cin.ignore();
                                keys_table6();
                                std::cout << "\nPlain text: ";
                                std::getline (std::cin, Enctext);
                                Enctext.erase(remove(Enctext.begin(),Enctext.end(),' '),Enctext.end());
                                encryption6(Enctext);
                                break;
                        
                            case 2:
                                std::cin.ignore();
                                keys_table6();
                                std::cout << "\nCipher text: ";
                                std::getline(std::cin,Dectext);
                                Dectext.erase(remove(Dectext.begin(),Dectext.end(),' '),Dectext.end());
                                decryption6(Dectext);
                                break;

                            case 3:
                                flag = false; 
                                break;
                        };
                    }
                    break;

                case 8:
                    while(true){
                        std::cout << "\n---------------------------------" <<
                            "\nMorse Code Cipher\n" <<
                            "What do you like to do today?\n" <<
                            "1- Cipher a message.\n" <<
                            "2- Decipher a message.\n" <<
                            "3- Exit." << std::endl;
                            std::cout << "Choose an option: ";
                            std::cin >> option2;
                            std::cin.ignore();

                            if (option2 == 1){
                                std::cout << "Plain text:\n";
                                std::getline(std::cin,text);
                                for (int i = 0; i < text.length(); i++){
                                    if (text[i] >= 'a' && text[i] <= 'z')
                                        text[i] = text[i] - 32;
                                }
                                encryption7(text);
                            }
                            else if (option2 == 2){
                                std::cout << "Cipher text:\n";
                                std::getline(std::cin,text);
                               std::cout << "Plain text: \n";
                                decryption7(text);
                            }
                            else{break;};
                        }                

                    break;

                case 9:

                    while (true){
                        std::cout << "\n--------------------------"
                                "\nXor Cipher\n"
                                "What do you like to do today?\n"
                                "1- Cipher a message.\n"
                                "2- Decipher a message.\n"
                                "3- Exit." << std::endl;
                        std::cout << "Choose an option: ";
                        std::cin >> option2;
                        std::cin.ignore();
                        if (option2 == 1){
                            std::cout << "Enter Secret key: ";
                            std::cin >> secretKey;
                            std::cin.ignore();
                            std::cout << "Plain text:\n ";
                            std::getline(std::cin,text);
                            text.erase(remove(text.begin(), text.end(),' '), text.end());
                            std::cout << "Cipher text:\n";
                            encryption8(text, secretKey);
                        }
                        else if(option2 == 2){
                            std::cout << "NOTE: Try to put hexa in Cipher text, letters can cause problems.\n";
                            std::cout << "Enter Secret key: ";
                            std::cin >> secretKey;
                            std::cin.ignore();
                            std::cout << "Cipher text:\n ";
                            std::getline(std::cin,text);
                            text.erase(remove(text.begin(), text.end(),' '), text.end());
                            decryption8(text, secretKey);

                        }
                        else{
                            break;
                            };
                    }
                    break;

                    case 10:
                        while (true){
                            std::cout << "--------------------------"
                                    "\nRail Fence Cipher\n"
                                    "What do you like to do today?\n"
                                    "1- Cipher a message.\n"
                                    "2- Decipher a message.\n"
                                    "3- Exit." << std::endl;
                            std::cout << "Choose an option: ";
                            std::cin >> option2;
                            std::cin.ignore();
                                if (option2 == 1){ 
                                    std::cout << "Plain text:\n";
                                    std::getline(std::cin,text);
                                    text.erase(remove(text.begin(),text.end(),' '),text.end());
                                    std::cout << "Cipher text:\n";
                                    encryption9(text);  
                                }
                                else if(option2 == 2){
                                    std::cout << "Cipher text:\n";
                                    std::getline(std::cin,text);
                                    text.erase(remove(text.begin(),text.end(),' '),text.end());
                                    std::cout << "Plain text:\n";
                                    decryption9(text);

                                }else{
                                    break;
                                    }
                        }                        
                        break;


            } 

            }
            else{
                break;
                }

    } 


    return 0;

};

//Code ID 0
void encryption0(std::string text){
    std::string letter;
    int encNum;
    for(int i = 0; i < text.length(); i++){
        if (text[i] == ' ')
        std::cout << std::setw(1) << " ";
        for(auto pair:dic0){
            letter = text[i];
            if(letter == pair.first){
                encNum = (5*pair.second+8)%26;
                for(auto pair:dic0){
                    if(encNum == pair.second)
                    std::cout << pair.first;
                } 
            }
        }
    
    }
};

void decryption0(std::string text){

    std::string letter;
    int decNum;
    for(int i = 0; i < text.length(); i++){
        if(text[i]==' ')
        std::cout << std::setw(1) << " ";
        for(auto pair:dic0){
            letter = text[i];
            if(letter == pair.first){
                decNum = 21*(pair.second-8);
                if(decNum > 0)
                    decNum = decNum % 26;
                else if (decNum < 0)
                    decNum = ((decNum%26)+26)%26;
                for(auto pair:dic0){
                    if(decNum == pair.second)
                    std::cout << pair.first;
                }
            }
        }
    }
};


//Code ID 1
void encyption1(std::string text, int shift){
    int ascii_char;
    if(shift < 0){
            shift = ((shift%26)+26)%26;
        }
        for(int i = 0; i < text.length(); i++){
            if (isalpha(text[i])){
                ascii_char = text[i];
                for (int j = 0; j< shift;j++){
                    if((ascii_char+1) > 90)
                        ascii_char = 64;
                    ascii_char += 1;
                }
                std::cout <<(char)(ascii_char);
            }else{std::cout << text[i];}
        }; 
};

void decryption1(std::string text, int shift){
    int ascii_char;
    if(shift < 0){
            shift = ((shift%26)+26)%26;
        }
        shift = 25 - shift + 1;
        for(int i = 0; i < text.length(); i++){
            if (isalpha(text[i])){
                ascii_char = text[i];
                for (int j = 0; j < shift; j++){
                    if((ascii_char+1) > 90)
                        ascii_char = 64;
                    ascii_char += 1;
                }
                std::cout <<(char)(ascii_char);
            }else{std::cout << text[i];};
        }; 
};


//Code ID 2
void encrypt_decrypt2(std::string text){

    std::string letter;
    for(int i = 0; i < text.length(); i++){
        if (text[i]==' ')
        std::cout << " ";
        for(auto pair:dic2){
            letter = text[i];
            if (letter == pair.first)
            std::cout << pair.second;
            else if (letter == pair.second)
            std::cout << pair.first;
            }
        }
};


//Code ID 3
void encryption3(std::string text,std::string key){

    int count = 0, ascii_char, shift;

    for(int i = 0; i < text.length();i++){
        if(isalpha(text[i])){//check character
            if(count == key.length()){//to repeat keyword each time
                count = 0;
            }
            ascii_char = text[i];//Hold ascii of character
                for(auto pair:dic3){//To get Shift of key
                    if(key[count] == pair.first){
                        shift = pair.second;
                    }
                }//To make shifting check not exceed "Z"
                for (int j = 0; j< shift;j++){
                    if((ascii_char+1) > 90)
                        ascii_char = 64;
                    ascii_char += 1;
            }
            std::cout <<(char)(ascii_char);
        }else{std::cout << text[i];}
        count += 1;
    }
};

void decryption3(std::string text,std::string key){

    int count = 0, ascii_char, shift;

    for(int i = 0; i < text.length();i++){
        if(isalpha(text[i])){//check character
            if(count == key.length()){//to repeat keyword each time
                count = 0;
            }
            ascii_char = text[i];//Hold ascii of character
                for(auto pair:dic3){//To get Shift of key
                    if(key[count] == pair.first){
                        shift = pair.second;
                        shift = 25 - shift + 1;
                    }
                }//To make shifting check not exceed "Z"
                for (int j = 0; j < shift;j++){
                    if((ascii_char+1) > 90)
                        ascii_char = 64;
                    ascii_char += 1;
            }
            std::cout <<(char)(ascii_char);
        }else{std::cout << text[i];}
        count += 1;
    }

};

std::string upper3(std::string &txt){
    for(int i = 0; i < txt.length();i++){
        if(txt[i]>='a' && txt[i]<='z'){
            txt[i] -= 32;
        }
    }
    return txt;
};

bool check_input3(std::string text, std::string key){
    bool flag = true;
    if (text.length() > 80 || key.length() > 8)
        flag = false;
    return flag;
};


//Code ID 4
void encryption4(std::string text){
    std::map<std::string, std::string> dic{{"A","aaaaa"},{"B","aaaab"},{"C","aaaba"},{"D","aaabb"},
                        {"E","aabaa"},{"F","aabab"},{"G","aabba"},{"H","aabbb"},
                        {"I","abaaa"},{"J","abaab"},{"K","ababa"}, {"L","ababb"},
                        {"M","abbaa"},{"N","abbab"},{"O","abbba"},{"P","abbbb"},
                        {"Q","baaaa"},{"R","baaab"},{"S","baaba"},{"T","baabb"},
                        {"U","babaa"},{"V","babab"},{"W","babab"},{"X","babbb"},
                        {"Y","bbaaa"},{"Z","bbaab"} };

    std::string letter;
    std::cout << "Cipher text:\n";
    for (int i = 0; i < text.length(); i++){
        std::cout <<std::setw(1) <<" ";
        for(auto pair:dic){
            letter = text[i];
            if (letter == pair.first)
            std::cout << pair.second;
            
        }

    }
};

void decryption4(std::string text){
    std::map<std::string, std::string> dic{{"A","aaaaa"},{"B","aaaab"},{"C","aaaba"},{"D","aaabb"},
                        {"E","aabaa"},{"F","aabab"},{"G","aabba"},{"H","aabbb"},
                        {"I","abaaa"},{"J","abaab"},{"K","ababa"}, {"L","ababb"},
                        {"M","abbaa"},{"N","abbab"},{"O","abbba"},{"P","abbbb"},
                        {"Q","baaaa"},{"R","baaab"},{"S","baaba"},{"T","baabb"},
                        {"U","babaa"},{"V","babab"},{"W","babab"},{"X","babbb"},
                        {"Y","bbaaa"},{"Z","bbaab"} };

    int space = 0;
    std::cout << "Plain text:\n";
    for (int i = 0; i < text.length(); i+=5){
        if(text[i]==' ')
        i += 1;
        for(auto pair:dic){
            if(text.substr(i,5) == pair.second)
            std::cout << pair.first;
        }
    }

};


//Code ID 5
void encryption5(std::string text){

    std::cout << "Cipher text:\n";
    for(int i = 0; i < text.length(); i++){
        if(text[i] == ' '){
            std::cout << " ";
        }
        for(auto pair: dic5){
            if(text[i] == pair.first)
                std::cout << pair.second;
        }
    }
};

void decryption5(std::string text){

    std::cout << "Plain text:\n";
    for(int i = 0; i < text.length(); i++){
        if(text[i] == ' '){
            std::cout << " ";
        }
        for(auto pair: dic5){
            if(text[i] == pair.second)
                std::cout << pair.first;
        }
    }

};

void dic_change5(std::string key){

    int ascii_char;
    ascii_char = 'a';
    for (int i = 0; i < key.length(); i++){
        dic5.at((char)ascii_char) = key[i];
        ascii_char += 1;
    };
    ascii_char = 'f';
    for(auto pair:dic5){
        if (ascii_char <= 'z'){
        if(pair.first != key[0] && pair.first != key[1]
        && pair.first != key[2]&& pair.first != key[3]
        && pair.first != key[4]){
            dic5.at((char)ascii_char) = pair.first;
            ascii_char += 1;
        }
        }
        
    }

};

void to_lower5(std::string &text){
    for (int i = 0; i < text.length(); i++){
        if(text[i]>='A' && text[i] <= 'Z')
            text[i] += 32;
    }
};


//Code ID 6
void keys_table6(){

    std::string keys;
    int a = 1, b = 1;
    std::cout << "Enter keys for both rows and column: ";
    std::getline(std::cin,keys);

    for (int i = 0; i < keys.length(); i++){
        table[0][b] = keys[i];
        table[a][0] = keys[i];
        b += 1;
        a += 1;
    }
};

void encryption6(std::string text){

    char row, col;
    for (int i = 0; i < text.length(); i++){
        if (text[i] >= 'a' && text[i] <= 'z')
            text[i] = text[i] - 32;
    }
    std::cout << "Cipher text: "<<std::endl;
    for (int i = 0; i < text.length(); i++){
        for (int r = 1; r < 6; r++){
            for (int c = 1; c < 6; c++){
                if (text[i] == 'J'){
                    text[i] = 'I';
                }                
                if (text[i] == table[r][c]){
                    row = table[r][0];
                    col = table[0][c];
                    std::cout << row << col;
                }
            }
        }
    }  
};

void decryption6(std::string text){

    int row, col;
    std::cout << "Decipher text: "<<std::endl;
    for (int i = 0; i < (text.length()-1); i+=2){
        for (int r = 0; r < 6; r++){
            for (int c = 0; c < 6; c++){
                if (table[r][c] == (char)text[i])
                    row = r;   
                if (table[r][c] == (char)text[i+1])
                    col = r;
            } 
        }
        std::cout << table[row][col];
    }  
};


//Code ID 7
void encryption7(std::string text){

    std::string character;
    for(int i=0; i <text.length();i++){
        for (auto pair : dic7){
            character = text[i];
            if (character == pair.first){
                std::cout <<pair.second;
                std::cout << std::setw(3) << " ";
            }
        }
    }
};

void decryption7(std::string text){


    int character = 0, space = 0;
    for (int i = 0 ; i < text.length();i++){
        if (text[i] == ' '){
            space = i;
            for(auto pair:dic7){
                if(text.substr(character,space - character) == pair.second){
                    std::cout << pair.first << " "; 
                }
            }
        character = space + 1 ;
        }
    }
    for(auto pair:dic7){
        if(text.substr(character, text.length()) == pair.second)
            std::cout << pair.first << " ";
    }
};


//Code ID 8
int hex_to_dec8(std::string hex){
    int base = 1, decValue = 0;
    for(int i = hex.length()-1; i>=0; i--){
        if(hex[i] >= '0' && hex[i] <= '9'){
            decValue += (int(hex[i]) - 48) * base;
            base *= 16;
        }
        else if (hex[i] >= 'A' && hex[i] <= 'F'){
            decValue += (int(hex[i])-55) * base;
            base *= 16;
        }
        
    }
    return decValue;
};

void encryption8(std::string text, char secretKey){
    char hex_s[100];
    for(int i = 0; i < text.length(); i++){
        std::cout << (char)(text[i] ^ secretKey);
    }
    std::cout <<std::endl;
    std::cout << "Hexa text:\n";
    std::string value;
    for(int i = 0; i < text.length(); i++){
        value = itoa((int)(text[i] ^ (int)secretKey), hex_s,16);
        if(value.length() == 1){
            std::cout << "0" << value;
        }else{
        std::cout <<value;
        }
    }
};

void decryption8(std::string text, char secretKey){

    for(int i = 0; i < text.length(); i++){
        if(text[i] >= 'a' && text[i] <= 'z'){
            text[i] -= 32;
        }
    }
    std::cout << "Plain text:\n";
    std::string hex_letter; int  dec_letter;
    for(int i = 0; i < text.length(); i+=2){
        hex_letter = text.substr(i,2);
        dec_letter = hex_to_dec8(hex_letter);
        std::cout << (char)(dec_letter ^ secretKey);
    }            

};


//Code ID 9
void encryption9(std::string text){
    int row = 0, col = 0;
    std::string encText;
    char matrix[3][(text.length())];
    bool isDown = false;

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < text.length(); j++)
            matrix[i][j] = '*';

    for(int i = 0; i < text.length();i++){
        if(row == 0 || row == 2){
            isDown = !isDown;
        }
        matrix[row][col++] = text[i];
        isDown?row++:row--;
    }

    for (int i = 0; i < 3; i++){
        for(int j = 0; j < text.length();j++){
            if(matrix[i][j]!= '*'){
                encText.push_back(matrix[i][j]);
            }
        }
    }
std::cout << encText << std::endl;
};

void decryption9(std::string& text){
    int row = 0, col = 0;
    std::string decText;
    char matrix[3][(text.length())];
    bool isDown = false;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < text.length(); j++){
            matrix[i][j] = '-';
        }
    }

    for(int i = 0; i < text.length();i++){
        if(row == 0 || row == 2)
            isDown = !isDown;

        matrix[row][col++] = '*';
        isDown?row++:row--;
    }
    int countChar = 0;
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < text.length();j++){
            if(matrix[i][j] == '*'){
                matrix[i][j] = text[countChar];
                countChar += 1;
            }
        }
    }

    for(int j = 0; j < text.length(); j++){
        for(int i = 0; i < 3; i++){
            if(isalpha(matrix[i][j])){
                decText.push_back(matrix[i][j]);
            }
        }
    }
    std::cout << decText << std::endl;
};