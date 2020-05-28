cmake_minimum_required(VERSION 2.6)
project(JSONCPP_TEST)



set(json_srcs
jsoncpp1.9.0/json_reader.cpp
jsoncpp1.9.0/json_value.cpp
jsoncpp1.9.0/json_writer.cpp
)

set(
    main   
    main.cpp 
)

add_executable(jsoncpp ${json_srcs} ${main})