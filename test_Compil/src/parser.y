%{
    #include <stdio.h> 
    #include "../inc/parser.h"
    #include "../inc/sym_table.h" 
    #include <string.h>
    #include <stdlib.h>
    #include <stdbool.h>
    extern int line_num;
    extern char* Curr_Type;
    extern bool Curr_Const;
    extern char* Curr_Scope;
    int division=0;
    void yyerror();
    int yylex();
%}

%define parse.error verbose

%union {
    int u_val_int;
    float u_val_float;
    float u_val_bool;
    char* u_idf;
    char u_op;
}

%token <u_val_int>INT_VAL
%token <u_val_int>NEG_INT_VAL
%token <u_val_float>FLOAT_VAL
%token <u_val_float>NEG_FLOAT_VAL
%token <u_val_bool>BOOL_VAL
%token <u_idf>IDENTIFIER

%token <u_op>ADD
%token <u_op>DIV
%token <u_op>MULT
%token <u_op>SUB

%token LANG VAR INT FLOAT CONST BOOL START END IF WHILE RET FUNC ASSIGN
%token EQUAL GREATER GREATER_EQ LESS LESS_EQ
%token INSTR_END SEP TYPE_SEP
%token LEFT_PAR RIGHT_PAR


%start S



%%
S: LANG IDENTIFIER functions_opt {Curr_Scope = "main"; puts("change current scope to main1");} VAR variables_opt START  instructions_opt END {printf("yay\n");YYACCEPT;}
/*
{Curr_Scope = "main"; 
puts("change current scope to main") ;
Fill_Sym_List();
check_if_double_declared();
printf("yay\n");
 YYACCEPT;
};  
*/

variables_opt: %empty 
             | list_var 
             | list_const;

            /* handling variables */
            
list_var: var_names 
        | var_names list_var 
        | var_names list_const;

var_names: IDENTIFIER  var_type  {puts($1); Sym_List_Add($1, "idf", Curr_Type, Curr_Const, Curr_Scope, line_num);}
         | IDENTIFIER SEP var_names {puts($1); Sym_List_Add($1, "idf", Curr_Type, Curr_Const, Curr_Scope, line_num);};

var_type: TYPE_SEP INT INSTR_END {Curr_Type = "int"; Curr_Const = false;}
        | TYPE_SEP FLOAT INSTR_END {Curr_Type = "float"; Curr_Const = false;}
        | TYPE_SEP BOOL INSTR_END {Curr_Type = "bool"; Curr_Const = false;};




            /* handling constants */
list_const:  const_names 
          | const_names list_const 
          | const_names list_var;

const_names: IDENTIFIER  ASSIGN INT_VAL const_type             {puts($1); Sym_List_Add($1, "idf", Curr_Type, Curr_Const, Curr_Scope, line_num);}
           | IDENTIFIER  ASSIGN NEG_INT_VAL const_type         {puts($1); Sym_List_Add($1, "idf", Curr_Type, Curr_Const, Curr_Scope, line_num);}
           | IDENTIFIER  ASSIGN INT_VAL SEP const_names        {puts($1); Sym_List_Add($1, "idf", Curr_Type, Curr_Const, Curr_Scope, line_num);}
           | IDENTIFIER  ASSIGN NEG_INT_VAL SEP const_names    {puts($1); Sym_List_Add($1, "idf", Curr_Type, Curr_Const, Curr_Scope, line_num);}
           | IDENTIFIER  ASSIGN FLOAT_VAL const_type           {puts($1); Sym_List_Add($1, "idf", Curr_Type, Curr_Const, Curr_Scope, line_num);}
           | IDENTIFIER  ASSIGN NEG_FLOAT_VAL const_type       {puts($1); Sym_List_Add($1, "idf", Curr_Type, Curr_Const, Curr_Scope, line_num);}
           | IDENTIFIER  ASSIGN FLOAT_VAL SEP const_names      {puts($1); Sym_List_Add($1, "idf", Curr_Type, Curr_Const, Curr_Scope, line_num);}
           | IDENTIFIER  ASSIGN NEG_FLOAT_VAL SEP const_names  {puts($1); Sym_List_Add($1, "idf", Curr_Type, Curr_Const, Curr_Scope, line_num);}
           | IDENTIFIER  ASSIGN BOOL_VAL const_type            {puts($1); Sym_List_Add($1, "idf", Curr_Type, Curr_Const, Curr_Scope, line_num);}
           | IDENTIFIER  ASSIGN BOOL_VAL SEP const_names       {puts($1); Sym_List_Add($1, "idf", Curr_Type, Curr_Const, Curr_Scope, line_num);};

const_type: TYPE_SEP CONST INT INSTR_END {Curr_Type = "int"; Curr_Const = true;}
          | TYPE_SEP CONST FLOAT INSTR_END {Curr_Type = "float"; Curr_Const = true;}
          | TYPE_SEP CONST BOOL INSTR_END {Curr_Type = "bool"; Curr_Const = true;};

            /* utility */
math: singletons 
    | neg_singletons
    | idf;

singletons: INT_VAL {
            if(division == 1 && $1 == 0)
                puts("division par 0");
            }
          | INT_VAL ADD singletons
          | INT_VAL ADD idf
          | INT_VAL MULT math
          | INT_VAL DIV math {division=1;};

          | FLOAT_VAL {
            if(division == 1 && $1 == 0)
                puts("division par 0");
            }
          | FLOAT_VAL ADD singletons
          | FLOAT_VAL ADD idf
          | FLOAT_VAL MULT math
          | FLOAT_VAL DIV math {division=1;};;

neg_singletons: NEG_INT_VAL {
            if(division == 1 && $1 == 0)
                puts("division par 0");
            }
              | NEG_INT_VAL ADD singletons
              | NEG_INT_VAL ADD idf
              | NEG_INT_VAL SUB singletons
              | NEG_INT_VAL SUB idf
              | NEG_INT_VAL MULT math
              | NEG_INT_VAL DIV math {division=1;};

              | NEG_FLOAT_VAL {
            if(division == 1 && $1 == 0)
                puts("division par 0");
            }
              | NEG_FLOAT_VAL ADD singletons
              | NEG_FLOAT_VAL ADD idf
              | NEG_FLOAT_VAL SUB singletons
              | NEG_FLOAT_VAL SUB idf
              | NEG_FLOAT_VAL MULT math
              | NEG_FLOAT_VAL DIV math {division=1;};


idf: IDENTIFIER {
     if(search_ID(strdup($1))==NULL)
        printf("ERROR !In line %d the variable \"%s\" is undeclared.\n",line_num,$1);
}
   | IDENTIFIER neg_singletons {
     if(search_ID(strdup($1))==NULL)
        printf("ERROR !In line %d the variable \"%s\" is undeclared.\n",line_num,$1);
}
   | IDENTIFIER SUB idf {
     if(search_ID(strdup($1))==NULL)
        printf("ERROR !In line %d the variable \"%s\" is undeclared.\n",line_num,$1);
}
   | IDENTIFIER ADD singletons {
     if(search_ID(strdup($1))==NULL)
        printf("ERROR !In line %d the variable \"%s\" is undeclared.\n",line_num,$1);
}
   | IDENTIFIER ADD idf {
     if(search_ID(strdup($1))==NULL)
        printf("ERROR !In line %d the variable \"%s\" is undeclared.\n",line_num,$1);
}
   | IDENTIFIER MULT math {
     if(search_ID(strdup($1))==NULL)
        printf("ERROR !In line %d the variable \"%s\" is undeclared.\n",line_num,$1);
}
   | IDENTIFIER DIV math {
    {division=1;}
     if(search_ID(strdup($1))==NULL)
        printf("ERROR !In line %d the variable \"%s\" is undeclared.\n",line_num,$1);
}



condition: LEFT_PAR math relational_operators math RIGHT_PAR | LEFT_PAR math RIGHT_PAR;

relational_operators: EQUAL | GREATER | GREATER_EQ | LESS | LESS_EQ;

types: BOOL | INT | FLOAT;

            /* handling instructions */

instructions_opt: %empty | assign instructions_opt | if instructions_opt | while instructions_opt;

assign: IDENTIFIER ASSIGN math INSTR_END 
{
    Sym* temp=search_ID(strdup($1));
    if(temp==NULL)
        printf("ERROR !In line %d the variable \"%s\" is undeclared.\n",line_num,$1);
    if(temp!=NULL && is_constant(strdup($1)))
        printf("ERROR !In line %d the variable \"%s\" is a constant, you cannot change it.\n",line_num,$1);
};

if: IF condition START instructions_opt END;

while: WHILE condition START instructions_opt END;

            /* handling functions */

functions_opt: %empty | function_declaration functions_opt;

function_declaration: types FUNC IDENTIFIER {Curr_Scope = $3; printf("change current scope to %s\n", $3);} VAR variables_opt START instructions_opt return END ; 
             
return: RET INT_VAL INSTR_END | RET FLOAT_VAL INSTR_END | RET BOOL_VAL INSTR_END | RET IDENTIFIER INSTR_END;
%%

/* void yyerror(){ */
    /* printf("syntax error at line %d\n", line_num); */
/* } */
