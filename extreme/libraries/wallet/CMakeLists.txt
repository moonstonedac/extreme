file(GLOB HEADERS "include/extreme/wallet/*.hpp")

add_library( extreme_wallet wallet.cpp ${HEADERS})
target_link_libraries( extreme_wallet PRIVATE extreme_app extreme_net extreme_chain extreme_utilities fc ${CMAKE_DL_LIBS} ${PLATFORM_SPECIFIC_LIBS} )
target_include_directories( extreme_db PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include" )

if(MSVC)
  set_source_files_properties( wallet.cpp PROPERTIES COMPILE_FLAGS "/bigobj" )
endif(MSVC)

install( TARGETS
   extreme_wallet

   RUNTIME DESTINATION bin
   LIBRARY DESTINATION lib
   ARCHIVE DESTINATION lib
)
install( FILES ${HEADERS} DESTINATION "include/extreme/wallet" )
