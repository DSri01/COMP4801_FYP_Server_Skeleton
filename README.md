# COMP4801_FYP_Server_Skeleton

## FYP: 22013

### FYP Team

**Student:** SRIVASTAVA Dhruv (3035667792)

**Supervisor:** Dr. Heming Cui

## Description

Database Server Skeleton for the evaluation phase of the project.

## Usage Instructions

This Server Skeleton is intended to be used with storage systems for HTAP Graph
Database Systems to build a purpose-built database systems to store and serve the
queries in this benchmark during the evaluation phase of the project. This
server skeleton provides a uniform interface for the *Hybrid Query Driver* during
experimentation.

### Building the executable

Download the ```json.hpp``` file from ```https://github.com/nlohmann/json/releases/tag/v3.11.2```
and put it in the ```third_party``` folder.

The following libraries/compilers were used during development:

- nlohmann json (v3.11.2)
- g++ (version 9.3.0)

Build the executable using ```make main_server``` command.

## Module Description

| Module Name | Description | Directory |
|-------------|-------------|-----------|
|DSS (Database Server Skeleton)| Brings all Server Skeleton components together to build a purpose-built server | ./ |
|SCD (Skeleton Common Definition)| Defines common data types and methods to be used across the server | common/ |
|SEI (Skeleton Edge Insertor)| Defines the functions that will insert the edges in the base data of the benchmark | edge_insertion_methods/ |
|SVI (Skeleton Vertex Insertor)| Defines the functions that will insert the vertices in the base data of the benchmark | vertex_insertion_methods/ |
|TQH (Transactional Query Handler)| Defines the functions that will serve the transactional queries of the benchmark | transactional_query_methods/ |
|AQH (Analytical Query Handler)| Defines the functions that will serve the analytical queries of the benchmark | analytical_query_methods/ |
