cmake_minimum_required(VERSION 3.13)

# init from submodule
include(pico-sdk/pico_sdk_init.cmake)

project(my_project)

# Init SDK
pico_sdk_init()

add_executable(hello_world
	hello_world.c
)

# Add pico_stdib
target_link_libraries(hello_world pico_stdlib)

# create files
pico_add_extra_outputs(hello_world)
