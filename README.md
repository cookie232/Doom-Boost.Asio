# ECSA2025 Raw Data and Analysis Results

This repository contains the raw outputs, analysis data, and refactored code associated with the paper _"Technical Debt in High-Performance Software: A Case Study of Boost.Asio and the Doom Engine."_ Its purpose is to provide full transparency into the data and code that support the study’s findings.

## Repository Structure

- **data/**  
  Contains raw outputs and summary metrics:
  - **static_analysis/**  


- **code/**  
  Contains source code segments before and after refactoring:
  - **doom/**  
    - **original/**  
      - `enemy_attack_pre.cpp` – Original implementation of Doom’s enemy attack behavior.
    - **refactored/**  
      - `enemy_attack.cpp` – Refactored version with an object-oriented design.
  - **boost_asio/**  
    - **original/**  
      - `socket_handling.cpp` – Original inline implementation for Boost.Asio’s socket handling.
    - **refactored/**  
      - `socket_handling_post.cpp` – Refactored implementation using a `TcpClient` class.


- **README.md**  
  This file, which documents the repository contents and provides instructions.


## Additional Information

- This repository is intended to complement the published paper. For more detailed explanations regarding the methodology and data interpretation, please refer to the paper.
