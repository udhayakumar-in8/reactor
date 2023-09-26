#include <unity/unity_fixture.h>

static void
RunAllTests(void)
{
    RUN_TEST_GROUP(RX_ADD);
    RUN_TEST_GROUP(RX_SUBTRACT);
}

int
main(int argc, const char *argv[])
{
    return UnityMain(argc, argv, RunAllTests);
}