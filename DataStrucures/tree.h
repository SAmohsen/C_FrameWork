
#ifndef DATASTRUCURES_TREE_H_
#define DATASTRUCURES_TREE_H_

#include <stdio.h>
#define STACKSIZE 10
#define QUEUESIZE 10
struct treenode {
	char name, father;
	int order;
};

/*breadth first search : visit node in levels  */
void breadthFristSearch(struct treenode *treeArray, int size) ;
/*depth first search : visit depth of nodes   */
void depthFristSearch(struct treenode *treeArray, int size) ;
int treedriver() ;
#endif /* DATASTRUCURES_TREE_H_ */
