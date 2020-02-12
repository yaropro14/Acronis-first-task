//
//  nums.cpp
//  Find_num
//
//  Created by Yaroslav on 06.02.2020.
//  Copyright © 2020 Yaroslav. All rights reserved.
//

#include <iostream>

int comp(const void *x, const void *y);

int main(int argc, const char * argv[]) {
    int m, n;
    std::cout << "Enter m\n";
    std::cin >> m;
    std::cout << "Enter n\n";
    std::cin >> n;
    
    int nums[m - n];
    for(int i = 0; i < m - n; i++)  {
        std::cout << "Enter number\n";
        std::cin >> nums[i];
    }
    
    std::qsort(nums, sizeof(nums) / sizeof(*nums), sizeof(int), comp);
    
    int i = 0;
    int j = 1;
    while(j <= m) {
        
        if(j != nums[i]) {
            std::cout << j << std::endl;
            j++;
        }
            else {
                j++;
                i++;
            }
    }

    return 0;
}

int comp(const void *x, const void *y)
{
    int X = *(int*) x;
    int Y = *(int*) y;
    return X - Y;
}
