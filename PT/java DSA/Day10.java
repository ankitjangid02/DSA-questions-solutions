import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;

public class Day10 {

    public class Edge{
        int src;
        int dest;

        Edge(int src, int dest){
            this.src = src;
            this.dest = dest;
        }
    }

    public int createEdge(ArrayList<Edge>[] graph){
        for (int i = 0; i < graph.length; i++) {
            graph[i] = new ArrayList<>();
        }
        graph[0].add(new Edge(0,1));
        graph[0].add(new Edge(0,2));

        graph[1].add(new Edge(1,0));
        graph[1].add(new Edge(1,3));

        graph[2].add(new Edge(2,0));
        graph[2].add(new Edge(2,3));
        graph[2].add(new Edge(2,4));
        
        graph[3].add(new Edge(3,1));
        graph[3].add(new Edge(3,2));
        graph[3].add(new Edge(3,4));

        graph[4].add(new Edge(4,2));
        graph[4].add(new Edge(4,3));

        return 0;
    }

    // directed
    public void addEdge1(ArrayList<Edge>[] graph, int src, int dest){
        graph[src].add(new Edge(src, dest));
    }
    
    // undirected
    public void addEdge2(ArrayList<Edge>[] graph, int src, int dest){
        graph[src].add(new Edge(src, dest));
        graph[src].add(new Edge(dest, src));
    }

    public void bfs(ArrayList<Edge>[] graph){
        Queue<Integer> q = new LinkedList<>();
        int V = graph.length;
        boolean[] visited = new boolean[graph.length];
        q.add(0);
        while (!q.isEmpty()) {
            int temp=q.remove();

            if(visited[temp] == false){
                System.out.print(temp);
                visited[temp] = true;

                for (int i = 0; i < graph[temp].size(); i++) {
                    Edge e=graph[temp].get(i);
                    // q.add(graph[temp].get(i).dest);
                    q.add(e.dest);
                }
            }
        }
    }

    public static void main(String[] args) {
        Day10 graphs = new Day10();

        int vertices = 5;

        @SuppressWarnings("unchecked")
        ArrayList<Edge>[] graph = new ArrayList[vertices];
        
        for (int i = 0; i < graph.length; i++) {
            graph[i] = new ArrayList<>();
        }

        for (int i = 0; i < graph.length; i++) {
            graph[i] = new ArrayList<>();
        }

        // graphs.addEdge2(graph, 0, 1);
        // graphs.addEdge2(graph, 0, 2);
        graphs.createEdge(graph);
        graphs.bfs(graph);

        // for (int idx = 0; idx < graph.length; idx++) {
        //     System.out.print("neighbours of "+idx+" is:");
        //     for (int i = 0; i < graph[idx].size(); i++) {
        //         Edge e= graph[idx].get(i);
        //         System.out.print("("+e.src+","+e.dest+")");
        //         System.out.print(",");
        //     }
        //     System.out.println();
        // }
    }   
}
