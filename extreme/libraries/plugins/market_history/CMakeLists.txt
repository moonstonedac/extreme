file(GLOB HEADERS "include/extreme/market_history/*.hpp")

add_library( extreme_market_history 
             market_history_plugin.cpp
           )

target_link_libraries( extreme_market_history extreme_chain extreme_app )
target_include_directories( extreme_market_history
                            PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include" )

if(MSVC)
  set_source_files_properties( market_history_plugin.cpp PROPERTIES COMPILE_FLAGS "/bigobj" )
endif(MSVC)

install( TARGETS
   extreme_market_history

   RUNTIME DESTINATION bin
   LIBRARY DESTINATION lib
   ARCHIVE DESTINATION lib
)
INSTALL( FILES ${HEADERS} DESTINATION "include/extreme/market_history" )

