#############################################################
# Cube 3D in command line
#############################################################

project( C++_Proj_0006 )

message( "Source of application:  ${CMAKE_SOURCE_DIR} " )
message( "Subproject name:  ${PROJECT_NAME} " )

set(CMAKE_BINARY_DIR "${CMAKE_SOURCE_DIR}/bin")
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR} )

message( "Source of application:  ${CMAKE_BINARY_DIR} " )

file(GLOB SOURCES "*.cpp" )
file(GLOB HEADERS "*.h" )

add_executable( ${PROJECT_NAME}  
				${HEADERS} 
				${SOURCES})
				
target_link_libraries( ${PROJECT_NAME} )
