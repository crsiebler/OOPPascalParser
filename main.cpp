// Edited by: Terry Ulery, Joe Cruz, Kristen Tourek
//
//  main.cpp
//  Lab4
//
//  Created by Bryce Holton.
//

#include <iostream>
#include "common.h"
#include "Print.h"
#include "Scanner.h"
#include "Token.h"

FILE *init_lister(const char *name, char source_file_name[], char dte[]);
void quit_scanner(FILE *src_file, Token *list);
void add_token_to_list(Token *list, Token *new_token);
IdentifierTree *idTree;

int main(int argc, const char * argv[])
{

    Token *token = NULL;
    char source_name[MAX_FILE_NAME_LENGTH];
    char date[DATE_STRING_LENGTH];
    FILE *source_file = init_lister(argv[1], source_name, date);
    Print print(source_name, date);
    Scanner scanner(source_file, source_name, date, print);
	
	// Initialize a Binary Tree to store Identifier Tokens
    IdentifierTree *idTree = new IdentifierTree();

     do
    {
        token = scanner.getToken();
        print.printToken(token);
        if (token->getCode() != PERIOD && token->getCode() != END_OF_FILE)
        {
            if (token->getCode() == IDENTIFIER){ 
                printf("inserting Identifier\n");
                string nodeStr = token->getTokenString();
                printf("%-16s\t", nodeStr.c_str());
                Identifier *newIdent = dynamic_cast<Identifier*>(token);
                idTree->insertIdentifier(newIdent);
            }
            else
                delete token;
        }
    }
    while (token->getCode() != PERIOD && token->getCode() != END_OF_FILE);
    delete token;

    fclose(source_file);
	
	// Print the Cross Reference Information
	print.printTree(idTree);
	
    return 0;
}
FILE *init_lister(const char *name, char source_file_name[], char dte[])
{
    time_t timer;
    FILE *file;
    
    strcpy(source_file_name, name);
    file = fopen(source_file_name, "r");
    time(&timer);
    strcpy(dte, asctime(localtime(&timer)));
    return file;
}
