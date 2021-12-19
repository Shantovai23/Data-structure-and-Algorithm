let V = 5;
function minimumKey(key, mstSet) {
  let min = Number.MAX_VALUE,
    low_index;
  for (let v = 0; v < V; v++)
    if (mstSet[v] == false && key[v] < min) (min = key[v]), (low_index = v);

  return low_index;
}
function printResult(parent, graph) {
  let sum = 0;
  console.log("Edge      Weight" + "\n");
  for (let i = 1; i < V; i++) {
    console.log(
      parent[i] + "   -  " + i + "     " + graph[i][parent[i]] + "\n"
    );
    sum += graph[i][parent[i]];
  }
  console.log("Minimum Cost  is : ", sum);
}

function MyPrimMST(graph) {
  let parent = [];
  let key = [];
  let mstSet = [];

  for (let i = 0; i < V; i++) (key[i] = Number.MAX_VALUE), (mstSet[i] = false);

  key[0] = 0;
  parent[0] = -1;

  for (let count = 0; count < V - 1; count++) {
    let u = minimumKey(key, mstSet);
    mstSet[u] = true;

    for (let v = 0; v < V; v++)
      if (graph[u][v] && mstSet[v] == false && graph[u][v] < key[v])
        (parent[v] = u), (key[v] = graph[u][v]);
  }

  printResult(parent, graph);
}

let graph = [
  [0, 2, 0, 6, 0],
  [2, 0, 3, 8, 5],
  [0, 3, 0, 0, 7],
  [6, 8, 0, 0, 9],
  [0, 5, 7, 9, 0],
];

MyPrimMST(graph);
