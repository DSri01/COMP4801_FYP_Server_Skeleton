/*
FYP : 22013

Module:
    Server Skeleton - Transaction Query Handlers

Description:
    Defines the functions that serve the transactional queries sent by the
    Hybrid Query Driver.
*/

#include "TQH000_transaction_handler.h"

/*
Description:
    Serves transactional query TQ_1_A.
*/
void perform_TQ_1_A(json request, json* response_pointer){
  json response = *response_pointer;

  unsigned long new_trade_id = request["NEW_TRADE_ID"].get<unsigned long>();
  unsigned long original_investor_ID = request["ORIGINAL_INVESTOR_ID"].get<unsigned long>();
  uint64_t original_timestamp = request["ORIGINAL_TIMESTAMP"].get<uint64_t>();

  std::map <std::string, unsigned long> company_id_map = request["COMPANY_ID_MAP"].get<std::map <std::string, unsigned long>>();
  std::map <std::string, int> company_quantity_map = request["COMPANY_QUANTITY_MAP"].get<std::map <std::string, int>>();
  std::map <std::string, bool> company_action_map = request["COMPANY_ACTION_MAP"].get<std::map <std::string, bool>>();
  /*--------------------------------------------------------------------------*/
  /*PERFORM TQ_1_A: MAKE ORIGINAL TRADE HERE*/

  //ADD TRADE VERTEX
  //ADD trades EDGES
  //ADD contains EDGES

  /*--------------------------------------------------------------------------*/

  /****************************************************************************/

  /*PERFORM FRESHNESS SCORE STEP FOR TRANSACTIONS HERE*/

  /*UPDATE THE TRANSACTION ID OF THE FRESHNESS SCORE VERTEX CORRESPONDING TO THE
  TRANSACTIONAL THREAD ID*/
  unsigned long fs_vertex_to_update = request["FRESHNESS_SCORE_ID"].get<unsigned long>();
  unsigned long fs_transaction_id = request["FS_TRANSACTION_ID"].get<unsigned long>();

  /****************************************************************************/

  /*UPDATE SUCCESS IF BOTH OPERATIONS ARE SUCCESSFUL*/
  response["SUCCESS"] = true;

  *response_pointer = response;
}

/*
Description:
    Serves transactional query TQ_1_B.
*/
void perform_TQ_1_B(json request, json* response_pointer){
  json response = *response_pointer;

  unsigned long trade_id_to_copry = request["TRADE_ID_TO_COPY"].get<unsigned long>();
  unsigned long copier_investor_ID = request["COPIER_INVESTOR_ID"].get<unsigned long>();
  uint64_t current_timestamp = request["CURRENT_TIMESTAMP"].get<uint64_t>();
  /*--------------------------------------------------------------------------*/
  /*PERFORM TQ_1_B: MAKE COPY TRADE HERE*/

  //ADD contains EDGES (OR UPDATE THEM IF THEY ALREADY EXIST)

  /*--------------------------------------------------------------------------*/

  /****************************************************************************/

  /*PERFORM FRESHNESS SCORE STEP FOR TRANSACTIONS HERE*/

  /*UPDATE THE TRANSACTION ID OF THE FRESHNESS SCORE VERTEX CORRESPONDING TO THE
  TRANSACTIONAL THREAD ID*/
  unsigned long fs_vertex_to_update = request["FRESHNESS_SCORE_ID"].get<unsigned long>();
  unsigned long fs_transaction_id = request["FS_TRANSACTION_ID"].get<unsigned long>();

  /****************************************************************************/

  /*UPDATE SUCCESS IF BOTH OPERATIONS ARE SUCCESSFUL*/
  response["SUCCESS"] = true;

  *response_pointer = response;
}

/*
Description:
    Serves transactional query TQ_2.
*/
void perform_TQ_2(json request, json* response_pointer){
  json response = *response_pointer;

  unsigned long read_investor_ID = request["READ_INVESTOR_ID"].get<unsigned long>();
  /*--------------------------------------------------------------------------*/
  /*PERFORM TQ_2: READ INVESTOR PROFILE HERE*/

  //READ DATA AND UPDATE IT IN THE RESPONSE

  response["INVESTOR_NAME"] = "investor_name";
  response["INVESTMENT_AMOUNT"] = 10000;

  /*--------------------------------------------------------------------------*/

  /****************************************************************************/

  /*PERFORM FRESHNESS SCORE STEP FOR TRANSACTIONS HERE*/

  /*UPDATE THE TRANSACTION ID OF THE FRESHNESS SCORE VERTEX CORRESPONDING TO THE
  TRANSACTIONAL THREAD ID*/
  unsigned long fs_vertex_to_update = request["FRESHNESS_SCORE_ID"].get<unsigned long>();
  unsigned long fs_transaction_id = request["FS_TRANSACTION_ID"].get<unsigned long>();

  /****************************************************************************/

  /*UPDATE SUCCESS IF BOTH OPERATIONS ARE SUCCESSFUL*/
  response["SUCCESS"] = true;

  *response_pointer = response;
}

/*
Description:
    Serves transactional query TQ_3.
*/
void perform_TQ_3(json request, json* response_pointer){
  json response = *response_pointer;

  unsigned long read_investor_ID = request["READ_INVESTOR_ID"].get<unsigned long>();
  /*--------------------------------------------------------------------------*/
  /*PERFORM TQ_3: READ INVESTOR'S MOST RECENT TRADE HERE*/

  //READ DATA AND UPDATE IT IN THE RESPONSE

  response["HAS_TRADED"] = true;
  response["LATEST_TRADE_ID"] = 1000000;

  /*--------------------------------------------------------------------------*/

  /****************************************************************************/

  /*PERFORM FRESHNESS SCORE STEP FOR TRANSACTIONS HERE*/

  /*UPDATE THE TRANSACTION ID OF THE FRESHNESS SCORE VERTEX CORRESPONDING TO THE
  TRANSACTIONAL THREAD ID*/
  unsigned long fs_vertex_to_update = request["FRESHNESS_SCORE_ID"].get<unsigned long>();
  unsigned long fs_transaction_id = request["FS_TRANSACTION_ID"].get<unsigned long>();

  /****************************************************************************/

  /*UPDATE SUCCESS IF BOTH OPERATIONS ARE SUCCESSFUL*/
  response["SUCCESS"] = true;

  *response_pointer = response;
}

/*
Description:
    Serves transactional query TQ_4.
*/
void perform_TQ_4(json request, json* response_pointer){
  json response = *response_pointer;

  unsigned long read_company_ID = request["READ_COMPANY_ID"].get<unsigned long>();
  /*--------------------------------------------------------------------------*/
  /*PERFORM TQ_4: READ COMPANY PROFILE HERE*/

  //READ DATA AND UPDATE IT IN THE RESPONSE

  response["COMPANY_NAME"] = "read_company_name";

  /*--------------------------------------------------------------------------*/

  /****************************************************************************/

  /*PERFORM FRESHNESS SCORE STEP FOR TRANSACTIONS HERE*/

  /*UPDATE THE TRANSACTION ID OF THE FRESHNESS SCORE VERTEX CORRESPONDING TO THE
  TRANSACTIONAL THREAD ID*/
  unsigned long fs_vertex_to_update = request["FRESHNESS_SCORE_ID"].get<unsigned long>();
  unsigned long fs_transaction_id = request["FS_TRANSACTION_ID"].get<unsigned long>();

  /****************************************************************************/

  /*UPDATE SUCCESS IF BOTH OPERATIONS ARE SUCCESSFUL*/
  response["SUCCESS"] = true;

  *response_pointer = response;
}

/*
Description:
    Serves transactional query TQ_5.
*/
void perform_TQ_5(json request, json* response_pointer){
  json response = *response_pointer;

  unsigned long read_investor_ID = request["READ_INVESTOR_ID"].get<unsigned long>();
  /*--------------------------------------------------------------------------*/
  /*PERFORM TQ_5: READ ALL MIRRORING INVESTORS HERE*/

  //READ DATA AND STORE THE IDs IN THE VECTOR: mirror_id_vector

  std::vector <unsigned long> mirror_id_vector;
  mirror_id_vector.push_back(10);

  /*--------------------------------------------------------------------------*/

  /****************************************************************************/

  /*PERFORM FRESHNESS SCORE STEP FOR TRANSACTIONS HERE*/

  /*UPDATE THE TRANSACTION ID OF THE FRESHNESS SCORE VERTEX CORRESPONDING TO THE
  TRANSACTIONAL THREAD ID*/
  unsigned long fs_vertex_to_update = request["FRESHNESS_SCORE_ID"].get<unsigned long>();
  unsigned long fs_transaction_id = request["FS_TRANSACTION_ID"].get<unsigned long>();

  /****************************************************************************/

  response["MIRRORING_INVESTOR_LIST"] = mirror_id_vector;

  /*UPDATE SUCCESS IF BOTH OPERATIONS ARE SUCCESSFUL*/
  response["SUCCESS"] = true;

  *response_pointer = response;
}

/*
Description:
    Serves transactional query TQ_6.
*/
void perform_TQ_6(json request, json* response_pointer){
  json response = *response_pointer;

  unsigned long read_investor_ID = request["READ_INVESTOR_ID"].get<unsigned long>();
  /*--------------------------------------------------------------------------*/
  /*PERFORM TQ_6: READ MOST RECENT TRADE OF IMMEDIATE FRIENDS HERE*/

  //READ DATA AND STORE THE IDs IN THE VECTOR: friend_trade_id_vector

  std::vector <unsigned long> friend_trade_id_vector;
  friend_trade_id_vector.push_back(10);

  /*--------------------------------------------------------------------------*/

  /****************************************************************************/

  /*PERFORM FRESHNESS SCORE STEP FOR TRANSACTIONS HERE*/

  /*UPDATE THE TRANSACTION ID OF THE FRESHNESS SCORE VERTEX CORRESPONDING TO THE
  TRANSACTIONAL THREAD ID*/
  unsigned long fs_vertex_to_update = request["FRESHNESS_SCORE_ID"].get<unsigned long>();
  unsigned long fs_transaction_id = request["FS_TRANSACTION_ID"].get<unsigned long>();

  /****************************************************************************/

  response["FRIEND_TRADE_LIST"] = friend_trade_id_vector;

  /*UPDATE SUCCESS IF BOTH OPERATIONS ARE SUCCESSFUL*/
  response["SUCCESS"] = true;

  *response_pointer = response;
}

/*
Description:
    Serves transactional query TQ_7.
*/
void perform_TQ_7(json request, json* response_pointer){
  json response = *response_pointer;

  unsigned long update_investor_ID = request["UPDATE_INVESTOR_ID"].get<unsigned long>();
  int new_investment_amount = request["NEW_INVESTMENT_AMOUNT"].get<int>();
  /*--------------------------------------------------------------------------*/
  /*PERFORM TQ_7: UPDATE INVESTMENT AMOUNT HERE*/

  //UPDATE TradeBook investment amount WITH NEW AMOUNT

  /*--------------------------------------------------------------------------*/

  /****************************************************************************/

  /*PERFORM FRESHNESS SCORE STEP FOR TRANSACTIONS HERE*/

  /*UPDATE THE TRANSACTION ID OF THE FRESHNESS SCORE VERTEX CORRESPONDING TO THE
  TRANSACTIONAL THREAD ID*/
  unsigned long fs_vertex_to_update = request["FRESHNESS_SCORE_ID"].get<unsigned long>();
  unsigned long fs_transaction_id = request["FS_TRANSACTION_ID"].get<unsigned long>();

  /****************************************************************************/


  /*UPDATE SUCCESS IF BOTH OPERATIONS ARE SUCCESSFUL*/
  response["SUCCESS"] = true;

  *response_pointer = response;
}

/*
Description:
    Serves transactional query TQ_8.
*/
void perform_TQ_8(json request, json* response_pointer){
  json response = *response_pointer;

  unsigned long source_tradebook_ID = request["SOURCE_TRADEBOOK_ID"].get<unsigned long>();
  unsigned long destination_tradebook_ID = request["DESTINATION_TRADEBOOK_ID"].get<unsigned long>();
  /*--------------------------------------------------------------------------*/
  /*PERFORM TQ_8: REMOVE MIRROR EDGE HERE*/

  //REMOVE mirrors EDGE

  /*--------------------------------------------------------------------------*/

  /****************************************************************************/

  /*PERFORM FRESHNESS SCORE STEP FOR TRANSACTIONS HERE*/

  /*UPDATE THE TRANSACTION ID OF THE FRESHNESS SCORE VERTEX CORRESPONDING TO THE
  TRANSACTIONAL THREAD ID*/
  unsigned long fs_vertex_to_update = request["FRESHNESS_SCORE_ID"].get<unsigned long>();
  unsigned long fs_transaction_id = request["FS_TRANSACTION_ID"].get<unsigned long>();

  /****************************************************************************/


  /*UPDATE SUCCESS IF BOTH OPERATIONS ARE SUCCESSFUL*/
  response["SUCCESS"] = true;

  *response_pointer = response;
}
