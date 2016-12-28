file(GLOB HEADERS "include/extreme/net/*.hpp")

set(SOURCES node.cpp
            stcp_socket.cpp
            core_messages.cpp
            peer_database.cpp
            peer_connection.cpp
            message_oriented_connection.cpp)

add_library( extreme_net ${SOURCES} ${HEADERS} )

target_link_libraries( extreme_net 
  PUBLIC fc extreme_db )
target_include_directories( extreme_net 
  PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include"
  PRIVATE "${CMAKE_SOURCE_DIR}/libraries/chain/include"
)

if(MSVC)
  set_source_files_properties( node.cpp PROPERTIES COMPILE_FLAGS "/bigobj" )
endif(MSVC)

if (USE_PCH)
  set_target_properties(extreme_net PROPERTIES COTIRE_ADD_UNITY_BUILD FALSE)
  cotire(extreme_net)
endif(USE_PCH)

install( TARGETS
   extreme_net

   RUNTIME DESTINATION bin
   LIBRARY DESTINATION lib
   ARCHIVE DESTINATION lib
)
install( FILES ${HEADERS} DESTINATION "include/extreme/net" )
