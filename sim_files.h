#ifndef H_SIMFILES
#define H_SIMFILES

#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_FILE_STRING 25

struct buffer {
  double x;
  double y;
};

void readBufferFromFile(char *file_dest, struct buffer_wave * buffer, int read_file_shift, int n_lens);
void writeBufferToFile(char *file_dest, struct buffer_wave * buffer, int n_lens);
void clearFile(char *file_dest);


#endif  //SIM_FILES