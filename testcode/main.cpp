#include<stdio.h>
#include<math.h>
#include<iostream>

using namespace std;

int main () {
    int test;
    cin>>test;
    int i_length, j_length;
    while(test>0){
        cin>>i_length>>j_length;
        char table[i_length][j_length];
        for(int i = 0; i < i_length; i++) {
            for(int j = 0; j < j_length; j++) {
                cin>>table[i][j];
            } 
        }

        int B_V_counter = 1, B_V_max = 0;
        for(int j = 1; j <= j_length; j++) {
            for(int i = 1; i <= i_length; i++) {            
                if(table[i][j-1] == '#' && table[i-1][j-1] == '#') {             
                    B_V_counter++;
                    if(B_V_counter > B_V_max) {
                        B_V_max = B_V_counter;
                    }                
                    // printf("%d", B_V_counter);
                }
                else {
                    B_V_counter = 1;
                }
            }
        }

        // printf("%d", B_V_max);


        int B_H_counter = 1, B_H_max = 0;
        for(int i = 1; i <= i_length; i++) {
            for(int j = 1; j <= j_length; j++) {
                if(table[i-1][j] == '#' && table[i-1][j-1] == '#') {              
                    B_H_counter++;
                    if(B_H_counter > B_H_max) {
                        B_H_max = B_H_counter;
                    } 
                    // printf("%d", B_H_counter);
                }
                else {
                    B_H_counter = 1;
                }
            }
        }

        // printf("%d", B_H_max);
        int z = 1
        if(B_V_max == 0 && B_H_max == 0) {
            printf("%d", z);
        }
        else {
                if(B_V_max > B_H_max) {
                printf("%d\n", B_V_max);
            }
            else {
                printf("%d\n", B_H_max);
            }
        }

        

        test--;
    }
    

    return 0;
}