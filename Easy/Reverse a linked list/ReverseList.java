import java.io.*;
import java.util.*;

class Node {

    int data;
    Node next;

    Node(int x) {
        data = x;
        next = null;
    }
}

class ReverseList {

    static void printList(Node node) {
        while (node != null) {
            System.out.print(node.data + " ");
            node = node.next;
        }
        System.out.println();
    }

    public static void main(String args[]) throws IOException {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t > 0) {
            int n = sc.nextInt();

            Node head = new Node(sc.nextInt());
            Node tail = head;

            for (int i = 0; i < n - 1; i++) {
                tail.next = new Node(sc.nextInt());
                tail = tail.next;
            }

            Solution ob = new Solution();
            head = ob.reverseList(head);
            printList(head);
            t--;
        }
    }
}

class Solution {

    Node reverseList(Node head) {
        Node prev = null;
        Node current = head;
        Node next = head.next;

        while (current != null) {
            next = current.next;
            current.next = prev;
            prev = current;
            current = next;
        }
        head = prev;
        return head;
    }
}
