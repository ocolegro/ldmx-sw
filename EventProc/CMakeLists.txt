# find ROOT
find_package(ROOT REQUIRED COMPONENTS Core RIO TreePlayer)

# declare SimApplication module
module(
  NAME EventProc
  EXTRA_INCLUDE_DIRS ${ROOT_INCLUDE_DIRS}
  EXTRA_LINK_LIBRARIES ${ROOT_LIBRARIES}
  DEPENDENCIES Event DetDescr
)

# include ROOT CMake macros and compilation settings
include(${ROOT_USE_FILE})
