/**********************************************
 *                                                                            *
 * Raw image copier: This simple program copy    *
 * a raw image to another file.                              *
 *                                                                            *
 * Autor: Dante Bazaldua                                       *
 *                                                                            *
 * Date: 23 de Agosto de 2016                               *
 *                                                                             *
 **********************************************/

#include <stdio.h>
#define CHR 25;
/* Here includes the files for the analized image*/

void checkup( char *name );

int main(int argc, char **argv){
  if(argc == 2){
    checkup( argv[1] );
  }
  return 0;
}

void checkup( char *name ){
  FILE *fp;
  fp = fopen( name, "r" );
  if( fp == NULL) {
    printf("Tal ves el archivo existe, el que no existe eres tu.\n");
  }
  else{
    printf("El archivo existe\n");
  }
  fclose(fp);
}
