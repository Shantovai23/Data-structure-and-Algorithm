class Node:
    def __init__(self, data=None, next=None):
        self.data = data
        self.next = next


class LinkedList:
    def __init__(self):
        self.head = None

    def insert(self, data):
        if self.head is None:
            self.head = Node(data, None)
            return

        value = self.head

        while value.next:
            value = value.next

        value.next = Node(data, None)

    def print(self):
        if self.head is None:
            print("Empty")
            return

        value = self.head

        while value:
            print(value.data)
            value = value.next


if __name__ == "__main__":
    ll = LinkedList()
    ll.insert(300)
    ll.insert(301)
    ll.insert(145)
    ll.print()

