#include <iostream>
#include <vector>
#include <stack>

using namespace std;

struct Node;
struct Edge;
struct Graph;

void findStronglyConnectedComponents(Graph& graph);
void firstDepthFirstSearch(Graph& graph, Node* startingNode);
void secondDepthFirstSearch(Graph& graph, Node* startingNode, int leaderNode);
void resetExploredNodes(Graph& graph);
Graph createGraph();
void createNodesUpToId(Graph& graph, int maxId);
void createUndirectedEdgeBetween(Node* firstNode, Node* secondNode);
void createDirectedEdgeBetween(Node* firstNode, Node* secondNode);

struct Node {
  int id;
  vector<Edge*> incidentEdges;
  vector<Edge*> reverseIncidentEdges;
  bool isExplored = false;
  int leaderNode;
};

struct Edge {
  Node* firstNode;
  Node* secondNode;
};

struct Graph {
  vector<Node*> nodes;
  vector<Edge*> edges;
  stack<Node*> firstDepthFirstSearchStack;
};

void findStronglyConnectedComponents(Graph& graph) {
  for (int i = 0; i < graph.nodes.size(); i++) {
    if (!graph.nodes[i]->isExplored) {
      firstDepthFirstSearch(graph, graph.nodes[i]);
    }
  }
  resetExploredNodes(graph);
  while (graph.firstDepthFirstSearchStack.size() > 0) {
    Node* topNode = graph.firstDepthFirstSearchStack.top();
    if (!topNode->isExplored) {
      secondDepthFirstSearch(graph, topNode, topNode->id);
    }
    graph.firstDepthFirstSearchStack.pop();
  }
}

void firstDepthFirstSearch(Graph& graph, Node* startingNode) {
  startingNode->isExplored = true;
  for (int i = 0; i < startingNode->reverseIncidentEdges.size(); i++) {
    Node* neighbourNode = startingNode->reverseIncidentEdges[i]->secondNode;
    if (!neighbourNode->isExplored) {
      firstDepthFirstSearch(graph, neighbourNode);
    }
  }
  graph.firstDepthFirstSearchStack.push(startingNode);
}

void secondDepthFirstSearch(Graph& graph, Node* startingNode, int leaderNode) {
  startingNode->isExplored = true;
  startingNode->leaderNode = leaderNode;
  for (int i = 0; i < startingNode->incidentEdges.size(); i++) {
    Node* neighbourNode = startingNode->incidentEdges[i]->secondNode;
    if (!neighbourNode->isExplored) {
      secondDepthFirstSearch(graph, neighbourNode, leaderNode);
    }
  }
  startingNode->leaderNode = leaderNode;
}

void resetExploredNodes(Graph& graph) {
  for (int i = 0; i < graph.nodes.size(); i++) {
    graph.nodes[i]->isExplored = false;
  }
}

Graph createGraph() {
  Graph graph;
  createNodesUpToId(graph, 9);
  createUndirectedEdgeBetween(graph.nodes[0], graph.nodes[3]);
  createUndirectedEdgeBetween(graph.nodes[3], graph.nodes[6]);
  createUndirectedEdgeBetween(graph.nodes[6], graph.nodes[0]);
  createUndirectedEdgeBetween(graph.nodes[8], graph.nodes[6]);
  createUndirectedEdgeBetween(graph.nodes[5], graph.nodes[8]);
  createUndirectedEdgeBetween(graph.nodes[2], graph.nodes[5]);
  createUndirectedEdgeBetween(graph.nodes[8], graph.nodes[2]);
  createUndirectedEdgeBetween(graph.nodes[7], graph.nodes[5]);
  createUndirectedEdgeBetween(graph.nodes[1], graph.nodes[7]);
  createUndirectedEdgeBetween(graph.nodes[4], graph.nodes[1]);
  createUndirectedEdgeBetween(graph.nodes[7], graph.nodes[4]);
  return graph;
}

void createNodesUpToId(Graph& graph, int maxId) {
  for (int i = 0; i < maxId; i++) {
    Node* node = new Node();
    node->id = i + 1;
    graph.nodes.push_back(node);
  }
}

void createUndirectedEdgeBetween(Node* firstNode, Node* secondNode) {
  createDirectedEdgeBetween(firstNode, secondNode);
  Edge* edge = new Edge();
  edge->firstNode = secondNode;
  edge->secondNode = firstNode;
  secondNode->reverseIncidentEdges.push_back(edge);
}

void createDirectedEdgeBetween(Node* firstNode, Node* secondNode) {
  Edge* edge = new Edge();
  edge->firstNode = firstNode;
  edge->secondNode = secondNode;
  firstNode->incidentEdges.push_back(edge);
}

int main() {
  Graph graph = createGraph();
  
  cout << "Kosaraju's Algorithm" << endl;
  cout << endl << "Input:" << endl;
  for (int i = 0; i < graph.nodes.size(); i++) {
    cout << "Node id: " << graph.nodes[i]->id << "; Incident to node(s): ";
    for (int j = 0; j < graph.nodes[i]->incidentEdges.size(); j++) {
      cout << graph.nodes[i]->incidentEdges[j]->secondNode->id << " ";
    }
    cout << endl;
  }
  cout << endl << "Output:" << endl;
  findStronglyConnectedComponents(graph);
  for (int i = 0; i < graph.nodes.size(); i++) {
    cout << "Node id: " << graph.nodes[i]->id << "; Strongly connected components group: " << graph.nodes[i]->leaderNode << endl;
  }
}