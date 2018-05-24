// Graph ADT interface for Ass2 (COMP2521)
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "Graph.h"

struct GraphRep{
	int nV;			// # vertices
	int nE; 		// # edges
	AdjList *edges	// 邻接表中表的顶点(从0 ~ nV-1)
};



Graph newGraph(int noNodes) {
	assert(noNodes >= 0);
	Graph g = malloc(sizeof(GraphRep));		// allocate memory for new Graph g
	assert(g != NULL);
	g->nV = noNodes;
	g->nE = 0;
	g->edges = malloc(noNodes * sizeof(AdjList));	// allocate memory for array of AdjList
	assert(g->edges != NULL);
	for(int i = 0; i < g->nV; i++){
		g->edges[i] = 0
	}
	return g;
}

int numVerticies(Graph g) {
	assert(g != NULL);
	return (g->nV);
}

void  insertEdge(Graph g, Vertex src, Vertex dest, int weight) {
	
}

void  removeEdge(Graph g, Vertex src, Vertex dest) {

}

bool adjacent(Graph g, Vertex src, Vertex dest) {
	assert(g != NULL);
	return false;
}

/*
 * Returns a list of adjacent vertices
 * on outgoing edges from a given vertex.
**/
AdjList outIncident(Graph g, Vertex v) {
	return NULL;
}

/*
 * Returns a list of adjacent vertices
 * on incoming edges from a given vertex.
**/
AdjList inIncident(Graph g, Vertex v) {
	return NULL;
}

void  showGraph(Graph g) {
	asser(g != NULL);
	int i;

	printf("Number of vertices: %d\n", g->nV);
	printf("Number of edges: %d\n", g->nE);
	// TODO
}

void  freeGraph(Graph g) {
	assert(g != NULL);
	for(int i = 0; i < g->nV; i++){
		free(g->edges[i]);
	}
	free(g->edges);
	free(g);
}
