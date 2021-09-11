function(AddMemcheck target)
  include(FetchContent)
  FetchContent_Declare(
    memcheck-cover
    GIT_REPOSITORY https://github.com/Farigh/memcheck-cover.git
    GIT_TAG        release-1.2
  )
  FetchContent_MakeAvailable(memcheck-cover)
  set(MEMCHECK_PATH ${memcheck-cover_SOURCE_DIR}/bin)

  add_custom_target(memcheck
    COMMAND ${MEMCHECK_PATH}/memcheck_runner.sh -o
            "${CMAKE_BINARY_DIR}/valgrind/report"
            -- $<TARGET_FILE:${target}>
    COMMAND ${MEMCHECK_PATH}/generate_html_report.sh
            -i "${CMAKE_BINARY_DIR}/valgrind"
            -o "${CMAKE_BINARY_DIR}/valgrind"
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
  )
endfunction()
