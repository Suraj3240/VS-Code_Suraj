import threading
import time

MAX_BUFFER_SIZE = 5  # Maximum size of the buffer
buffer = []  # Shared buffer
buffer_lock = threading.Semaphore(1)  # Semaphore to lock the buffer
empty = threading.Semaphore(MAX_BUFFER_SIZE)  # Semaphore to represent empty slots in the buffer
full = threading.Semaphore(0)  # Semaphore to represent full slots in the buffer


def producer():
    while True:
        time.sleep(5)  # Wait for 5 seconds before producing an item
        item = "item"
        empty.acquire()  # Wait for an empty slot in the buffer
        buffer_lock.acquire()  # Acquire the lock on the buffer
        buffer.append(item)  # Add the item to the buffer
        print(f"Produced {item}")
        buffer_lock.release()  # Release the lock on the buffer
        full.release()  # Signal that a slot in the buffer is full


def consumer(id):
    while True:
        time.sleep(2)  # Wait for 2 seconds before consuming an item
        full.acquire()  # Wait for a full slot in the buffer
        buffer_lock.acquire()  # Acquire the lock on the buffer
        if len(buffer) > 0:
            item = buffer.pop(0)  # Remove the first item from the buffer
            print(f"Consumer {id} consumed {item}")
        else:
            print(f"Consumer {id} found nothing to consume")
        buffer_lock.release()  # Release the lock on the buffer
        empty.release()  # Signal that an empty slot in the buffer is available


if _name_ == "_main_":
    producer_thread = threading.Thread(target=producer)
    consumer_thread_1 = threading.Thread(target=consumer, args=(1,))
    consumer_thread_2 = threading.Thread(target=consumer, args=(2,))

    producer_thread.start()
    consumer_thread_1.start()
    consumer_thread_2.start()

    producer_thread.join()
    consumer_thread_1.join()
    consumer_thread_2.join()