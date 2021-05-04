cmake_minimum_required(VERSION 3.20.0)

if (FOO) # will be false
  message("Not printed 1")
endif()

set(FOO "FOO")

if (FOO)
  message("Printed 1")
endif()

if ("FOO")
  message("Not printed 2")
endif()

if ("${FOO}")
  message("Not printed 3")
endif()

if ("${BAR}")
  message("Not printed 4")
endif()

set(BAR "TRUE")

if ("${BAR}")
  message("Printed 2")
endif()

set(BAR "3")

if ("${BAR}")
  message("Printed 3")
endif()

if ("4")
  message("Printed 4")
endif()
