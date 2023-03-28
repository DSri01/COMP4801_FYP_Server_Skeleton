/*
FYP : 22013

Module:
    Server Skeleton - Analytical Query Handlers

Description:
    Defines the functions that serve the analytical queries sent by the Hybrid
    Query Driver.
*/

#include "AQH000_analysis_handler.h"

/*
Description:
    Serves analytical query AQ_1.
*/
void perform_AQ_1(json request, json* response_pointer){
  json response = *response_pointer;

  unsigned long bfs_root_vertex_id = request["ROOT_VERTEX_ID"].get<unsigned long>();
  /*--------------------------------------------------------------------------*/
  /*PERFORM AQ_1: BFS HERE*/

  /*--------------------------------------------------------------------------*/

  /****************************************************************************/
  /*PERFORM FRESHNESS SCORE STEP FOR ANALYTICAL QUERIES HERE*/

  /*READ THE TRANSACTION IDS OF THE FRESHNESS SCORE VERTEX CORRESPONDING TO THE
  TRANSACTIONAL THREAD ID AND PUT IT IN THE MAP: freshness_score_vertex_transaction_id_map*/

  std::map <std::string, unsigned long> freshness_score_vertex_transaction_id_map;

  unsigned long first_fs_vertex_id = request["FIRST_FRESHNESS_SCORE_ID"].get<unsigned long>();
  int number_of_transactional_threads = request["NUMBER_OF_TRANSACTIONAL_THREADS"].get<int>();

  for (int i = 0; i < number_of_transactional_threads; i++) {
    std::string key = "thread";
    key = key + std::to_string(i);

    unsigned long current_fs_vertex_id = first_fs_vertex_id + i;
    /*READ TRANSACTION_ID AND PUT IN MAP*/
    unsigned long fs_transaction_id = 17;
    freshness_score_vertex_transaction_id_map[key] = fs_transaction_id;
  }
  /****************************************************************************/

  response["FRESHNESS_SCORE_TRANSACTION_IDS"] = freshness_score_vertex_transaction_id_map;

  /*UPDATE SUCCESS IF BOTH OPERATIONS ARE SUCCESSFUL*/
  response["SUCCESS"] = true;

  *response_pointer = response;
}

/*
Description:
    Serves analytical query AQ_2.
*/
void perform_AQ_2(json request, json* response_pointer){
  json response = *response_pointer;

  int pr_max_iters = request["PR_MAX_ITERS"].get<int>();
  double pr_damping_factor = request["PR_DAMPING_FACTOR"].get<double>();
  /*--------------------------------------------------------------------------*/
  /*PERFORM AQ_2: PageRank HERE*/

  /*--------------------------------------------------------------------------*/

  /****************************************************************************/
  /*PERFORM FRESHNESS SCORE STEP FOR ANALYTICAL QUERIES HERE*/

  /*READ THE TRANSACTION IDS OF THE FRESHNESS SCORE VERTEX CORRESPONDING TO THE
  TRANSACTIONAL THREAD ID AND PUT IT IN THE MAP: freshness_score_vertex_transaction_id_map*/

  std::map <std::string, unsigned long> freshness_score_vertex_transaction_id_map;

  unsigned long first_fs_vertex_id = request["FIRST_FRESHNESS_SCORE_ID"].get<unsigned long>();
  int number_of_transactional_threads = request["NUMBER_OF_TRANSACTIONAL_THREADS"].get<int>();

  for (int i = 0; i < number_of_transactional_threads; i++) {
    std::string key = "thread";
    key = key + std::to_string(i);

    unsigned long current_fs_vertex_id = first_fs_vertex_id + i;
    /*READ TRANSACTION_ID AND PUT IN MAP*/
    unsigned long fs_transaction_id = 18;
    freshness_score_vertex_transaction_id_map[key] = fs_transaction_id;
  }
  /****************************************************************************/

  response["FRESHNESS_SCORE_TRANSACTION_IDS"] = freshness_score_vertex_transaction_id_map;

  /*UPDATE SUCCESS IF BOTH OPERATIONS ARE SUCCESSFUL*/
  response["SUCCESS"] = true;

  *response_pointer = response;
}

/*
Description:
    Serves analytical query AQ_3.
*/
void perform_AQ_3(json request, json* response_pointer){
  json response = *response_pointer;

  /*--------------------------------------------------------------------------*/
  /*PERFORM AQ_3: WCC HERE*/

  /*--------------------------------------------------------------------------*/

  /****************************************************************************/
  /*PERFORM FRESHNESS SCORE STEP FOR ANALYTICAL QUERIES HERE*/

  /*READ THE TRANSACTION IDS OF THE FRESHNESS SCORE VERTEX CORRESPONDING TO THE
  TRANSACTIONAL THREAD ID AND PUT IT IN THE MAP: freshness_score_vertex_transaction_id_map*/

  std::map <std::string, unsigned long> freshness_score_vertex_transaction_id_map;

  unsigned long first_fs_vertex_id = request["FIRST_FRESHNESS_SCORE_ID"].get<unsigned long>();
  int number_of_transactional_threads = request["NUMBER_OF_TRANSACTIONAL_THREADS"].get<int>();

  for (int i = 0; i < number_of_transactional_threads; i++) {
    std::string key = "thread";
    key = key + std::to_string(i);

    unsigned long current_fs_vertex_id = first_fs_vertex_id + i;
    /*READ TRANSACTION_ID AND PUT IN MAP*/
    unsigned long fs_transaction_id = 19;
    freshness_score_vertex_transaction_id_map[key] = fs_transaction_id;
  }
  /****************************************************************************/

  response["FRESHNESS_SCORE_TRANSACTION_IDS"] = freshness_score_vertex_transaction_id_map;

  /*UPDATE SUCCESS IF BOTH OPERATIONS ARE SUCCESSFUL*/
  response["SUCCESS"] = true;

  *response_pointer = response;
}

/*
Description:
    Serves analytical query AQ_4.
*/
void perform_AQ_4(json request, json* response_pointer){
  json response = *response_pointer;

  /*--------------------------------------------------------------------------*/
  /*PERFORM AQ_4: LCC HERE*/

  /*--------------------------------------------------------------------------*/

  /****************************************************************************/
  /*PERFORM FRESHNESS SCORE STEP FOR ANALYTICAL QUERIES HERE*/

  /*READ THE TRANSACTION IDS OF THE FRESHNESS SCORE VERTEX CORRESPONDING TO THE
  TRANSACTIONAL THREAD ID AND PUT IT IN THE MAP: freshness_score_vertex_transaction_id_map*/

  std::map <std::string, unsigned long> freshness_score_vertex_transaction_id_map;

  unsigned long first_fs_vertex_id = request["FIRST_FRESHNESS_SCORE_ID"].get<unsigned long>();
  int number_of_transactional_threads = request["NUMBER_OF_TRANSACTIONAL_THREADS"].get<int>();

  for (int i = 0; i < number_of_transactional_threads; i++) {
    std::string key = "thread";
    key = key + std::to_string(i);

    unsigned long current_fs_vertex_id = first_fs_vertex_id + i;
    /*READ TRANSACTION_ID AND PUT IN MAP*/
    unsigned long fs_transaction_id = 20;
    freshness_score_vertex_transaction_id_map[key] = fs_transaction_id;
  }
  /****************************************************************************/

  response["FRESHNESS_SCORE_TRANSACTION_IDS"] = freshness_score_vertex_transaction_id_map;

  /*UPDATE SUCCESS IF BOTH OPERATIONS ARE SUCCESSFUL*/
  response["SUCCESS"] = true;

  *response_pointer = response;
}

/*
Description:
    Serves analytical query AQ_5.
*/
void perform_AQ_5(json request, json* response_pointer){
  json response = *response_pointer;

  int cdlp_max_iters = request["CDLP_MAX_ITERS"].get<int>();
  /*--------------------------------------------------------------------------*/
  /*PERFORM AQ_5: CDLP HERE*/

  /*--------------------------------------------------------------------------*/

  /****************************************************************************/
  /*PERFORM FRESHNESS SCORE STEP FOR ANALYTICAL QUERIES HERE*/

  /*READ THE TRANSACTION IDS OF THE FRESHNESS SCORE VERTEX CORRESPONDING TO THE
  TRANSACTIONAL THREAD ID AND PUT IT IN THE MAP: freshness_score_vertex_transaction_id_map*/

  std::map <std::string, unsigned long> freshness_score_vertex_transaction_id_map;

  unsigned long first_fs_vertex_id = request["FIRST_FRESHNESS_SCORE_ID"].get<unsigned long>();
  int number_of_transactional_threads = request["NUMBER_OF_TRANSACTIONAL_THREADS"].get<int>();

  for (int i = 0; i < number_of_transactional_threads; i++) {
    std::string key = "thread";
    key = key + std::to_string(i);

    unsigned long current_fs_vertex_id = first_fs_vertex_id + i;
    /*READ TRANSACTION_ID AND PUT IN MAP*/
    unsigned long fs_transaction_id = 21;
    freshness_score_vertex_transaction_id_map[key] = fs_transaction_id;
  }
  /****************************************************************************/

  response["FRESHNESS_SCORE_TRANSACTION_IDS"] = freshness_score_vertex_transaction_id_map;

  /*UPDATE SUCCESS IF BOTH OPERATIONS ARE SUCCESSFUL*/
  response["SUCCESS"] = true;

  *response_pointer = response;
}

/*
Description:
    Serves analytical query AQ_6.
*/
void perform_AQ_6(json request, json* response_pointer){
  json response = *response_pointer;

  unsigned long sssp_root_vertex_id = request["ROOT_VERTEX_ID"].get<unsigned long>();
  /*--------------------------------------------------------------------------*/
  /*PERFORM AQ_6: SSSP HERE*/

  /*--------------------------------------------------------------------------*/

  /****************************************************************************/
  /*PERFORM FRESHNESS SCORE STEP FOR ANALYTICAL QUERIES HERE*/

  /*READ THE TRANSACTION IDS OF THE FRESHNESS SCORE VERTEX CORRESPONDING TO THE
  TRANSACTIONAL THREAD ID AND PUT IT IN THE MAP: freshness_score_vertex_transaction_id_map*/

  std::map <std::string, unsigned long> freshness_score_vertex_transaction_id_map;

  unsigned long first_fs_vertex_id = request["FIRST_FRESHNESS_SCORE_ID"].get<unsigned long>();
  int number_of_transactional_threads = request["NUMBER_OF_TRANSACTIONAL_THREADS"].get<int>();

  for (int i = 0; i < number_of_transactional_threads; i++) {
    std::string key = "thread";
    key = key + std::to_string(i);

    unsigned long current_fs_vertex_id = first_fs_vertex_id + i;
    /*READ TRANSACTION_ID AND PUT IN MAP*/
    unsigned long fs_transaction_id = 22;
    freshness_score_vertex_transaction_id_map[key] = fs_transaction_id;
  }
  /****************************************************************************/

  response["FRESHNESS_SCORE_TRANSACTION_IDS"] = freshness_score_vertex_transaction_id_map;

  /*UPDATE SUCCESS IF BOTH OPERATIONS ARE SUCCESSFUL*/
  response["SUCCESS"] = true;

  *response_pointer = response;
}
