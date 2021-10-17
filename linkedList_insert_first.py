class Node:
    def __init__(self, data=None, next=None):
        self.data = data
        self.next = next


class LinkedList:
    def __init__(self):
        self.head = None

    def insert(self, data):
        node = Node(data, self.head)
        self.head = node

    def print(self):
        if self.head is None:
            print("LinkList is Empty")
            return

        value = self.head

        while value:
            print(value.data)
            value = value.next


if __name__ == "__main__":
    ll = LinkedList()
    ll.insert(5)
    ll.insert(15)
    ll.insert(25)
    ll.print()

