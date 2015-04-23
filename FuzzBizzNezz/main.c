//
//  main.c
//  FuzzBizzNezz
//
//  Created by Abegael Jackson on 2015-04-20.
//  Copyright (c) 2015 Abegael Jackson. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
   
    int Fuzz = 4;
    int Bizz = 6;
    int Nezz = 50;
    
    for (int x = 1; x < Nezz; x++)
    {
        
        if (x % Fuzz == 0)
        {
            printf("Fuzz\n");
        }
        else if (x % Bizz == 0)
        {
            printf("Bizz\n");
        }
        else
        {
            printf("%d\n", x);
        }
    }
    
    
    return 0;
}
