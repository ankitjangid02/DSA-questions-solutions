// ! Binary Search Tree
public class Day9 {

    int s = 0;

    public static class Node {
        int data;
        Node left;
        Node right;

        Node(int data) {
            this.data = data;
        }
    }

    public Node insert(Node root, int val) {
        if (root == null) {
            s = s + val;
            return new Node(val);
        }

        if (val < root.data) {
            root.left = insert(root.left, val);
        } else {
            root.right = insert(root.right, val);
        }

        return root;
    }

    public void find(Node root, int val) {
        if (root == null) {
            System.out.println("Not in the BST");
            return;
        }
        if (root.data == val) {
            System.out.println("Found!!!");
            return;
        }
        if (val < root.data) {
            find(root.left, val);
        } else {
            find(root.right, val);
        }

    }

    public Node inOrderSuccessor(Node root) {
        while (root.left != null) {
            root = root.left;
        }
        return root;
    }

    public Node remove(Node root, int val) {
        if (root == null) {
            System.out.println("Not in the BST");
            return null;
        }

        if (val < root.data) {
            root.left = remove(root.left, val);
        } else if (val > root.data) {
            root.right = remove(root.right, val);
        }

        else {

            // 0 child
            if (root.left == null && root.right == null) {
                return null;
            }

            // 1 child
            if (root.left == null) {
                return root.right;
            } else if (root.right == null) {
                return root.left;
            }

            // 2 child
            if(root.left != null && root.right != null){
            Node IOS = inOrderSuccessor(root.right);
            root.data = IOS.data;
            return remove(root.right, IOS.data);}
        }
        return root;

    }

    // ascending order
    public void inOrder(Node root) {
        if (root == null) {
            return;
        }

        inOrder(root.left);
        System.out.println(root.data + " ");
        inOrder(root.right);
    }

    // descending order
    public void desc(Node root) {
        if (root == null) {
            return;
        }

        desc(root.right);
        System.out.println(root.data + " ");
        desc(root.left);
    }

    public static void main(String[] args) {
        Day9 bst = new Day9();

        int[] nodes = { 3, 1, 5, 6, 2, 8 };

        Node root = null;

        for (int i = 0; i < nodes.length; i++) {
            root = bst.insert(root, nodes[i]);
        }

        // bst.inOrder(root);
        // bst.desc(root);

        // System.out.println();

        // bst.find(root, 3);

        // System.out.println(bst.s );

        bst.remove(root, 3);
        bst.inOrder(root);
        System.out.println();

    }
}
