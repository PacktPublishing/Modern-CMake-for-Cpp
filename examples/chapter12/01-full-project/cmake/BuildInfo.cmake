set(BUILDINFO_TEMPLATE_DIR ${CMAKE_CURRENT_LIST_DIR})
set(DESTINATION "${CMAKE_CURRENT_BINARY_DIR}/buildinfo")

string(TIMESTAMP TIMESTAMP)
find_program(GIT_PATH git REQUIRED)
execute_process(COMMAND
                  ${GIT_PATH} log --pretty=format:'%h' -n 1
                OUTPUT_VARIABLE COMMIT_SHA)

configure_file(
  "${BUILDINFO_TEMPLATE_DIR}/buildinfo.h.in"
  "${DESTINATION}/buildinfo.h" @ONLY
)

function(BuildInfo target)
  target_include_directories(${target} PRIVATE ${DESTINATION})
endfunction()
