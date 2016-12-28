file(GLOB HEADERS "include/extreme/time/*.hpp")

add_library( extreme_time
             time.cpp
           )

target_link_libraries( extreme_time fc )
target_include_directories( extreme_time
                            PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include" )

install( TARGETS
   extreme_time

   RUNTIME DESTINATION bin
   LIBRARY DESTINATION lib
   ARCHIVE DESTINATION lib
)
install( FILES ${HEADERS} DESTINATION "include/extreme/time" )
