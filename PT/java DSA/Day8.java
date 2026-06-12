// ! Trees
public class Day8 {

    int i = -1;
    int s=0;

    class Node{
        Integer data;
        Node left;
        Node right;

        Node(Integer data){
            this.data = data;
            this.left=null;
            this.right=null;
        }
    }

    public Node buildTree(int[] nodes){
        
        i++;

        if(nodes[i] == -1){
            // return null;
            return new Node(null);
        }

        Node newNode = new Node(nodes[i]);
        s=s + newNode.data;
        
        newNode.left=buildTree(nodes);
        newNode.right=buildTree(nodes);

        return newNode;
    }

    public void preOrder(Node root){
        if (root == null) {
            return;
        }
        System.out.println(root.data);
        preOrder(root.left);
        preOrder(root.right);
    }
    public void postOrder(Node root){
        if (root == null) {
            return;
        }
        postOrder(root.left);
        postOrder(root.right);
        System.out.println(root.data);
    }
    public void inOrder(Node root){
        if (root == null) {
            return;
        }
        postOrder(root.left);
        System.out.println(root.data);
        postOrder(root.right);
    }

    public int treeHeight(Node root){
        if (root == null) {
            return 0;
        }

        int left = treeHeight(root.left);
        int right = treeHeight(root.right);

        return Math.max(left, right) + 1;
    }
    
    public int sumOfNodes(Node root){
        if (root == null) {
            return 0;
        }

        int left = sumOfNodes(root.left);
        int right = sumOfNodes(root.right);

        return left + right + root.data;
    }

    public static void main(String[] args) {
        Day8 bt = new Day8();
        int[] nodes={2,1,-1,-1,3,-1,-1};
        Node root= bt.buildTree(nodes);
        // System.out.println(root.data);
        // System.out.println(root.left.data);
        // System.out.println(root.right.data);

        // bt.preOrder(root);
        // bt.postOrder(root);
        // bt.inOrder(root);

        // System.out.println(bt.treeHeight(root));
        System.out.println(bt.s);
        System.out.println(bt.sumOfNodes(root));
    }
}