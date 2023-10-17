set(INCLUDE_PATH "${CMAKE_SOURCE_DIR}/include")
set(SRC_PATH     "${CMAKE_SOURCE_DIR}/src")

include_directories(${INCLUDE_PATH})

#set(INCLUDES "${INCLUDE_PATH}/Vec3.h"
#             "${INCLUDE_PATH}/Curve3D.h"
#             "${INCLUDE_PATH}/Circle.h"
#             "${INCLUDE_PATH}/Ellipse.h")

set(SRCS     "${SRC_PATH}/main.cpp"
             "${SRC_PATH}/Circle.cpp"
             "${SRC_PATH}/Ellipse.cpp"
             "${SRC_PATH}/Helix.cpp")

add_executable(${CMAKE_PROJECT_NAME} ${SRCS})
