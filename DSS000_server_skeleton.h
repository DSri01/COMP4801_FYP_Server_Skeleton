/*
FYP : 22013

Module:
    Server Skeleton

Description:
    Header file for the main file for the main function file of the Server
    Skeleton.

*/

#include "common/SCD001_common_types.h"
#include "edge_insertion_methods/SEI000_edge_insertors.h"
#include "vertex_insertion_methods/SVI000_vertex_insertors.h"
#include "transactional_query_methods/TQH000_transaction_handler.h"
#include "analytical_query_methods/AQH000_analysis_handler.h"

#include "third_party/json.hpp"

#include <iostream>
#include <netinet/in.h>
#include <pthread.h>
#include <string>
#include <sys/socket.h>
#include <unistd.h>

using json = nlohmann::json;

#ifndef DSS000_SERVER_SKELETON
#define DSS000_SERVER_SKELETON

#define DB_SERVER_PORT_NUMBER 12560

/*
Defines the data to be sent from the main thread to each thread spawned for
serving the query received from the Hybrid Query Driver.
*/
struct thread_data {
  int socket_fd;
};

/*
Defines the global variable for the data structures to be shared across the
programme in order to process the queries.
*/
Global_Data GD = {

};

void send_reply(int, json);

void* thread_job(void*);

int main(int, char**);

#endif
