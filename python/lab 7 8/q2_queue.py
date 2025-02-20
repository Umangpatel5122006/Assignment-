class Queue:
    def __init__(self):
        self.queue = []

    def enqueue(self, item):
        self.queue.append(item)
        print(f"Enqueued: {item}")

    def dequeue(self):
        if not self.is_empty():
            item = self.queue.pop(0)
            print(f"Dequeued: {item}")
            return item
        else:
            print("Queue is empty")
            return None

    def is_empty(self):
        return len(self.queue) == 0

    def display(self):
        if self.is_empty():
            print("Queue is empty")
        else:
            print("Queue:", " -> ".join(map(str, self.queue)))

q = Queue()
q.enqueue(1)
q.enqueue(2)
q.enqueue(3)
q.display()  # Queue 1 -> 2 -> 3
q.dequeue()  #  Dequeued 1
q.display()  #  Queue 2 -> 3
q.dequeue()  # Dequeued 2
q.dequeue()  # Dequeued 3
q.dequeue()  # Queue is empty
q.display()  # Queue is empty