# ECSA2025 Raw Data and Analysis Results

This repository contains the raw outputs, analysis data, and refactored code associated with the paper _"Technical Debt in High-Performance Software: A Case Study of Boost.Asio and the Doom Engine."_ Its purpose is to provide full transparency into the data and code that support the study’s findings.

## Repository Structure

- **data/**  
  Contains raw outputs and summary metrics:
- **static_analysis/**  
    - PNG images exported from Arcan. Due to the nonstatic nature of these tools, an HTML export was not available, therefore the figures and data snapshots used in the paper have been saved as PNG files.


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

## How to Reproduce the Analysis

To ensure full reproducibility of the study's results, the following steps outline how to obtain the data using open-source tools:

### Requirements

- **Arcan:**  
  Used to generate static analysis data and produce visual outputs from the source code. Please refer to the [Arcan documentation](https://docs.arcan.tech/2.9.0/) for installation and usage instructions.

- **Understand:**  
  Used for detailed static analysis, generating metrics like cyclomatic complexity and dependency counts. See the [Understand documentation](https://docs.scitools.com/) for setup and configuration.

### Steps

1. **Download the Open-Source Code:**
   - Clone or download the repositories for Doom and Boost.Asio.

2. **Generate Analysis Data with Arcan:**
   - Follow the instructions in the [Arcan documentation](https://docs.arcan.tech/2.9.0/) to set up and run Arcan on the source code.


3. **Generate Analysis Data with Understand:**
   - Configure Understand according to the [Understand documentation](https://docs.scitools.com/).
   - Run the analysis on the source code to generate reports and metrics.

### Additional Notes

- **Data & Figures:**  
  The files within `data/static_analysis/` include exported outputs and figures from Arcan that illustrate key findings of the paper. These static snapshots are intended to complement the dynamic outputs that you would see when running the tools.



