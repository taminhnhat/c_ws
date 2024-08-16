add_test([=[FactorialTest.FunctionTest]=]  E:/Workspaces/c_ws/google_test/build/factorial_test.exe [==[--gtest_filter=FactorialTest.FunctionTest]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[FactorialTest.FunctionTest]=]  PROPERTIES WORKING_DIRECTORY E:/Workspaces/c_ws/google_test/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  factorial_test_TESTS FactorialTest.FunctionTest)
