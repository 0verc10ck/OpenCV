file(GLOB SOURCES  *.cpp)
add_executable(${PROJECT_NAME} ${SOURCES}  )

find_package( OpenCV REQUIRED )
target_link_libraries( Face_Recog ${OpenCV_LIBS} )