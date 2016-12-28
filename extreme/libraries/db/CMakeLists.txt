file(GLOB HEADERS "include/extreme/db/*.hpp")
add_library( extreme_db undo_database.cpp index.cpp object_database.cpp ${HEADERS} )
target_link_libraries( extreme_db fc )
target_include_directories( extreme_db PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include" )

install( TARGETS
   extreme_db

   RUNTIME DESTINATION bin
   LIBRARY DESTINATION lib
   ARCHIVE DESTINATION lib
)
install( FILES ${HEADERS} DESTINATION "include/extreme/db" )
