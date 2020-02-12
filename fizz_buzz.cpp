//
//  main.cpp
//  fizz_buzz
//
//  Created by Yaroslav on 12.02.2020.
//  Copyright © 2020 Yaroslav. All rights reserved.
//

#include <iostream>
#include <string>


int div_by_3(std::string buf);

int main(int argc, const char * argv[]) {
    
    std::cout << "Hello, World!\n";
    
    std::string buf;
    
    while(1) {
        std::cin >> buf;

        
        if(buf[0] == 'e') break;
        
        if(div_by_3(buf))  std::cout << "fizz";
        
        if(buf[buf.size() - 1] == '0' || buf[buf.size() - 1] == '5')    std::cout << "buzz";
        
                    
            else std::cout << buf;
    }
    
    return 0;
}

int div_by_3(std::string buf) {
    int sum = 0;
    int k = 0;
    while(buf.size() != 1)
    {
        sum = 0;
        
        if(buf[0] == '-')   k++;
            
        for(int k = 0; k < buf.length(); k++)
        {
            sum += buf[k] - '0';
        }
        
        buf = std::to_string(sum);
    }
    
    if(buf[0] == '3' || buf[0] == '6' || buf[0] == '9') {
        return 1;
    }
    
        else    return 0;
}
