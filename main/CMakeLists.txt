set(srcs "task.cpp" "queue_handler.cpp" "main.cpp"
"include/task.h" "include/queue_handler.h"
    )

idf_component_register(SRCS ${srcs}
                        INCLUDE_DIRS "."
                       )

target_compile_options(${COMPONENT_LIB} PRIVATE -std=gnu++2b)