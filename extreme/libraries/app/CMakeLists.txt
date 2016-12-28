file(GLOB HEADERS "include/extreme/app/*.hpp")
file(GLOB EGENESIS_HEADERS "../egenesis/include/extreme/app/*.hpp")

add_library( extreme_app 
             api.cpp
             application.cpp
             database_api.cpp
             impacted.cpp
             plugin.cpp
             ${HEADERS}
             ${EGENESIS_HEADERS}
           )

target_link_libraries( extreme_app extreme_market_history extreme_account_history extreme_chain fc extreme_db extreme_net extreme_time extreme_utilities )
target_include_directories( extreme_app
                            PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include"
                            "${CMAKE_CURRENT_SOURCE_DIR}/../egenesis/include" )

if(MSVC)
  set_source_files_properties( application.cpp api.cpp database_api.cpp PROPERTIES COMPILE_FLAGS "/bigobj" )
endif(MSVC)

INSTALL( TARGETS
   extreme_app

   RUNTIME DESTINATION bin
   LIBRARY DESTINATION lib
   ARCHIVE DESTINATION lib
)
INSTALL( FILES ${HEADERS} DESTINATION "include/extreme/app" )
