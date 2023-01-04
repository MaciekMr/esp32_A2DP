#include <stdlib.h>

enum sender_t {bt=0, a2dp=1, i2s=3}; 

struct event
{
    void * object_handler; //pointer to object
    uint16_t event_id; //if the events shall be receive in order
    sender_t sender; //to define destination
};

class queue_handler
{
private:
    static queue_handler static_task_handler;
    static void runTask(void* queue_handler);
protected:
    TaskHandle_t taskhandle;
    QueueHandle_t queue;  //in the future more queue handlers
    void init_queue();  //create queue and create task to receive events
public:
    queue_handler();
    ~queue_handler();
    void handle_event(event *);

};