file(GLOB HEADERS "include/extreme/delayed_node/*.hpp")

add_library( extreme_delayed_node 
             delayed_node_plugin.cpp
           )

target_link_libraries( extreme_delayed_node extreme_chain extreme_app )
target_include_directories( extreme_delayed_node
                            PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include" )

if(MSVC)
  set_source_files_properties( delayed_node_plugin.cpp PROPERTIES COMPILE_FLAGS "/bigobj" )
endif(MSVC)

install( TARGETS
   extreme_delayed_node

   RUNTIME DESTINATION bin
   LIBRARY DESTINATION lib
   ARCHIVE DESTINATION lib
)
