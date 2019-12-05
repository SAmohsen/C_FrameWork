/*
 * tree.h
 *
 *  Created on: Dec 4, 2019
 *      Author: sayed
 */

#ifndef DATASTRUCURES_TREE_H_
#define DATASTRUCURES_TREE_H_


/*
 * tree.c
 *
 *  Created on: Dec 4, 2019
 *      Author: sayed
 */


#include <stdio.h>
#include "queue.h"
#include "stack.h"

extern struct treenode ;
/*breadth first search : visit node in levels  */
void breadthFristSearch(struct treenode *treeArray, int size) ;
/*depth first search : visit depth of nodes   */
void depthFristSearch(struct treenode *treeArray, int size) ;
#endif /* DATASTRUCURES_TREE_H_ */
