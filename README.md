# DRRS_miner

Bitcoin Miner - Hardware Acceleration on the Kria KV260
Team Members
Rajdeep Virdy (z5498562)
Sagar Bhatnagar (z5364817)
Dhruv Gulwani (z5500136)
Ruban Goyal (z5510371)
Project Objective
Primary Objectives
The primary goal is to validate the advantages of using FPGAs for mining tasks, particularly by showcasing how FPGAs can significantly accelerate the hashing process. This involves demonstrating speed improvements and energy and efficiency gains, which are crucial in mining operations.
The project focuses on comparative analysis of accelerating two distinct hashing algorithms SHA256d, the standard bitcoin mining, and BLAKE2s, known for its efficiency and speed on smaller hardware scales.
The project will encompass the design and the implementation of hardware accelerators for BLAKE2S, and SHA256d hash functions on the Kria KV260 FPGA and the modification of a basic Bitcoin mining algorithm (excluding network protocols) to utilise the implemented hardware hash accelerators. The evaluation will cover throughput, performance, and resource utilisation on the FPGA.
Through hands-on implementation and testing of these algorithms on hardware, team members will deepen their understanding of mining principles, hashing algorithms, and FPGA design.
Secondary Objectives
Thoroughly document the project, including design choices, implementation details, testing methodology, and performance results. Discuss the challenges encountered, lessons learned, and potential areas for future research or improvement.
Investigate the feasibility and implications of using alternative hash functions (KECCAK-256, GROESTL-256) for a deeper comparative analysis and greater understanding.
Algorithm to be investigated
SHA256D (Double SHA256)
This is the standard hashing algorithm used in Bitcoin. It involves applying the SHA-256 hash function twice to the input data.
Widely used and well-tested, providing a high level of security.
Relatively simple to implement in hardware.
Good balance of speed and security.
Considerations for Implementation -

Focus on optimising the SHA-256 function, as it's applied twice.
Explore parallelism to speed up the two rounds of hashing.
BLAKE2S
A fast and secure cryptographic hash function designed as a potential successor to SHA-2.
Optimised for 32-bit platforms, making it potentially well-suited for the KV260's processor.
Offers different variants with varying security levels (BLAKE2s is the 256-bit version).
Relatively simple structure, which could make it easier to implement in hardware.
Considerations for Implementation -

Focus on leveraging the algorithm's 32-bit optimisations on the KV260.
Explore parallelism to maximise performance.
PSEUDOCODE

FUNCTION mine_hypothetical_coin(header)
    WHILE timeout IS FALSE
        header.nonce = header.nonce + 1
        IF blake2s_256(header) < header.target THEN
            BREAK
        END IF
    END WHILE
    RETURN header
END FUNCTION

FUNCTION blake2s_256(header)
    h = IV
    m = message_padding(header)
    FOR EACH block OF SIZE 64 IN m
        h = G(h, block, 0, 10)
    END FOR
    output = h[0] XOR h[1] XOR h[2] XOR h[3] XOR h[4] XOR h[5] XOR h[6] XOR h[7]
    RETURN output
END FUNCTION

FUNCTION G(v, a, b, c, d, x, y)
    v[a] = (v[a] + v[b] + x) modulo 2^32
    v[d] = (v[d] XOR v[a]) right rotate 16 bits
    v[c] = (v[c] + v[d]) modulo 2^32
    v[b] = (v[b] XOR v[c]) right rotate 12 bits
    v[a] = (v[a] + v[b] + y) modulo 2^32
    v[d] = (v[d] XOR v[a]) right rotate 8 bits
    v[c] = (v[c] + v[d]) modulo 2^32
    v[b] = (v[b] XOR v[c]) right rotate 7 bits
    RETURN v
END FUNCTION

FUNCTION message_padding(header)
    message_length_bits = LENGTH(header) * 8
    padded_message = CONCATENATE(header, 0x81)
    WHILE (LENGTH(padded_message) * 8) modulo 512 != 448
        padded_message = CONCATENATE(padded_message, 0x00)
    END WHILE
    padded_message = CONCATENATE(padded_message, message_length_bits AS 64-bit BIG-ENDIAN INTEGER)
    RETURN padded_message
Project plan including milestones and timeline
Milestone 0: Project Definition and Planning (Weeks 3-5)

Finalise Project Team and establish communication channels and collaboration tools for effective teamwork.
Finalise a project and define Project Scope and Objectives:
Develop a Project Plan outlining milestones, timelines, tasks, and dependencies.
Research and learn the prerequisites for the project.
Milestone 1: Hardware Accelerator Design (Week 6)

Design hardware accelerators for SHA256d and BLAKE2s using Vitis HLS.
Optimise the designs for performance and resource utilisation on the KV260 FPGA.
Verify the functionality of each accelerator through simulation and testing.
Milestone 2: Integration and Algorithm Modification (Week 7)

Design interfaces between the processor and the FPGA accelerators.
Modify the mining algorithm to offload hash computations to the hardware accelerators.
Integrate the drivers for the accelerators into the mining algorithm.
Milestone 3: Performance Evaluation and Analysis (Week 8-9)

Benchmark the hardware-accelerated miner with both SHA256d and BLAKE2s against a software baseline.
Collect data on hash rate, resource utilisation (logic cells, BRAM, DSP slices), and power consumption.
Analyse the results, comparing the performance, efficiency, and resource trade-offs of both algorithms.
Milestone 4: Documentation and Reporting (Week 10)

Prepare a comprehensive project report detailing the design, implementation, results, and analysis.
Discuss challenges, lessons learned, and potential future work.
Roles of Team Members
Ruban Goyal and Rajdeep Virdy: Studying and implementing SHA256D into FPGA, while identifying core performance bottlenecks and solving them by leveraging the parallel computation abilities of the KV260 board.

Dhruv Gulwani and Sagar Bhatnagar: The implementation of BLAKE2s into FPGA systems. Our primary focus is on identifying and resolving performance bottlenecks by harnessing the parallel computation capabilities of the KV260 board to maximise efficiency and throughput.

Risk Concerns and their mitigation
The Kria KV260 FPGA has limited resources (logic cells, block RAM, DSP slices). Complex hash function implementations might exceed these limitations.

Mitigation - Focus on pipelining, unrolling, and resource sharing to minimise resource usage and/or consider simplifying the design or reducing parallelism if resource constraints become a bottleneck.

Achieving timing closure (ensuring the design meets timing constraints) can be challenging. Additionally, unexpected performance bottlenecks might arise during implementation.

Mitigation - Use timing analysis tools to identify and resolve timing issues, apply optimisations like pipelining and retiming to improve timing and/or refine the design based on performance analysis and feedback.

Integrating the hardware accelerators with the software miner can be complex, requiring careful design of interfaces and drivers.

Mitigation - Design the hardware and software components in a modular way, allowing for easier integration and testing.
