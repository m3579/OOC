#ifndef MACROS_H_INCLUDED
#define MACROS_H_INCLUDED

/*
 * Filename.h
 *
 * /Project/Headers/include/Filename.h
 *
 *       Author: Mihir Kasmalkar
 * Date created: Mon Da, Year
 *
 *      Purpose:
 *
 *        Usage:
 *
 *        Notes:
 *
 */

#include <stdlib.h>

#define object(Name) typedef struct Name Name; struct Name {

#define extends(Class) Class super;

#define endobject };

#define init(Object) void init_methods_##Object(Object* object)

#define with {

#define for_constructor }

#define new(Object) (Object*) malloc(sizeof(Object))

#define destroy(Object) free(Object)

#endif // MACROS_H_INCLUDED
