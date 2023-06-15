//program memakai DFS algorithm

#include<stdio.h>
#include<stdlib.h>

struct node {
    char vertex;
    struct node* next;
};

struct Graph {
    int numVertices;
    int* visited;
    struct node** adjacentLists;
};

// DFS algorithm
void DFS(struct Graph* graf, int vertex) {
    struct node* adjacentList = graf->adjacentLists[vertex];
    struct node* temp = adjacentList;

    graf->visited[vertex] = 1;
    printf("Visited %c \n", graf->adjacentLists[vertex]->vertex);

    while (temp != NULL) {
        int connectedVertex = temp->vertex - 'A';

        if (graf->visited[connectedVertex] == 0) {
            DFS(graf, connectedVertex);
        }
        temp = temp->next;
    }
}

// create a node
struct node* createNode(char v) {
    struct node* newNode = malloc(sizeof(struct node));
    newNode->vertex = v;
    newNode->next = NULL;
    return newNode;
}

// create graph
struct Graph* createGraph(int vertices) {
    struct Graph* graf = malloc(sizeof(struct Graph));
    graf->numVertices = vertices;

    graf->adjacentLists = malloc(vertices * sizeof(struct node*));

    graf->visited = malloc(vertices * sizeof(int));

    int i;
    for (i = 0; i < vertices; i++) {
        graf->adjacentLists[i] = NULL;
        graf->visited[i] = 0;
    }
    return graf;
}

// add edge
void addEdge(struct Graph* graf, char src, char dest) {
    int srcIndex = src - 'A';
    int destIndex = dest - 'A';

    // add edge from source to destination
    struct node* newNode = createNode(dest);
    newNode->next = graf->adjacentLists[srcIndex];
    graf->adjacentLists[srcIndex] = newNode;

    // add edge from destination to source
    newNode = createNode(src);
    newNode->next = graf->adjacentLists[destIndex];
    graf->adjacentLists[destIndex] = newNode;
}

// print the graph
void printGraph(struct Graph* graf) {
    int v;
    for (v = 0; v < graf->numVertices; v++) {
        struct node* temp = graf->adjacentLists[v];
        printf("\n Adjacency list of vertex %c\n ", v + 'A');
        while (temp) {
            printf("%c -> ", temp->vertex);
            temp = temp->next;
        }
        printf("\n");
    }
}

int main() {
    struct Graph* graf = createGraph(5);
    addEdge(graf, 'A', 'B');
    addEdge(graf, 'A', 'C');
    addEdge(graf, 'B', 'C');
    addEdge(graf, 'C', 'D');
    addEdge(graf, 'D', 'E');

    printGraph(graf);

    //graf dimulai dari simpul/vertex C
    DFS(graf, 2);

    return 0;
}
