file(GLOB HEADERS "include/extreme/witness/*.hpp")

add_library( extreme_witness 
             witness.cpp
           )

target_link_libraries( extreme_witness extreme_chain extreme_app extreme_time )
target_include_directories( extreme_witness
                            PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include" )

install( TARGETS
   extreme_witness

   RUNTIME DESTINATION bin
   LIBRARY DESTINATION lib
   ARCHIVE DESTINATION lib
)
