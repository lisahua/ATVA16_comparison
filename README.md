# SketchRep Evaluation DataSet

SketchRep is a program repair tool  that translates a faulty program to a partial non-deterministic program and leverages off-the-shelf program synthesizer to fill the “holes” of the partial program. This potential repair skeleton is further sent to the synthesizer, which tries to substitute holes with concrete program that satisfies all test assertions.

Because this paper is under submission, we only provide evaluation dataset in this reporsitory. The source code of SketchRep will be published afterward. 

## Tools

### SketchRep

SketchRep folder contains the results from executing SketchRep on 35 faults benchmark.

### GenProg

GenProg folder contains the results from executing GenProg on 35 faults benchmark using GenProg v3.0.

### SPR

SketchRep folder contains the results from executing SPR on 35 faults benchmark. We use the virtual image provided by SPR authors.

### Exhaustive Test Suite

Please see [Exhaustive.md](https://github.com/lisahua/ATVA16_comparison/blob/master/ExhaustiveTuite.md)
