// config.c
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

#include "video.h"
#include "assert_with_message.h"

int testMethod(int input1, int input2, int durationMovie, int durationCredit, int fps, char* unit, float output){
    char message[100];
    float result = video(input1, input2, durationMovie, durationCredit, fps, unit);
    sprintf(message, "Inputs (%d, %d, %d, %d, %d, %s). Expected output should be %f. Actuel output = %f", input1, input2, durationMovie, durationCredit, fps, unit, output, result);
    assert_with_message(((result >= output - 0.2) && (result <= output + 0.2)), message);
}

int main() {
    testMethod(1024, 1024, 30, 10, 20, "go", 1.782226563);

    testMethod(500, 300, 60, 10, 20, "mo", 518.5604095);

    testMethod(500, 400, 10, 2, 1, "ko", 5908.203125);
    return 0;
}
