%token LB RB SEMICOLON ASSIGN_OP LESS_EQ_THAN GREATER_EQ_THAN LESS_THAN GREATER_THAN LP RP PLUS_OP
%token DIV_OP SUB_OP MULT_OP FACTOR_OP LOGICAL_AND LOGICAL_OR COMMA FOR WHILE IF ELSE ELSEIF DT_INT
%token DT_LONG DT_FLOAT DT_DOUBLE DT_BOOLEAN DT_STRING DT_CHAR DT_SENSOR RT_VOID PLEASE RETURN
%token FUNC_ID_TIMESTAMP FUNC_ID_CONNECT_URL FUNC_ID_GET_DATA FUNC_ID_SEND_DATA FUNC_ID_CONNECT_INT
%token FUNC_ID_IS_CONNECT_INT FUNC_ID_PRINT FUNC_ID_ENTER FUNC_ID_SWITCH_ON FUNC_ID_SWITCH_OFF FUNC_ID_READ_SENSOR_DATA
%token INTEGER FLOATING_POINT BL_TRUE BL_FALSE STRING_LITERAL IDENTIFIER COMMENT START FUNC CHAR_LITERAL DOT EQUALS_TO

%%
program: start_function
        | start_function function_list
        | error function_list { printf(" in line %d: ", lineno);
                yyerrok;
        }

start_function: data_type START LP RP LB statement_list RB

statement_list: statement_list statement
        | statement

statement: while_statement
        | for_statement
        | definition_statement
        | if_statement
        | return_statement
        | comment_statement
        | expression_statement

definition_statement: declaration_statement
        | assignment_statement
        | initialization_statement
        | empty_statement

/* Statements */
declaration_statement: data_type IDENTIFIER SEMICOLON
assignment_statement: IDENTIFIER ASSIGN_OP expression SEMICOLON
initialization_statement: data_type IDENTIFIER ASSIGN_OP expression SEMICOLON
empty_statement: SEMICOLON
expression_statement: expression SEMICOLON
return_statement: RETURN IDENTIFIER SEMICOLON
        | RETURN number SEMICOLON
        | RETURN STRING_LITERAL SEMICOLON
        | RETURN boolean_literal SEMICOLON
        | RETURN CHAR_LITERAL SEMICOLON
        | RETURN SEMICOLON
comment_statement: COMMENT
boolean_literal: BL_TRUE | BL_FALSE

/* conditional statements */
if_statement: IF LP conditional_expression RP LB statement_list RB else_if_statement else_statement SEMICOLON
else_if_statement: /* empty */ | ELSEIF LP conditional_expression RP LB statement_list RB else_if_statement
else_statement: /* empty */ | ELSE LB statement_list RB

/* loops */
while_statement: WHILE LP conditional_expression RP LB statement_list RB SEMICOLON
for_statement: FOR LP definition_statement conditional_expression definition_statement RP LB statement_list RB SEMICOLON

/* built-in functions */
builtin_get_current_timestamp: FUNC_ID_TIMESTAMP LP RP
builtin_connect_to_url: FUNC_ID_CONNECT_URL LP STRING_LITERAL RP
builtin_get_data_from_url: FUNC_ID_GET_DATA LP STRING_LITERAL RP
	| FUNC_ID_GET_DATA LP IDENTIFIER RP
builtin_send_data_to_url: FUNC_ID_SEND_DATA LP STRING_LITERAL RP
	| FUNC_ID_SEND_DATA LP IDENTIFIER COMMA INTEGER RP
builtin_connect_to_internet: FUNC_ID_CONNECT_INT LP RP
builtin_is_connected_to_internet: FUNC_ID_IS_CONNECT_INT LP RP
builtin_print: FUNC_ID_PRINT LP STRING_LITERAL RP
	| FUNC_ID_PRINT LP number RP
builtin_read_sensor_data: FUNC_ID_READ_SENSOR_DATA LP DT_SENSOR COMMA number RP
	| FUNC_ID_READ_SENSOR_DATA LP DT_SENSOR RP
builtin_toggle_switch_off: FUNC_ID_SWITCH_OFF LP INTEGER RP
builtin_toggle_switch_on: FUNC_ID_SWITCH_ON LP INTEGER RP
builtin_enter: FUNC_ID_ENTER LP RP
builtin_function: builtin_get_current_timestamp
	| builtin_connect_to_url
	| builtin_get_data_from_url
	| builtin_send_data_to_url
	| builtin_connect_to_internet
	| builtin_is_connected_to_internet
	| builtin_print
	| builtin_read_sensor_data
	| builtin_toggle_switch_off
	| builtin_toggle_switch_on
	| builtin_enter

/* function call */
function_call: PLEASE IDENTIFIER LP parameter_list RP SEMICOLON
	| PLEASE builtin_function SEMICOLON

/* Expressions */
expression: conditional_expression
        | arithmetic_expression
        | function_call

conditional_expression: conditional_expression LOGICAL_OR conditional_term
	| arithmetic_expression comparison_op arithmetic_expression
	| conditional_term
conditional_term: conditional_term LOGICAL_AND conditional_base
	| conditional_base
conditional_base: boolean_literal | IDENTIFIER | function_call 

arithmetic_expression: arithmetic_expression PLUS_OP arithmetic_term
        | arithmetic_expression SUB_OP arithmetic_term
        | arithmetic_term

arithmetic_term: arithmetic_term MULT_OP arithmetic_factor
	| arithmetic_term DIV_OP arithmetic_factor
	| arithmetic_term
arithmetic_factor: arithmetic_base MULT_OP MULT_OP arithmetic_factor
	| arithmetic_base
arithmetic_base: LP arithmetic_expression RP | IDENTIFIER | number

comparison_op: LESS_EQ_THAN | GREATER_EQ_THAN | LESS_THAN | GREATER_THAN | EQUALS_TO


function_list: function_list function
	| function

function: return_type FUNC IDENTIFIER LP parameter_list RP LB statement_list RB

parameter_list: parameter_list COMMA  parameter | parameter
parameter: data_type IDENTIFIER


/* digerleri */
number: INTEGER 
	| INTEGER DOT INTEGER
	| DOT INTEGER
return_type: data_type | RT_VOID
data_type: DT_INT | DT_LONG | DT_FLOAT | DT_DOUBLE | DT_BOOLEAN | DT_STRING | DT_CHAR


%%
#include "lex.yy.c"
int lineno=0;
int yyerror(char *s) { printf("%s", s); }
int main() {
    return yyparse();
}
