#include<stdio.h>
#include "types.h"
#include "view.h"

int main(int argc,char *argv[]){

    ViewInfo viewinfo;


    if(argc != 3){
        printf("Invalid Input\n");
        return e_failure;
    }

    OperationType op = checkoperation_type(argv[1][1]);

    if(op == e_view){
        if(read_and_validate_view_args(argv,&viewinfo) == e_failure)
            return e_failure;
        else{
            if(do_view(argv,&viewinfo) == e_success)
                printf("View is success\n");
    }
    }
    
}
    

OperationType checkoperation_type(char ch){
    if(ch == 'v')
        return e_view;
    else if(ch == 'e')
        return e_edit;
    else if(ch == 'h')
        return e_help;    
    else
        return e_unsupported;
}