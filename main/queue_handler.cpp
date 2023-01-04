#include <stdio.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include "freertos/queue.h"
#include "include/queue_handler.h"



queue_handler::queue_handler()
{
    
}
queue_handler::~queue_handler()
{

}
void queue_handler::init_queue()  //create queue and create task to receive events
{
    queue = xQueueCreate(CONFIG_QUEUE_LENGTH, sizeof(event)); 
    if (queue == 0)
    {
        printf("Failed to create queue= %p\n", queue);
    }

    //Create task with queue_handler::handle_event
    // xTaskCreate(&queue_handler::handle_event, "Queue_Task", 4096, NULL, 10, &taskhandle););
}
void queue_handler::handle_event(event *)
{

}