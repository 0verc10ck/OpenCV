file(GLOB SOURCES  *.cpp)
add_executable(${PROJECT_NAME} ${SOURCES}  )

find_package( OpenCV REQUIRED )
target_link_libraries( ex2_7_Canny_edge ${OpenCV_LIBS} )