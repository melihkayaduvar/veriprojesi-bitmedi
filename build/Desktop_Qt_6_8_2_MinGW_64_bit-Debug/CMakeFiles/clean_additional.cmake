# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\VeriProjesi_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\VeriProjesi_autogen.dir\\ParseCache.txt"
  "VeriProjesi_autogen"
  )
endif()
