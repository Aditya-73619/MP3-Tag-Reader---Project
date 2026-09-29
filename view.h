#ifndef VIEW_H
#define VIEW_H

#include<stdio.h>
#include "types.h"

#define MAX_FRAME_ID_SIZE 5

typedef struct _ViewInfo
{
    /* MP3 audio file info */
    char *mp3_fname;
    FILE *fptr_mp3;

    /* Frame info */
    char frame_id[MAX_FRAME_ID_SIZE];
    uint frame_size;


} ViewInfo;


/* View Function prototype */

/* Check operation type */
OperationType checkoperation_type(char ch);

/* Read and validate view args from argv */
Status read_and_validate_view_args(char *argv[],ViewInfo *viewinfo);

/* Perform the view */
Status do_view(char *argv[],ViewInfo *viewinfo);

/* Tag Validation */
Status validate(char frameid[]);


#endif