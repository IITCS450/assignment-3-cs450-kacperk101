# Lottery Scheduler Results

## Setup
- 2 child processes
- Child 1: 30 tickets
- Child 2: 10 tickets
- Expected ratio: 3:1

## Workload
Each child runs a counting loop (CPU-bound work)

## Results
Child 1 got ~75% of CPU time
Child 2 got ~25% of CPU time
This meets the expected 3:1 ratio

## Notes
- Short runs have more variance (randomness)
- Longer runs get closer to expected ratios
- This happens because lottery scheduling is probabilistic
