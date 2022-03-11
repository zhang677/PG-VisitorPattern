# Function for adding a test

function(add_pg_test TEST_NAME TEST_ENTRY_PATH)
    add_executable(${TEST_NAME} ${TEST_ENTRY_PATH})
    get_property(PG_ALL_LIBS GLOBAL PROPERTY PG_ALL_LIBS_PROPERTY)
    target_link_libraries(${TEST_NAME}
            gtest gtest_main pthread ${PG_ALL_LIBS})
    add_test(${TEST_NAME} ${TEST_NAME})
endfunction()


add_pg_test(TestVisitor tests-visitor.cpp)
