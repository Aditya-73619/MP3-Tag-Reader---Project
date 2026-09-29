#ifndef TYPES_H
#define TYPES_H

typedef unsigned int uint;
/* Status will be used in fn. return type */
typedef enum
{
    e_success,
    e_failure
} Status;

typedef enum
{
    e_edit,
    e_view,
    e_help,
    e_unsupported
} OperationType;


#endif