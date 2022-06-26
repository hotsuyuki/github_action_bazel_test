load("@rules_cc//cc:defs.bzl", "cc_library", "cc_test")

cc_library(
  name = "add",
  hdrs = ["add.h"],
)

cc_test(
  name = "add_test",
  srcs = ["test/add_test.cc"],
  deps = [
    ":add",
    "@com_google_googletest//:gtest_main",
  ],
)
