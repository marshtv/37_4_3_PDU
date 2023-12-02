# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "37_4_3_PDU_autogen"
  "CMakeFiles\\37_4_3_PDU_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\37_4_3_PDU_autogen.dir\\ParseCache.txt"
  )
endif()
