add_test([=[CircleTest.FunctionTest]=]  E:/Workspaces/c_ws/google_test/build/circle_test.exe [==[--gtest_filter=CircleTest.FunctionTest]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[CircleTest.FunctionTest]=]  PROPERTIES WORKING_DIRECTORY E:/Workspaces/c_ws/google_test/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  circle_test_TESTS CircleTest.FunctionTest)
