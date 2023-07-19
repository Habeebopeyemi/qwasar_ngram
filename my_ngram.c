#include <stdio.h>

// int main(int argc, char* argv[]) {
//     if (argc < 2) {
//         printf("No argument provided.\n");
//         return 1;
//     }


//     printf("The argument is: %s\n and the count is %d", argv[2], argc);
//     return 0;
// }

// #include <string.h>
// #include <stdio.h>
// #include <stdlib.h>

// int main( int argc, char *argv[] )  {

//  if (argc < 2) {
//         printf("No argument provided.\n");
//         return 1;
//     }
//     char* sent = argv[1];
//     char* alph_store = malloc(100);
 
//     //iterate through the string
//     for(int i=0; sent[i]!='\0'; i++){

//         //take the current character and start iterating from the index

//         if(strchr(alph_store, sent[i]) == NULL){
//             int counter = 1;
//             for(int j=i+1; sent[j] !='\0'; j++){

//                 if(sent[j]==sent[i]){
//                     ++counter;
//                 }
//             }

//             // if (strchr(alph_store, sent[i]) == NULL) 
//             printf("%c:%d\n", sent[i], counter); 
//             alph_store[i] = sent[i];


//         }
//     }

//     free(alph_store);

// }

#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
  
int main(int argc, char* argv[]) { 
    char* string; 
    string = (char*)malloc(100*sizeof(char)); 
    //string = argv[1];
    int punctuations[200];
    int lower_case[200];
 	int upper_case[200];

    // printf("no of args = %d\n", argc);

    for (int i=0; i<200; i++) { 
        lower_case[i] = 0;
    	upper_case[i] = 0;
 		punctuations[i] = 0;
    }
    // find the total number of occurences of each character 
    for (int a=1; a<argc; a++) { 
        string = argv[a]; 
        for (int x=0; string[x] != '\0'; x++) { 
            // printf("%d\n", string[x]);

            /*checking for upper case letter*/

            if(string[x] >= 97 && string[x] <= 122) {
                lower_case[string[x] - 97] ++; 
            }

            /*checking for lower case letter*/

            if(string[x]>=65 && string[x]<=90){ 
                upper_case[string[x] - 65]++; 
            }

            if(string[x] == ' '){ 
                punctuations[32]++; 
            }

            if(string[x] == ','){ 
                punctuations[44]++; 
            }
            
            if(string[x] == '.'){ 
                punctuations[46]++; 
            }
        }
    }
      
    // print number of occurence of all characters 

 	for (int d=0; d<200; d++) {
 		if(punctuations[d] != 0) {
            printf("%c:%d\n", d, punctuations[d]); 
 		}
    }
 	for (int j=0; j<200; j++) {
 		if(upper_case[j] != 0) {

            /*
            read the index value got stored,
             and convert it to uppercase letter
            */

            printf("%c:%d\n", (j + 65), upper_case[j]); 
 		}
    }
    for (int k=0; k<200; k++) { 
        if (lower_case[k] != 0) {
            /*
            read the index value got stored,
             and convert it to lowercase letter
            */
            printf("%c:%d\n", (k + 97), lower_case[k]); 
        }
    }
    return 0; 
 }