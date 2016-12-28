file(GLOB HEADERS "include/extreme/account_history/*.hpp")

add_library( extreme_account_history 
             account_history_plugin.cpp
           )

target_link_libraries( extreme_account_history extreme_chain extreme_app )
target_include_directories( extreme_account_history
                            PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include" )

if(MSVC)
  set_source_files_properties( account_history_plugin.cpp PROPERTIES COMPILE_FLAGS "/bigobj" )
endif(MSVC)

install( TARGETS
   extreme_account_history

   RUNTIME DESTINATION bin
   LIBRARY DESTINATION lib
   ARCHIVE DESTINATION lib
)
INSTALL( FILES ${HEADERS} DESTINATION "include/extreme/account_history" )

