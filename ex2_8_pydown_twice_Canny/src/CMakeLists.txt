file(GLOB SOURCES  *.cpp)
add_executable(${PROJECT_NAME} ${SOURCES}  )

find_package( OpenCV REQUIRED )
target_link_libraries( ex2_8_pydown_twice_Canny ${OpenCV_LIBS} )