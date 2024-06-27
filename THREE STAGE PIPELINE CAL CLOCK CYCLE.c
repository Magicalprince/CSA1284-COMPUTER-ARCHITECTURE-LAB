#include <stdio.h>

#define NUM_INSTRUCTIONS 5

typedef struct {
    int fetch;
    int decode;
    int execute;
} PipelineStage;

int main() {
    int clockCycle = 0;
    PipelineStage pipeline[NUM_INSTRUCTIONS] = {0};

    for(int i = 0; i < NUM_INSTRUCTIONS; ++i) {
        // Fetch
        pipeline[i].fetch = ++clockCycle;
        
        // Decode
        if(i > 0) {
            pipeline[i].decode = pipeline[i-1].fetch + 1;
        } else {
            pipeline[i].decode = pipeline[i].fetch + 1;
        }
        
        // Execute
        if(i > 0) {
            pipeline[i].execute = pipeline[i-1].decode + 1;
        } else {
            pipeline[i].execute = pipeline[i].decode + 1;
        }
    }

    // Total clock cycles taken
    int totalClockCycles = pipeline[NUM_INSTRUCTIONS-1].execute;

    printf("Total clock cycles required: %d\n", totalClockCycles);

    // Print the pipeline stages for each instruction
    for(int i = 0; i < NUM_INSTRUCTIONS; ++i) {
        printf("Instruction %d: Fetch at %d, Decode at %d, Execute at %d\n", i+1, pipeline[i].fetch, pipeline[i].decode, pipeline[i].execute);
    }

    return 0;
}
