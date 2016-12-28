file(GLOB HEADERS "include/extreme/utilities/*.hpp")

set(sources
   key_conversion.cpp
   string_escape.cpp
   tempdir.cpp
   words.cpp
   ${HEADERS})

add_library( extreme_utilities
             ${sources}
             ${HEADERS} )
target_link_libraries( extreme_utilities fc )
target_include_directories( extreme_utilities
                            PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include" )
if (USE_PCH)
  set_target_properties(extreme_utilities PROPERTIES COTIRE_ADD_UNITY_BUILD FALSE)
  cotire(extreme_utilities)
endif(USE_PCH)

install( TARGETS
   extreme_utilities

   RUNTIME DESTINATION bin
   LIBRARY DESTINATION lib
   ARCHIVE DESTINATION lib
)
install( FILES ${HEADERS} DESTINATION "include/extreme/utilities" )
