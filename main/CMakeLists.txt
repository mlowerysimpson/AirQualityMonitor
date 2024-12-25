file(GLOB_RECURSE SRC_UI ${CMAKE_SOURCE_DIR} "ui/*.c"
     GLOB_RECURSE SRC_WIFI ${CMAKE_SOURCE_DIR} "WiFi/*.c"
     GLOB_RECURSE SRC_SENSOR ${CMAKE_SOURCE_DIR} "Sensor/*.c" 
     )

idf_component_register(SRCS "main.c" ${SRC_UI} ${SRC_WIFI} ${SRC_SENSOR}
                    INCLUDE_DIRS "." "ui" "WiFi" "Sensor")
